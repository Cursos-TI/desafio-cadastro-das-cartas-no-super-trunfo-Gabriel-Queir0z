#include <stdio.h>
int main() {
    // Variáveis x2 população, área, PIB, número de pontos turísticos.

    int populacao1, populacao2, pontosturisticos1, pontosturisticos2;
    float area1, pib1, area2, pib2; 
    char nome1 [50];
    char nome2 [50];
    //===========================entrada 1========================================
    printf("qual o nome do pais?: ");
    scanf("%49s", nome1);
    printf("qual a populacao deste pais?: ");
    scanf("%d", &populacao1);
    printf("qual a area deste pais?: ");
    scanf("%f", &area1);
    printf("qual o pib deste pais?: ");
    scanf("%f", &pib1);
    printf("quantos pontos turisticos este pais tem?: ");
    scanf("%d", &pontosturisticos1);
    //===========================entrada 2========================================
    printf("qual o nome do pais numero 2?: ");
    scanf("%49s", nome2);
    printf("qual a populacao deste pais?: ");
    scanf("%d", &populacao2);
    printf("qual a area deste pais?: ");
    scanf("%f", &area2);
    printf("qual o pib deste pais?: ");
    scanf("%f", &pib2);
    printf("quantos pontos turisticos este pais tem?: ");
    scanf("%d", &pontosturisticos2);

//===========================resultados========================================
    
    printf("pais: %s\n", nome1);
    printf("populacao: %d\n", populacao1);
    printf("area: %.2f\n", area1);
    printf("pib: %.2f\n", pib1);
    printf("pontos turisticos: %d\n", pontosturisticos1);
    
    printf("pais: %s\n", nome2);
    printf("populacao: %d\n", populacao1);
    printf("area: %.2f\n", area2);
    printf("pib: %.2f\n", pib2);
    printf("pontos turisticos: %d\n", pontosturisticos2);
    
    
    

    return 0;
}
