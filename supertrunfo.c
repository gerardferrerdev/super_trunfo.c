#include <stdio.h>
#include <windows.h>

int main() {

    char letraEstado[10];
    char nomeCidade[50];
    int numeroCarta;
    int quantidadeHabitantes;
    int turistico;
    float area;
    float pib;
    //dupliquei as variaveis para armazenas as duas cartas separatamente
    char letraEstado02[10];
    char nomeCidade02[50];
    int numeroCarta02;
    int quantidadeHabitantes02;
    int turistico02;
    float area02;
    float pib02;
    
    
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
    
    printf("Primeira carta registrada, vamos partir para a proxima\n");

    // dessa linha para baixo temos a repetição das perguntas para a coleta da segunda carta

    printf("Os dados são os mesmo, por favor informe\n");
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

    /*
    Carta 1:
    Estado: A
    Código: A01
    Nome da Cidade: São Paulo
    População: 12325000
    Área: 1521.11 km²
    PIB: 699.28 bilhões de reais
    Número de Pontos Turísticos: 50
    */
   printf("carta 1: \n");
   printf("Estado: %s\n", letraEstado);
   printf("Codigo: %s0%d\n", letraEstado, numeroCarta);
   printf("Nome da cidade: %s\n", nomeCidade);
   printf("Populção: %d\n", quantidadeHabitantes);
   printf("Área: %f km/2\n ", area);
   printf("PIB: %f bilhões de reais\n", pib);
   printf("Número de pontos turísticos: %d\n\n\n", turistico);

   // sugunda parte de exibição das informações

    printf("carta 2: \n");
   printf("Estado: %s\n", letraEstado02);
   printf("Codigo: %s0%d\n", letraEstado02, numeroCarta02);
   printf("Nome da cidade: %s\n", nomeCidade02);
   printf("Populção: %d\n", quantidadeHabitantes02);
   printf("Área: %f km/2\n ", area02);
   printf("PIB: %f bilhões de reais\n", pib02);
   printf("Número de pontos turísticos: %d\n", turistico02);



    return 0;
}