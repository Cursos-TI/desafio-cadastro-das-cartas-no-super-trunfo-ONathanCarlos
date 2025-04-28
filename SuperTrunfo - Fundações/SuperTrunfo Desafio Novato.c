#include <stdio.h>

int main() {
    printf("Seja bem vindo ao Cadastramento de Cartas do Super Trunfo do Nathan :D\n");
    printf("Aqui voce criara a sua carta para o jogo Super Trunfo!!\n");

    char nomeestado[30], nomeestado2[30]; 
    char nomecidade[30], nomecidade2[30];
    char letracidade[2], letracidade2[2];
    char codigodacarta[4], codigodacarta2[4];
    int populacao, populacao2;
    float area, area2; 
    float pib, pib2;
    int pontosTuristicos, pontosTuristicos2;

    printf("Vamos comecar criando os dados do seu primeiro Estado. \n\n");

    printf("Insira o nome do seu primeiro Estado: \n");
    scanf(" %s", nomeestado);  
    printf("O nome do seu Estado e: %s\n", nomeestado);

    printf("Insira o nome da cidade do seu primeiro Estado: \n");
    scanf(" %s", nomecidade);  
    printf("O nome do seu Estado e: %s\n", nomecidade);

    printf("Certo, agora insira a letra que represente a cidade do seu estado, de A ate H: \n");
    scanf(" %s", letracidade);
    printf("Voce inseriu a letra %s\n", letracidade);

    printf("Agora, insira um codigo que represente sua cidade com a letra da cidade e um zero antes (exemplo: A01): \n");
    scanf(" %s", codigodacarta);
    printf("O codigo que voce inseriu foi: %s\n", codigodacarta);

    printf("Agora, entre com os seguintes dados da sua cidade: \n");

    printf("Populacao: \n");
    scanf("%d", &populacao);
    printf("A populacao da sua cidade e: %d\n", populacao);

    printf("Area em km2: \n");
    scanf("%f", &area);
    printf("A area da sua cidade tem %.2f km2\n", area);

    printf("PIB do estado: \n");
    scanf("%f", &pib);
    printf("O PIB da sua cidade gira em torno de %.2f bilhoes de reais\n", pib);

    printf("Quantidade de Pontos Turisticos: \n");
    scanf("%d", &pontosTuristicos);
    printf("A sua cidade tem %d pontos turisticos\n\n", pontosTuristicos);

    //////////// CADASTRAMENTO DO SEGUNDO ESTADO ////////////

    printf("Agora, vamos comecar criando os dados do seu segundo Estado. \n\n");

    printf("Insira o nome do seu segundo Estado: \n");
    scanf(" %s", nomeestado2);
    printf("O nome do seu Estado e: %s\n", nomeestado2);

    printf("Insira o nome da cidade do seu segundo Estado: \n");
    scanf(" %s", nomecidade2);  
    printf("O nome do seu Estado e: %s\n", nomecidade2);

    printf("Certo, agora insira a letra que represente a cidade do seu estado, de A ate H: \n");
    scanf(" %s", letracidade2);
    printf("Voce inseriu a letra %s\n", letracidade2);

    printf("Agora, insira um codigo que represente sua cidade com a letra da cidade e um zero antes (exemplo: A01): \n");
    scanf(" %s", codigodacarta2);
    printf("O codigo que voce inseriu foi: %s\n", codigodacarta2);

    printf("Agora, entre com os seguintes dados da sua cidade: \n");

    printf("Populacao: \n");
    scanf("%d", &populacao2);
    printf("A populacao da sua cidade e: %d\n", populacao2);

    printf("Area em km2: \n");
    scanf("%f", &area2);
    printf("A area da sua cidade tem %.2f km2\n", area2);

    printf("PIB do estado: \n");
    scanf("%f", &pib2);
    printf("O PIB da sua cidade gira em torno de %.2f bilhoes de reais\n", pib2);

    printf("Quantidade de Pontos Turisticos: \n");
    scanf("%d", &pontosTuristicos2);
    printf("A sua cidade tem %d pontos turisticos\n\n", pontosTuristicos2);

    //////////// A PARTIR DAQUI ESTARÁ EXIBINDO OS DADOS INSERIDOS ////////////

    printf("De acordo com os dados que voce inseriu, esses sao os estados e suas respectivas cidades:\n\n");

    printf("Nome do primeiro Estado: %s\n", nomeestado);
    printf("Nome da cidade do seu primeiro Estado: %s\n", nomecidade);
    printf("A letra que representa a cidade desse Estado: %s\n", letracidade);
    printf("Codigo da carta: %s\n", codigodacarta);
    printf("Populacao: %d\n", populacao);
    printf("Area em km2: %.2f\n", area);
    printf("PIB em Bilhoes de R$: %.2f\n", pib);
    printf("Quantidade de pontos turisticos: %d\n\n", pontosTuristicos);

    printf("Nome do segundo Estado: %s\n", nomeestado2);
    printf("Nome da cidade do seu segundo Estado: %s\n", nomecidade2);
    printf("A letra que representa a cidade desse Estado: %s\n", letracidade2);
    printf("Codigo da carta: %s\n", codigodacarta2);
    printf("Populacao: %d\n", populacao2);
    printf("Area em km2: %.2f\n", area2);
    printf("PIB em Bilhoes de R$: %.2f\n", pib2);
    printf("Quantidade de pontos turisticos: %d\n\n", pontosTuristicos2);

    printf("Obrigado por usar o sistema de cadastramento de cartas do Super Trunfo!\n");
    printf("Adeus!!\n");

    return 0;
}
