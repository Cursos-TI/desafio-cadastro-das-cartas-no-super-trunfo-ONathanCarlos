#include <stdio.h>

int main() {
    char nomeestado[30], nomeestado2[30]; 
    char nomecidade[30], nomecidade2[30];
    char codigodacarta[4], codigodacarta2[4];
    int populacao, populacao2;
    float area, area2, densidadepopulacional, densidadepopulacional2; 
    float pib, pib2, pibpercapita, pibpercapita2;
    int pontosTuristicos, pontosTuristicos2;

    // Escolha fixa do atributo (altere para testar diferentes comparações)
    int atributoEscolhido = 1; // 1 - População, 2 - Área, 3 - PIB, 4 - Pontos Turísticos, 5 - Densidade Populacional

    printf("Cadastro da primeira carta:\n");
    printf("Estado: ");
    scanf(" %s", nomeestado);
    printf("Cidade: ");
    scanf(" %s", nomecidade);
    printf("Código da Carta: ");
    scanf(" %s", codigodacarta);
    printf("População: ");
    scanf("%d", &populacao);
    printf("Área (km²): ");
    scanf("%f", &area);
    printf("PIB (bilhões): ");
    scanf("%f", &pib);
    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    densidadepopulacional = populacao / area;
    pibpercapita = (pib * 1e9) / populacao;

    printf("\nCadastro da segunda carta:\n");
    printf("Estado: ");
    scanf(" %s", nomeestado2);
    printf("Cidade: ");
    scanf(" %s", nomecidade2);
    printf("Código da Carta: ");
    scanf(" %s", codigodacarta2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões): ");
    scanf("%f", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidadepopulacional2 = populacao2 / area2;
    pibpercapita2 = (pib2 * 1e9) / populacao2;

    // Comparação fixa de atributo
    printf("\nComparação das cartas (Atributo escolhido: ");
    
    switch (atributoEscolhido) {
        case 1:
            printf("População)\n");
            printf("%s: %d habitantes\n", nomecidade, populacao);
            printf("%s: %d habitantes\n", nomecidade2, populacao2);
            if (populacao > populacao2)
                printf("Vencedor: %s\n", nomecidade);
            else if (populacao < populacao2)
                printf("Vencedor: %s\n", nomecidade2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Área)\n");
            printf("%s: %.2f km²\n", nomecidade, area);
            printf("%s: %.2f km²\n", nomecidade2, area2);
            if (area > area2)
                printf("Vencedor: %s\n", nomecidade);
            else if (area < area2)
                printf("Vencedor: %s\n", nomecidade2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("PIB)\n");
            printf("%s: %.2f bilhões\n", nomecidade, pib);
            printf("%s: %.2f bilhões\n", nomecidade2, pib2);
            if (pib > pib2)
                printf("Vencedor: %s\n", nomecidade);
            else if (pib < pib2)
                printf("Vencedor: %s\n", nomecidade2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Pontos Turísticos)\n");
            printf("%s: %d pontos turísticos\n", nomecidade, pontosTuristicos);
            printf("%s: %d pontos turísticos\n", nomecidade2, pontosTuristicos2);
            if (pontosTuristicos > pontosTuristicos2)
                printf("Vencedor: %s\n", nomecidade);
            else if (pontosTuristicos < pontosTuristicos2)
                printf("Vencedor: %s\n", nomecidade2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Densidade Populacional)\n");
            printf("%s: %.2f hab/km²\n", nomecidade, densidadepopulacional);
            printf("%s: %.2f hab/km²\n", nomecidade2, densidadepopulacional2);
            if (densidadepopulacional < densidadepopulacional2)
                printf("Vencedor: %s\n", nomecidade);
            else if (densidadepopulacional > densidadepopulacional2)
                printf("Vencedor: %s\n", nomecidade2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Atributo inválido!\n");
    }

    return 0;
}
