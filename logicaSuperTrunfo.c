#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    
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
    printf("*** Escolha o atributo para comparar ***\n");
    printf("*** 1. População ***\n");
    printf("*** 2. Área em KM² ***\n");
    printf("*** 3. PIB ***\n");
    printf("*** 4. Número de pontos turísticos ***\n");
    printf("*** 5. Densidade demográfica ***\n");
    printf("Escolha um atributo: ");
    scanf("%d", &cartasComp);

    switch (cartasComp)
    {
        case 1:
        if (populacao1 > populacao2) 
        {   
            printf("Atributo: População - %lu\n", populacao1);
            printf("A cidade vencedora é: %s\n", nomeCidade1);
        } else
        {
            printf("Atributo: População - %lu\n", populacao2);
            printf("A cidade vencedora é: %s\n", nomeCidade2);
        }
        break;
        case 2:
        if (area1 > area2)
        {
            printf("Atributo : Área - %.2f km²\n", area1);
            printf("A cidade vencedora é: %s\n", nomeCidade1);
        } else
        {
            printf("Atributo : Área - %.2f km²\n", area2);
            printf("A cidade vencedora é: %s\n", nomeCidade2);
        }
        break;
        case 3:
        if (pib1 > pib2)
        {
            printf("Atributo: PIB - %.2lf\n", pib1);
            printf("A cidade vencedora é: %s\n", nomeCidade1);
        } else
        {
            printf("Atributo: PIB - %.2lf\n", pib2);
            printf("A cidade vencedora é: %s\n", nomeCidade2);
        }
        break;
        case 4:
        if (numPontosTur1 > numPontosTur2)
        {
            printf("Atributo: Número de pontos turísticos - %d\n", numPontosTur1);
            printf("A cidade vencedora é: %s\n", nomeCidade1);
        } else
        {
            printf("Atributo: Número de pontos turísticos - %d\n", numPontosTur2);
            printf("A cidade vencedora é: %s\n", nomeCidade2);
        }
        break;
        case 5:
        if (denDemografica1 < denDemografica2)
        {
            printf("Atributo: Densidade demográfica - %d\n", denDemografica1);
            printf("A cidade vencedora é: %s\n", nomeCidade1);
        } else
        {
            printf("Atributo: Densidade demográfica - %d\n", denDemografica2);
            printf("A cidade vencedora é: %s\n", nomeCidade2);
        }
        break;
        default:
        printf("Opção inválida\n");
        break;
    }

    return 0;
}
