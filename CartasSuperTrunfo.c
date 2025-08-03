#include <stdio.h>
int main() {
    // Variáveis x2 população, área, PIB, número de pontos turísticos.

    int populacao1, populacao2, pontosturisticos1, pontosturisticos2;
    float area1, pib1, area2, pib2, densidade1, densidade2, pibpercapta1, pibpercapita2; 
    char cidade1 [50];
    char cidade2 [50];
    char estado1 [50];
    char estado2 [50];
    //===========================entrada 1========================================
    printf("qual o nome da estado?: ");
    scanf("%49s", estado1);
    printf("qual o nome da cidade?: ");
    scanf("%49s", cidade1);
    printf("qual a populacao desta cidade?: ");
    scanf("%d", &populacao1);
    printf("qual a area desta cidade?: ");
    scanf("%f", &area1);
    printf("qual o pib desta cidade?: ");
    scanf("%f", &pib1);
    printf("quantos pontos turisticos esta cidade tem?: ");
    scanf("%d", &pontosturisticos1);
    //===========================entrada 2========================================
    printf("qual o nome do estado2?: ");
    scanf("%49s", estado2);
    printf("qual o nome da cidade numero 2?: ");
    scanf("%49s", cidade2);
    printf("qual a populacao desta cidade?: ");
    scanf("%d", &populacao2);
    printf("qual a area desta cidade?: ");
    scanf("%f", &area2);
    printf("qual o pib desta cidade?: ");
    scanf("%f", &pib2);
    printf("quantos pontos turisticos esta cidade tem?: ");
    scanf("%d", &pontosturisticos2);


    //===========================calculos========================================
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pibpercapta1 = pib1 / populacao1;
    pibpercapita2 = pib2 / populacao2; 

//===========================resultados========================================
     printf("estado1: %s\n", estado1);
    printf("cidade1: %s\n", cidade1);
    printf("populacao: %d\n", populacao1);
    printf("area: %.2f\n", area1);
    printf("pib: %.2f\n", pib1);
    printf("pontos turisticos: %d\n", pontosturisticos1);
    printf("densidade populacional: %.2f\n", densidade1);
    printf("pib per capita: %.2f\n", pibpercapta1);
    


     printf("estado2: %s\n", estado2);
    printf("cidade: %s\n", cidade2);
    printf("populacao: %d\n", populacao2);
    printf("area: %.2f\n", area2);
    printf("pib: %.2f\n", pib2);
    printf("pontos turisticos: %d\n", pontosturisticos2);
    printf("densidade populacional: %.2f\n", densidade2);
    printf("pib per capita: %.2f\n", pibpercapita2);
    
    
    

    return 0;
}
