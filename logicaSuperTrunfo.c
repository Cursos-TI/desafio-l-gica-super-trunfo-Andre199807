#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades

    // Variáveis para armazenar os controles de comparação
    int escolhaAtributoP1, escolhaAtributoP2;
    int resultadoP1, resultadoP2;
    double atributoSoma1, atributoSoma2, atributoSomac2_1, atributoSomac2_2, somaAtributos1, somaAtributos2;
    // Carta 1
    char codigoEstado1;
    char codigoCidade1[4];
    char nomeCidade1[20];
    unsigned long int populacao1;
    float area1;
    double pib1;
    int denDemografica1;
    int numPontosTur1;
    
    // Carta 2
    char codigoEstado2;
    char codigoCidade2[4];
    char nomeCidade2[20];
    unsigned long int populacao2;
    float area2;
    double pib2;
    int denDemografica2;
    int numPontosTur2;
    
    // Variável de comparação
    int cartasComp;

    // Cadastro das Cartas:
    
    // Carta 1
    printf("Digite o código do Estado: ");
    scanf("%c", &codigoEstado1);
    printf("Digite o código da cidade: ");
    scanf("%s", codigoCidade1);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade1);
    printf("Digite a quantidade de habitantes: ");
    scanf("%lu", &populacao1);
    printf("Digite a área em Km²: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%lf", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numPontosTur1);
    
    // Carta 2
    printf("Digite o código do Estado: ");
    scanf(" %c", &codigoEstado2);
    printf("Digite o código da cidade: ");
    scanf("%s", codigoCidade2);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade2);
    printf("Digite a quantidade de habitantes: ");
    scanf("%lu", &populacao2);
    printf("Digite a área em Km²: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%lf", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numPontosTur2);
    
    // Calculo da densidade demográfica
    denDemografica1 = populacao1 / area1;
    denDemografica2 = populacao2 / area2;

    // Comparação de Cartas:
    printf("*** Escolha dois atributos para comparar ***\n");
    printf("*** 1. População ***\n");
    printf("*** 2. Área em KM² ***\n");
    printf("*** 3. PIB ***\n");
    printf("*** 4. Número de pontos turísticos ***\n");
    printf("*** 5. Densidade demográfica ***\n");
    printf("Escolha o primeiro atributo: ");
    scanf(" %d", &escolhaAtributoP1);

    switch (escolhaAtributoP1)
    {
        case 1:
        resultadoP1 = populacao1 > populacao2 ? 1 : 0;
        atributoSoma1 = populacao1;
        atributoSomac2_1 = populacao2;
        break;
        case 2:
        resultadoP1 = area1 > area2 ? 1 : 0;
        atributoSoma1 = area1;
        atributoSomac2_1 = area2;
        break;
        case 3:
        resultadoP1 = pib1 > pib2 ? 1 : 0;
        atributoSoma1 = pib1;
        atributoSomac2_1 = pib2;
        break;
        case 4:
        resultadoP1 = numPontosTur1 > numPontosTur2 ? 1 : 0;
        atributoSoma1 = numPontosTur1;
        atributoSomac2_1 = numPontosTur2;
        break;
        case 5:
        resultadoP1 = denDemografica1 < denDemografica2 ? 1 : 0;
        atributoSoma1 = denDemografica1;
        atributoSomac2_1 = denDemografica2;
        break;
        default:
        printf("Opção inválida!\n");
        break;
    }

    printf("Escolha o segundo atributo: ");
    scanf(" %d", &escolhaAtributoP2);

    if (escolhaAtributoP1 == escolhaAtributoP2)
    {
        printf("Você não pode escolher o mesmo atributo para comparar!\n");
    } else
    {
        switch (escolhaAtributoP2)
        {
        case 1:
        resultadoP2 = populacao1 > populacao2 ? 1 : 0;
        atributoSoma2 = populacao1;
        atributoSomac2_2 = populacao2;
        break;
        case 2:
        resultadoP2 = area1 > area2 ? 1 : 0;
        atributoSoma2 = area1;
        atributoSomac2_2 = area2;
        break;
        case 3:
        resultadoP2 = pib1 > pib2 ? 1 : 0;
        atributoSoma2 = pib1;
        atributoSomac2_2 = pib2;
        break;
        case 4:
        resultadoP2 = numPontosTur1 > numPontosTur2 ? 1 : 0;
        atributoSoma2 = numPontosTur1;
        atributoSomac2_2 = numPontosTur2;
        break;
        case 5:
        resultadoP2 = denDemografica1 < denDemografica2 ? 1 : 0;
        atributoSoma2 = denDemografica1;
        atributoSomac2_2 = denDemografica2;
        break;
        default:
        printf("Opção inválida!\n");
        break;
        }
    }
    
    somaAtributos1 = atributoSoma1 + atributoSoma2;
    somaAtributos2 = atributoSomac2_1 + atributoSomac2_2;

    switch (escolhaAtributoP1)
    {
    case 1:
        printf("Atributo - Carta 1: População - %lu - ", populacao1);
        printf("Atributo - Carta 2: População - %lu\n", populacao2);
        break;
    case 2:
        printf("Atributo - Carta 1: Área - %.2f - ", area1);
        printf("Atributo - Carta 2: Área - %.2f\n", area2);
        break;
    case 3:
        printf("Atributo - Carta 1: PIB - %.2lf - ", pib1);
        printf("Atributo - Carta 2: PIB - %.2lf\n", pib2);
        break;
    case 4:
        printf("Atributo - Carta 1: Número de pontos turísticos - %d - ", numPontosTur1);
        printf("Atributo - Carta 2: Número de pontos turísticos - %d\n", numPontosTur2);
        break;
    case 5:
        printf("Atributo - Carta 1: Densidade demográfica - %d - ", denDemografica1);
        printf("Atributo - Carta 2: Densidade demográfica - %d\n", denDemografica2);
        break;
    }

    switch (escolhaAtributoP2)
    {
    case 1:
        printf("Atributo - Carta 1: População - %lu - ", populacao1);
        printf("Atributo - Carta 2: População - %lu\n", populacao2);
        break;
    case 2:
        printf("Atributo - Carta 1: Área - %.2f - ", area1);
        printf("Atributo - Carta 2: Área - %.2f\n", area2);
        break;
    case 3:
        printf("Atributo - Carta 1: PIB - %.2lf - ", pib1);
        printf("Atributo - Carta 2: PIB - %.2lf\n", pib2);
        break;
    case 4:
        printf("Atributo - Carta 1: Número de pontos turísticos - %d - ", numPontosTur1);
        printf("Atributo - Carta 2: Número de pontos turísticos - %d\n", numPontosTur2);
        break;
    case 5:
        printf("Atributo - Carta 1: Densidade demográfica - %d - ", denDemografica1);
        printf("Atributo - Carta 2: Densidade demográfica - %d\n", denDemografica2);
        break;
    }

    if (somaAtributos1 > somaAtributos2)
    { 
        if (resultadoP1 && resultadoP2) {
            printf("Atributo 1 e Atributo 2 ganharam\n");
        } else if (resultadoP1 == 1 && resultadoP2 == 0) {
            printf("Atributo 1 ganhou\n");
        } else {
            printf("Atributo 2 ganhou\n");
        } 
        printf("Soma dos atributos da Carta 1 - %s: %.2lf\n", nomeCidade1, somaAtributos1);
        printf("Soma dos atributos da Carta 2 - %s: %.2lf\n", nomeCidade2, somaAtributos2);
        printf("*** Carta 1 venceu! ***\n");
    } else if (somaAtributos1 < somaAtributos2)
    {
        if (resultadoP1 && resultadoP2) {
            printf("Atributo 1 e Atributo 2 ganharam\n");
        } else if (resultadoP1 == 0 && resultadoP2 == 1) {
            printf("Atributo 1 ganhou\n");
        } else {
            printf("Atributo 2 ganhou\n");
        } 
        printf("Soma dos atributos da Carta 1 - %s: %.2lf\n", nomeCidade1, somaAtributos1);
        printf("Soma dos atributos da Carta 2 - %s: %.2lf\n", nomeCidade2, somaAtributos2);
        printf("*** Carta 2 venceu ***\n");
        
    } else
    {
        printf("Soma dos atributos da Carta 1 - %s: %.2lf\n", nomeCidade1, somaAtributos1);
        printf("Soma dos atributos da Carta 2 - %s: %.2lf\n", nomeCidade2, somaAtributos2);
        printf("*** Empate! ***\n");
    }

    return 0;
}
