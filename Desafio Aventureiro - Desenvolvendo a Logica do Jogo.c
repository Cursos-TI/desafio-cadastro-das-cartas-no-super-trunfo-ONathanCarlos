#include <stdio.h>

int main() {
    char nomeestado[30], nomeestado2[30]; 
    char nomecidade[30], nomecidade2[30];
    char letracidade[2], letracidade2[2];
    char codigodacarta[4], codigodacarta2[4];
    int populacao, populacao2, escolhaDoJogador;
    float area, area2, densidadepopulacional, densidadepopulacional2; 
    float pib, pib2, pibpercapita, pibpercapita2;
    int pontosTuristicos, pontosTuristicos2;
    double superpoder1, superpoder2;

    printf("Vamos comecar criando os dados do seu primeiro Estado. \n\n");

    printf("Insira o nome do seu primeiro Estado: \n");
    scanf(" %s", nomeestado);  
    printf("O nome do seu Estado e: %s\n", nomeestado);

    printf("Insira o nome da cidade do seu primeiro Estado: \n");
    scanf(" %s", nomecidade);  
    printf("O nome da sua cidade e: %s\n", nomecidade);

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

    densidadepopulacional = populacao / area;
    pibpercapita = (pib * 1e9) / populacao;
    superpoder1 = populacao + area + pib + pontosTuristicos + pibpercapita + (1/densidadepopulacional);

    //////////// CADASTRAMENTO DO SEGUNDO ESTADO ////////////

    printf("Agora, vamos comecar criando os dados do seu segundo Estado. \n\n");

    printf("Insira o nome do seu segundo Estado: \n");
    scanf(" %s", nomeestado2);
    printf("O nome do seu Estado e: %s\n", nomeestado2);

    printf("Insira o nome da cidade do seu segundo Estado: \n");
    scanf(" %s", nomecidade2);  
    printf("O nome da sua cidade e: %s\n", nomecidade2);

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

    densidadepopulacional2 = populacao2 / area2;
    pibpercapita2 = (pib2 * 1e9) / populacao2;
    superpoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibpercapita2 + (1/densidadepopulacional2);

    printf("Agora, escolha um atributo a ser comparado entre as cartas: \n");
    printf("1 - Populacao \n");
    printf("2 - Area \n");
    printf("3 - PIB \n");
    printf("4 - Pontos Turisticos \n");
    printf("5 - Densidade Populacional \n");
    printf("Escolha: ");
    scanf("%d", &escolhaDoJogador);

    switch (escolhaDoJogador) {
        case 1:
            printf("\n Comparação: População \n");
            printf("%s: %d habitantes \n", nomecidade, populacao);
            printf("%s: %d habitantes \n", nomecidade2, populacao2);
            if (populacao > populacao2) 
                printf("Vencedor: %s \n", nomecidade);
            else if (populacao < populacao2)
                printf("Vencedor: %s \n", nomecidade2);
            else 
                printf("Empate! \n");
            break;
        
        case 2:
            printf("\n Comparação: Área \n");
            printf("%s: %.2f km² \n", nomecidade, area);
            printf("%s: %.2f km² \n", nomecidade2, area2);
            if (area > area2) 
                printf("Vencedor: %s \n", nomecidade);
            else if (area < area2)
                printf("Vencedor: %s \n", nomecidade2);
            else 
                printf("Empate! \n");
            break;

        case 3:
            printf("\n Comparação: PIB \n");
            printf("%s: %.2f bilhões \n", nomecidade, pib);
            printf("%s: %.2f bilhões \n", nomecidade2, pib2);
            if (pib > pib2) 
                printf("Vencedor: %s \n", nomecidade);
            else if (pib < pib2)
                printf("Vencedor: %s \n", nomecidade2);
            else 
                printf("Empate! \n");
            break;

        case 4:
            printf("\n Comparação: Pontos Turísticos \n");
            printf("%s: %d pontos turísticos \n", nomecidade, pontosTuristicos);
            printf("%s: %d pontos turísticos \n", nomecidade2, pontosTuristicos2);
            if (pontosTuristicos > pontosTuristicos2) 
                printf("Vencedor: %s \n", nomecidade);
            else if (pontosTuristicos < pontosTuristicos2)
                printf("Vencedor: %s \n", nomecidade2);
            else 
                printf("Empate! \n");
            break;

        case 5:
            printf("\n Comparação: Densidade Demográfica (vence o menor valor!)\n");
            printf("%s: %.2f hab/km² \n", nomecidade, densidadepopulacional);
            printf("%s: %.2f hab/km² \n", nomecidade2, densidadepopulacional2);
            if (densidadepopulacional < densidadepopulacional2) 
                printf("Vencedor: %s \n", nomecidade);
            else if (densidadepopulacional > densidadepopulacional2)
                printf("Vencedor: %s \n", nomecidade2);
            else 
                printf("Empate! \n");
            break;

        default:
            printf("Opção inválida! Reinicie o programa e escolha uma opção válida.\n");
    }

    // Comparação do Superpoder
    printf("\nComparação Final: Superpoder\n");
    printf("%s: %.2lf pontos\n", nomecidade, superpoder1);
    printf("%s: %.2lf pontos\n", nomecidade2, superpoder2);
    if (superpoder1 > superpoder2)
        printf("Vencedor: %s \n", nomecidade);
    else if (superpoder1 < superpoder2)
        printf("Vencedor: %s \n", nomecidade2);
    else
        printf("Empate! \n");

    return 0;
}

