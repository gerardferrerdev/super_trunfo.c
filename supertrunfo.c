#include <stdio.h>
//unsigned, long
int main() {
    char letraEstado[10];
    char nomeCidade[50];
    int numeroCarta;
    unsigned long int quantidadeHabitantes;
    int turistico;
    float area;
    float pib;
    float densidadePopulacional = quantidadeHabitantes / area;
    float pibPercap = pib / quantidadeHabitantes;
    float superPoder = (float) quantidadeHabitantes + (float) turistico + area + pib + pibPercap - densidadePopulacional;
    //dupliquei as variaveis para armazenas as duas cartas separatamente
    char letraEstado02[10];
    char nomeCidade02[50];
    int numeroCarta02;
    unsigned long int quantidadeHabitantes02;
    int turistico02;
    float area02;
    float pib02;
    float densidadePopulacional02 = quantidadeHabitantes02 / area02;
    float pibPercap02 = pib02 / quantidadeHabitantes02;
    float superPoder02 = (float) quantidadeHabitantes02 + (float) turistico02 + area02 + pib02 + pibPercap02 - densidadePopulacional02;
    
    
    printf("Olá, vamos jogar Super Trunfo?\n");
    printf("Para começar, você deve adicionar duas cartas\n");
    printf("primeiro me vamos indentificar as cartas\n");
    printf("Me diga uma letra maiuscula de A-Z para indentificar a carta: \n");
    scanf("%s", &letraEstado); //aqui utilizaremos o scanf para coletar a letra da carta

    printf("Otimo, agora para juntar a essa eltra vamos adicionar um numero a ela\n que vá de 01-04 por favor: \n");
    scanf("%d", &numeroCarta);

    printf("Outra informação essencial, qual o nome da cidade? \n");
    scanf("%s", &nomeCidade);

    printf("Qantidade de habitantes: \n");
    scanf("%d", &quantidadeHabitantes);

    printf("Quantos quilometros quadrados possui essa cidade?\n");
    scanf("%f", &area);

    printf("Qual o PIB(Produto Intterno Bruto) da cidade?\n");
    scanf("%f", &pib);

    printf("quantos pontos turisticos existem nessa cidade?\n");
    scanf("%d", &turistico);
    
    printf("Primeira carta registrada, vamos partir para a proxima\n\n");

    // dessa linha para baixo temos a repetição das perguntas para a coleta da segunda carta

    printf("Os dados são os mesmos, por favor informe\n");
    printf("Uma letra maiuscula de A-Z para indentificar a carta\n");
    scanf("%s", &letraEstado02); //aqui utilizaremos o scanf para coletar a letra da carta

    printf("um numero de 01-04 por favor: \n");
    scanf("%d", &numeroCarta02);

    printf("Qual o nome da cidade? \n");
    scanf("%s", &nomeCidade02);

    printf("Qantidade de habitantes: \n");
    scanf("%d", &quantidadeHabitantes02);

    printf("Quantos quilometros quadrados possui essa cidade?\n");
    scanf("%f", &area02);

    printf("Qual o PIB(Produto Intterno Bruto) da cidade?\n");
    scanf("%f", &pib02);

    printf("quantos pontos turisticos existem nessa cidade?\n");
    scanf("%d", &turistico02);

    /* apenas um rascunho para inserir as informações de acordo com o pedido
    Carta 1:
    Estado: A
    Código: A01
    Nome da Cidade: São Paulo
    População: 12325000
    Área: 1521.11 km²
    PIB: 699.28 bilhões de reais
    Número de Pontos Turísticos: 50
    */
    int atributo01;

    printf("-------HORA DA BATALHA-------\n\n");
    // atributo = 1(Populção), 2(Area), 3(PIB), 4(pontos turisticos), 5(densidade populacional), 6(PIB per capita), 7(Super poder).
    printf(" QUAL OPÇÂO VOCÊ DESEJA?   \n");
    printf("-----------------------------\n");
    printf("| 1. nomes/atributos        |\n");
    printf("| 2. Area                   |\n");
    printf("| 3. PIB                    |\n");
    printf("| 4. pontos turisticos      |\n");
    printf("| 5. Populção               |\n");
    printf("| 6. densidade populacional |\n");
    printf("| 7. PIB per capita         |\n");
    printf("| 8. Super poder            |\n");
    printf("-----------------------------\n\n");
    printf("Opção N*: \n");
    scanf("%d", &atributo01);
    
    int atributo02 = atributo01;

    switch (atributo01){
        case 1:// nome/atributos
            printf("carta 1: \n");
            printf("Estado: %s\n", letraEstado);
            printf("Codigo: %s0%d\n", letraEstado, numeroCarta);
            printf("Nome da cidade: %s\n", nomeCidade);
            printf("Populção: %d\n", quantidadeHabitantes);
            printf("Área: %.2f km^2\n ", area);
            printf("PIB: %.2f bilhões de reais\n", pib);
            printf("Número de pontos turísticos: %d\n", turistico);
            printf("Densidade Populacional: %.2f hab/km^2\n", densidadePopulacional);
            printf("PIB per Capita: %.2f Reais\n\n\n", pibPercap);

            printf("carta 2: \n");
            printf("Estado: %s\n", letraEstado02);
            printf("Codigo: %s0%d\n", letraEstado02, numeroCarta02);
            printf("Nome da cidade: %s\n", nomeCidade02);
            printf("Populção: %d\n", quantidadeHabitantes02);
            printf("Área: %.2f km^2\n ", area02);
            printf("PIB: %.2f bilhões de reais\n", pib02);
            printf("Número de pontos turísticos: %d\n", turistico02);
            printf("Densidade Populacional: %.2f hab/km^2", densidadePopulacional02);
            printf("PIB per Capita: %.2f Reais\n\n\n", pibPercap02);
            break;
        case 2:// area
            if (area > area02){
                printf("A carta 1: %s ganhou com %.2f km^2 \n\n", nomeCidade, area);
            } else if (area < area02) {
                printf("A carta 2: %s ganhou com %.2f km^2 \n\n", nomeCidade02, area02);
            } else {
                printf("Empate");
            }
            break;

        case 3:// pib
            if (pib > pib02){
                printf("A carta 1: %s ganhou com %.2f milhões de produto interno bruto \n\n", nomeCidade, pib);
            } else if (pib < pib02) {
                printf("A carta 2: %s ganhou com %.2f milhões de produto interno bruto \n\n", nomeCidade02, pib02);
            } else {
                printf("Empate");
            }
            break;

        case 4:// pontos turisticos
            if (turistico > turistico02){
                printf("A carta 1: %s ganhou com %.2f pontos turisticos \n\n", nomeCidade, turistico);
            } else if (turistico < turistico02) {
                printf("A carta 2: %s ganhou com %.2f pontos turisticos \n\n", nomeCidade02, turistico02);
            } else {
                printf("Empate");
            }
            break;

        case 5:// Populaçâo 

            if (quantidadeHabitantes > quantidadeHabitantes02){
                printf("A carta 1: %s ganhou com %.2f, numero de habitantes \n\n", nomeCidade, quantidadeHabitantes);
            } else if (quantidadeHabitantes < quantidadeHabitantes02) {
                printf("A carta 2: %s ganhou com %.2f, numero de habitantes \n\n", nomeCidade02, quantidadeHabitantes02);
            } else {
                printf("Empate");
            }
            break;

            
        case 6:// densidade populacional
            if (densidadePopulacional < densidadePopulacional02){
                printf("A carta 1: %s ganhou com %.2f de densidade populacional \n\n", nomeCidade, densidadePopulacional);
            } else if (densidadePopulacional > densidadePopulacional02) {
                printf("A carta 2: %s ganhou com %.2f de densidade populacional \n\n", nomeCidade02, densidadePopulacional02);
            } else {
                printf("Empate");
            }
            break;
            
        case 7:// pib per capita
            if (pibPercap > pibPercap02){
                printf("A carta 1: %s ganhou com %.2f de pib per capita \n\n", nomeCidade, pibPercap);
            } else if (pibPercap < pibPercap02) {
                printf("A carta 2: %s ganhou com %.2f de pib per capita \n\n", nomeCidade02, pibPercap02);
            } else {
                printf("Empate");
            }
            break;

            case 8:// super poder
            if (superPoder > superPoder02){
                printf("A carta 1: %s ganhou com %.2f de super poder \n\n", nomeCidade, superPoder);
            } else if (superPoder < superPoder02) {
                printf("A carta 2: %s ganhou com %.2f de super poder \n\n", nomeCidade02, superPoder02);
            } else {
                printf("Empate");
            }
            break;
            
        default:
            printf("Opção invalida");

    }
    int atributo03;
    switch (atributo02) {
        case 2:
            printf("-------HORA DA BATALHA-------\n\n");
            // atributo = 1(Populção), 2(Area), 3(PIB), 4(pontos turisticos), 5(densidade populacional), 6(PIB per capita), 7(Super poder).
            printf(" QUAL OPÇÂO VOCÊ DESEJA?   \n");
            printf("-----------------------------\n");
            printf("| 1. nomes/atributos        |\n");
            printf("| 3. PIB                    |\n");
            printf("| 4. pontos turisticos      |\n");
            printf("| 5. Populção               |\n");
            printf("| 6. densidade populacional |\n");
            printf("| 7. PIB per capita         |\n");
            printf("| 8. Super poder            |\n");
            printf("-----------------------------\n\n");
            printf("Opção N*: \n");
            scanf("%d", &atributo03);
                break;
            
        case 3:
            printf("-------HORA DA BATALHA-------\n\n");
            // atributo = 1(Populção), 2(Area), 3(PIB), 4(pontos turisticos), 5(densidade populacional), 6(PIB per capita), 7(Super poder).
            printf(" QUAL OPÇÂO VOCÊ DESEJA?   \n");
            printf("-----------------------------\n");
            printf("| 1. nomes/atributos        |\n");
            printf("| 2. Area                   |\n");
            printf("| 4. pontos turisticos      |\n");
            printf("| 5. Populção               |\n");
            printf("| 6. densidade populacional |\n");
            printf("| 7. PIB per capita         |\n");
            printf("| 8. Super poder            |\n");
            printf("-----------------------------\n\n");
            printf("Opção N*: \n");
            scanf("%d", &atributo03);
                break;
        case 4:
            printf("-------HORA DA BATALHA-------\n\n");
            // atributo = 1(Populção), 2(Area), 3(PIB), 4(pontos turisticos), 5(densidade populacional), 6(PIB per capita), 7(Super poder).
            printf(" QUAL OPÇÂO VOCÊ DESEJA?   \n");
            printf("-----------------------------\n");
            printf("| 1. nomes/atributos        |\n");
            printf("| 2. Area                   |\n");
            printf("| 3. PIB                    |\n");
            printf("| 5. Populção               |\n");
            printf("| 6. densidade populacional |\n");
            printf("| 7. PIB per capita         |\n");
            printf("| 8. Super poder            |\n");
            printf("-----------------------------\n\n");
            printf("Opção N*: \n");
            scanf("%d", &atributo03);
                break;
        case 5:
            printf("-------HORA DA BATALHA-------\n\n");
            // atributo = 1(Populção), 2(Area), 3(PIB), 4(pontos turisticos), 5(densidade populacional), 6(PIB per capita), 7(Super poder).
            printf(" QUAL OPÇÂO VOCÊ DESEJA?   \n");
            printf("-----------------------------\n");
            printf("| 1. nomes/atributos        |\n");
            printf("| 2. Area                   |\n");
            printf("| 3. PIB                    |\n");
            printf("| 4. pontos turisticos      |\n");
            printf("| 6. densidade populacional |\n");
            printf("| 7. PIB per capita         |\n");
            printf("| 8. Super poder            |\n");
            printf("-----------------------------\n\n");
            printf("Opção N*: \n");
            scanf("%d", &atributo03);
                break;
        case 6:
            printf("-------HORA DA BATALHA-------\n\n");
            // atributo = 1(Populção), 2(Area), 3(PIB), 4(pontos turisticos), 5(densidade populacional), 6(PIB per capita), 7(Super poder).
            printf(" QUAL OPÇÂO VOCÊ DESEJA?   \n");
            printf("-----------------------------\n");
            printf("| 1. nomes/atributos        |\n");
            printf("| 2. Area                   |\n");
            printf("| 3. PIB                    |\n");
            printf("| 4. pontos turisticos      |\n");
            printf("| 5. Populção               |\n");
            printf("| 7. PIB per capita         |\n");
            printf("| 8. Super poder            |\n");
            printf("-----------------------------\n\n");
            printf("Opção N*: \n");
            scanf("%d", &atributo03);
                break;
        case 7:
            printf("-------HORA DA BATALHA-------\n\n");
            // atributo = 1(Populção), 2(Area), 3(PIB), 4(pontos turisticos), 5(densidade populacional), 6(PIB per capita), 7(Super poder).
            printf(" QUAL OPÇÂO VOCÊ DESEJA?   \n");
            printf("-----------------------------\n");
            printf("| 1. nomes/atributos        |\n");
            printf("| 2. Area                   |\n");
            printf("| 3. PIB                    |\n");
            printf("| 4. pontos turisticos      |\n");
            printf("| 5. Populção               |\n");
            printf("| 6. densidade populacional |\n");
            printf("| 8. Super poder            |\n");
            printf("-----------------------------\n\n");
            printf("Opção N*: \n");
            scanf("%d", &atributo03);
                break;
        case 8:
            printf("-------HORA DA BATALHA-------\n\n");
            // atributo = 1(Populção), 2(Area), 3(PIB), 4(pontos turisticos), 5(densidade populacional), 6(PIB per capita), 7(Super poder).
            printf(" QUAL OPÇÂO VOCÊ DESEJA?   \n");
            printf("-----------------------------\n");
            printf("| 1. nomes/atributos        |\n");
            printf("| 2. Area                   |\n");
            printf("| 3. PIB                    |\n");
            printf("| 4. pontos turisticos      |\n");
            printf("| 5. Populção               |\n");
            printf("| 6. densidade populacional |\n");
            printf("| 7. PIB per capita         |\n");
            printf("| 8. Super poder            |\n");
            printf("-----------------------------\n\n");
            printf("Opção N*: \n");
            scanf("%d", &atributo03);
                break;
        case 1:
            printf("-------HORA DA BATALHA-------\n\n");
            // atributo = 1(Populção), 2(Area), 3(PIB), 4(pontos turisticos), 5(densidade populacional), 6(PIB per capita), 7(Super poder).
            printf(" QUAL OPÇÂO VOCÊ DESEJA?   \n");
            printf("-----------------------------\n");
            printf("| 1. nomes/atributos        |\n");
            printf("| 2. Area                   |\n");
            printf("| 3. PIB                    |\n");
            printf("| 4. pontos turisticos      |\n");
            printf("| 5. Populção               |\n");
            printf("| 6. densidade populacional |\n");
            printf("| 7. PIB per capita         |\n");
            printf("| 8. Super poder            |\n");
            printf("-----------------------------\n\n");
            printf("Opção N*: \n");
            scanf("%d", &atributo03);
                break;
        default:
            printf("opção invalida tente novamnete");

    }

    switch (atributo03){
        case 1:// nome/atributos
            printf("carta 1: \n");
            printf("Estado: %s\n", letraEstado);
            printf("Codigo: %s0%d\n", letraEstado, numeroCarta);
            printf("Nome da cidade: %s\n", nomeCidade);
            printf("Populção: %d\n", quantidadeHabitantes);
            printf("Área: %.2f km^2\n ", area);
            printf("PIB: %.2f bilhões de reais\n", pib);
            printf("Número de pontos turísticos: %d\n", turistico);
            printf("Densidade Populacional: %.2f hab/km^2\n", densidadePopulacional);
            printf("PIB per Capita: %.2f Reais\n\n\n", pibPercap);

            printf("carta 2: \n");
            printf("Estado: %s\n", letraEstado02);
            printf("Codigo: %s0%d\n", letraEstado02, numeroCarta02);
            printf("Nome da cidade: %s\n", nomeCidade02);
            printf("Populção: %d\n", quantidadeHabitantes02);
            printf("Área: %.2f km^2\n ", area02);
            printf("PIB: %.2f bilhões de reais\n", pib02);
            printf("Número de pontos turísticos: %d\n", turistico02);
            printf("Densidade Populacional: %.2f hab/km^2", densidadePopulacional02);
            printf("PIB per Capita: %.2f Reais\n\n\n", pibPercap02);
            break;
        case 2:// area
            if (area > area02){
                printf("A carta 1: %s ganhou com %.2f km^2 \n\n", nomeCidade, area);
            } else if (area < area02) {
                printf("A carta 2: %s ganhou com %.2f km^2 \n\n", nomeCidade02, area02);
            } else {
                printf("Empate");
            }
            break;

        case 3:// pib
            if (pib > pib02){
                printf("A carta 1: %s ganhou com %.2f milhões de produto interno bruto \n\n", nomeCidade, pib);
            } else if (pib < pib02) {
                printf("A carta 2: %s ganhou com %.2f milhões de produto interno bruto \n\n", nomeCidade02, pib02);
            } else {
                printf("Empate");
            }
            break;

        case 4:// pontos turisticos
            if (turistico > turistico02){
                printf("A carta 1: %s ganhou com %.2f pontos turisticos \n\n", nomeCidade, turistico);
            } else if (turistico < turistico02) {
                printf("A carta 2: %s ganhou com %.2f pontos turisticos \n\n", nomeCidade02, turistico02);
            } else {
                printf("Empate");
            }
            break;

        case 5:// Populaçâo 

            if (quantidadeHabitantes > quantidadeHabitantes02){
                printf("A carta 1: %s ganhou com %.2f, numero de habitantes \n\n", nomeCidade, quantidadeHabitantes);
            } else if (quantidadeHabitantes < quantidadeHabitantes02) {
                printf("A carta 2: %s ganhou com %.2f, numero de habitantes \n\n", nomeCidade02, quantidadeHabitantes02);
            } else {
                printf("Empate");
            }
            break;

            
        case 6:// densidade populacional
            if (densidadePopulacional < densidadePopulacional02){
                printf("A carta 1: %s ganhou com %.2f de densidade populacional \n\n", nomeCidade, densidadePopulacional);
            } else if (densidadePopulacional > densidadePopulacional02) {
                printf("A carta 2: %s ganhou com %.2f de densidade populacional \n\n", nomeCidade02, densidadePopulacional02);
            } else {
                printf("Empate");
            }
            break;
            
        case 7:// pib per capita
            if (pibPercap > pibPercap02){
                printf("A carta 1: %s ganhou com %.2f de pib per capita \n\n", nomeCidade, pibPercap);
            } else if (pibPercap < pibPercap02) {
                printf("A carta 2: %s ganhou com %.2f de pib per capita \n\n", nomeCidade02, pibPercap02);
            } else {
                printf("Empate");
            }
            break;

            case 8:// super poder
            if (superPoder > superPoder02){
                printf("A carta 1: %s ganhou com %.2f de super poder \n\n", nomeCidade, superPoder);
            } else if (superPoder < superPoder02) {
                printf("A carta 2: %s ganhou com %.2f de super poder \n\n", nomeCidade02, superPoder02);
            } else {
                printf("Empate");
            }
            break;
            
        default:
            printf("Opção invalida");
        }

    return 0;
}