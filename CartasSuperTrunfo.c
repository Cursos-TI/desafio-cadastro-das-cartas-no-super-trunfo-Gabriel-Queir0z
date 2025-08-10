#include <stdio.h>
int main() {
float area, pib, densidade, pibpercapta, populacao;
int pontosturisticos;
char  cidade[50];

float area2,pib2, densidade2, pibpercapta2, populacao2;
int pontosturisticos2;
char cidade2[50];

int escolha;

//===========================entrada1========================================
printf("qual o nome da cidade?: ");
scanf("%49s", cidade);
printf("qual a populacao desta cidade?: ");
scanf("%f", &populacao);
printf("qual a area desta cidade?: ");
scanf("%f", &area);
printf("qual o pib desta cidade?: ");
scanf("%f", &pib);
printf("quantos pontos turisticos esta cidade tem?: ");
scanf("%d", &pontosturisticos);
//===========================entrada2========================================
printf("qual o nome da segunda cidade?: "); 
scanf("%49s", cidade2);
printf("qual a populacao desta segunda cidade?: ");
scanf("%f", &populacao2); 
printf("qual a area desta segunda cidade?: ");
scanf("%f", &area2);
printf("qual o pib desta segunda cidade?: ");
scanf("%f", &pib2);
printf("quantos pontos turisticos esta segunda cidade tem?: ");
scanf("%d", &pontosturisticos2);


printf ("qual atributo vc quer comparar? (1) Populacao (2) Area (3) PIB (4) Pontos turisticos (5) Densidade populacional (6) PIB per capita\n");
scanf("%d", &escolha);
//===========================calculos========================================
densidade = populacao / area;
densidade2 = populacao2 / area2;
pibpercapta = pib / populacao;
pibpercapta2 = pib2 / populacao2;
//===========================saída========================================
printf("---------------------------------------------------\n");
printf("---------------------------------------------------\n");
printf("Comparando %s com %s:\n", cidade, cidade2);
printf("---------------------------------------------------\n");
switch (escolha) {
    case 1:
        printf("Atributo escolhido: População.\n");
        printf("populacao de %s é: %f e da %s e: %f\n", cidade, populacao, cidade2, populacao2);
        if (populacao > populacao2) {
            printf("A cidade %s venceu.\n", cidade);
        } else if (populacao < populacao2) {
            printf("A cidade %s venceu.\n", cidade2);
        }
        else {printf("Empate");
        }
        break;
    case 2:
        printf("Atributo escolhido: Area.\n");
        printf("A area de %s e: %.2f e da %s e: %.2f\n", cidade, area, cidade2, area2);
        if (area > area2) {
            printf("A cidade %s tem uma area maior que a cidade %s.\n", cidade, cidade2);   
        } else if (area < area2) {
            printf("A cidade %s tem uma area menor que a cidade %s.\n", cidade, cidade2);
        } else {
            printf("Empate");
        }
        break;
    case 3:
        printf("Atributo escolhido: PIB.\n");
        printf("O PIB de %s e: %.2f e da %s e: %.2f\n", cidade, pib, cidade2, pib2);
        if (pib > pib2) {
            printf("A cidade %s.\n", cidade);
        } else if (pib < pib2) {
            printf("A cidade %s .\n", cidade2);
        }  else {
            printf("Empate");
        }
        break;
    case 4:
        printf("Atributo escolhido: Pontos turísticos.\n");
        printf("A cidade %s tem %d pontos turisticos e a cidade %s tem %d pontos turisticos.\n", cidade, pontosturisticos, cidade2, pontosturisticos2);
        if (pontosturisticos > pontosturisticos2) {
            printf("A cidade %s venceu.\n", cidade);
        } else if (pontosturisticos < pontosturisticos2) {
            printf("A cidade %s venceu.\n", cidade2);
        } else {
            printf("Empate");
        }
        break;
    case 5:
        printf("Atributo escolhido: Densidade populacional.\n");
        printf("A densidade populacional de %s e: %.2f e da %s e: %.2f\n", cidade, densidade, cidade2, densidade2);
        if (densidade > densidade2) {
            printf("A cidade %s venceu.\n", cidade2);
        } else if (densidade < densidade2) {
            printf("A cidade %s venceu.\n", cidade);
        }   else {
            printf("Empate");
        }
        break;
    case 6:
        printf("Atributo escolhido: PIB per capita.\n");
        printf("O PIB per capita de %s e: %.2f e da %s e: %.2f\n", cidade, pibpercapta, cidade2, pibpercapta2);
        if (pibpercapta > pibpercapta2) {
            printf("A cidade %s venceu.\n", cidade);  
        } else if (pibpercapta < pibpercapta2) {
            printf("A cidade %s tvenceu.\n", cidade2);
        }   else { 
            printf("Empate");
        }
        break;
    default:
        printf("Opção inválida. Por favor, escolha um número de 1 a 6.\n");
        break;  
    }
return 0;
}

