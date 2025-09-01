Olá, para exutar de maneira correta o progrma de super trunfo, ao copia-lo para sua IDE abra o terminal,abra o terminal e verifique o caminho para ter certeza que esta no local do codigo fonte, logo em seeguida, 
escreva o seguinte comando " gcc super_trunfo.c -o trunfo " (Esse comando segue a logica de compilção onde "gcc" = corresponde ao compilador "super_trunfo.c" = corresponde ao aquivo a ser compilado "-o" = flag 
que corresponde a criação do nome do arquivo executavel que no caso escolhi "trunfo"), apos a compilção, digite o comando a seguir para executar o codigo, " ./trunfo ", se todos os passos foram seguidos da maneira 
correta, você terá o super trunfo rodando em seu ambiente de desenvolvimento.

!!!IMPORTANTE!!!
esse metodo é para o visual estudio code, caso não seja o seu nao sei como resolver 100%
Eu tive um problema na hora de executar o programa, referente ao não suporte ah UTF-8 do meu terminal,(Acontece bastante com WINDOWS), como resolvi? Você vai no seu settings.json no seu VS code e cole a seguinte
linha de codigo:
{
    "terminal.integrated.profiles.windows": {
        "PowerShell": {
            "source": "PowerShell",
            "args": ["-NoExit", "-Command", "chcp 65001"]
        }
    },
    "terminal.integrated.defaultProfile.windows": "PowerShell"
}

salve e saia das configs, apartir dai entre no terminal do proprio editor e escreva esse comando: chcp 65001

isso fará que seu terminal tenha suporte a UTF-8.

