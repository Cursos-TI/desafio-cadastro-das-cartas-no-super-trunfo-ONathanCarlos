#include <stdio.h>

int main() {
    char nomeestado[30], nomeestado2[30]; 
    char nomecidade[30], nomecidade2[30];
    char letracidade[2], letracidade2[2];
    char codigodacarta[4], codigodacarta2[4];
    int populacao, populacao2;
    float area, area2, densidadepopulacional, densidadepopulacional2; 
    float pib, pib2, pibpercapita, pibpercapita2;
    int pontosTuristicos, pontosTuristicos2;
    int escolha1, escolha2;

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

   
   
// 1) Primeiro menu
printf("Escolha o primeiro atributo:\n"
    "1 - População\n"
    "2 - Área\n"
    "3 - PIB\n"
    "4 - Pontos Turísticos\n"
    "5 - Densidade Populacional\n"
    "Escolha: ");
scanf("%d", &escolha1);

// Adicionando o if-else aqui para garantir que a escolha esteja entre 1 e 5
if (escolha1 < 1 || escolha1 > 5) {
    printf("Opção inválida no primeiro menu! Escolha um número entre 1 e 5.\n");
    return 1; // Retorna erro se a opção não for válida
} else {
    switch (escolha1) {
        case 1: printf("Você escolheu o atributo: População\n"); break;
        case 2: printf("Você escolheu o atributo: Área\n"); break;
        case 3: printf("Você escolheu o atributo: PIB\n"); break;
        case 4: printf("Você escolheu o atributo: Pontos Turísticos\n"); break;
        case 5: printf("Você escolheu o atributo: Densidade Populacional\n"); break;
    }
}

// 2) Segundo menu dinâmico (não repete escolha1)
printf("\nEscolha o segundo atributo (não pode repetir o %d):\n", escolha1);
switch (escolha1) {
case 1:
 printf("2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Populacional\n");
 break;
case 2:
 printf("1 - População\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Populacional\n");
 break;
case 3:
 printf("1 - População\n2 - Área\n4 - Pontos Turísticos\n5 - Densidade Populacional\n");
 break;
case 4:
 printf("1 - População\n2 - Área\n3 - PIB\n5 - Densidade Populacional\n");
 break;
case 5:
 printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n");
 break;
default:
 printf("Opção inválida no primeiro menu! Reinicie.\n");
 return 1;
}
printf("Escolha: ");
scanf("%d", &escolha2);
switch (escolha2) {
    case 1: printf("Você escolheu o segundo atributo: População\n"); break;
    case 2: printf("Você escolheu o segundo atributo: Área\n"); break;
    case 3: printf("Você escolheu o segundo atributo: PIB\n"); break;
    case 4: printf("Você escolheu o segundo atributo: Pontos Turísticos\n"); break;
    case 5: printf("Você escolheu o segundo atributo: Densidade Populacional\n"); break;
  }

if (escolha2 == escolha1 || escolha2 < 1 || escolha2 > 5) {
 printf("Segundo atributo inválido (repetido ou fora de 1–5). Reinicie.\n");
 return 1;
}
// Nomes dos atributos para exibição
char* nomes_atributos[6] = {
    "", // índice 0 não usado
    "População",
    "Área",
    "PIB",
    "Pontos Turísticos",
    "Densidade Populacional"
};

// Obter os valores dos atributos escolhidos para cada cidade
float valor1_cidade1 = 0, valor2_cidade1 = 0;
float valor1_cidade2 = 0, valor2_cidade2 = 0;

switch (escolha1) {
    case 1: valor1_cidade1 = populacao; valor1_cidade2 = populacao2; break;
    case 2: valor1_cidade1 = area; valor1_cidade2 = area2; break;
    case 3: valor1_cidade1 = pib; valor1_cidade2 = pib2; break;
    case 4: valor1_cidade1 = pontosTuristicos; valor1_cidade2 = pontosTuristicos2; break;
    case 5: valor1_cidade1 = densidadepopulacional; valor1_cidade2 = densidadepopulacional2; break;
}
switch (escolha2) {
    case 1: valor2_cidade1 = populacao; valor2_cidade2 = populacao2; break;
    case 2: valor2_cidade1 = area; valor2_cidade2 = area2; break;
    case 3: valor2_cidade1 = pib; valor2_cidade2 = pib2; break;
    case 4: valor2_cidade1 = pontosTuristicos; valor2_cidade2 = pontosTuristicos2; break;
    case 5: valor2_cidade1 = densidadepopulacional; valor2_cidade2 = densidadepopulacional2; break;
}

// Calcular soma dos dois atributos para cada cidade
float soma_cidade1 = valor1_cidade1 + valor2_cidade1;
float soma_cidade2 = valor1_cidade2 + valor2_cidade2;

// Exibir resultado da comparação
printf("\n========== RESULTADO DA COMPARAÇÃO ==========\n");
printf("Cidade 1: %s\n", nomecidade);
printf("Cidade 2: %s\n\n", nomecidade2);

printf("Atributo 1: %s\n", nomes_atributos[escolha1]);
printf("  %s: %.2f\n", nomecidade, valor1_cidade1);
printf("  %s: %.2f\n\n", nomecidade2, valor1_cidade2);

printf("Atributo 2: %s\n", nomes_atributos[escolha2]);
printf("  %s: %.2f\n", nomecidade, valor2_cidade1);
printf("  %s: %.2f\n\n", nomecidade2, valor2_cidade2);

printf("Soma dos atributos:\n");
printf("  %s: %.2f\n", nomecidade, soma_cidade1);
printf("  %s: %.2f\n\n", nomecidade2, soma_cidade2);

// Exibindo resultado final 
printf("Resultado: %s\n", 
    (soma_cidade1 == soma_cidade2) ? "Os dois estados têm o mesmo valor!!" : 
    (soma_cidade1 > soma_cidade2) ? nomecidade : nomecidade2);

    return 0;
}
