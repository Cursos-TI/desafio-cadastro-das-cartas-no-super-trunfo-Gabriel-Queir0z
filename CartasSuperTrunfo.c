#include <stdio.h>
int main() {
    // Variáveis x2 população, área, PIB, número de pontos turísticos.

    int população1, população2, pontosturísticos1, pontosturísticos2;
    float área1, pib1, área2, pib2; 
    char nome1 [50];
    char nome2 [50];

    printf ("qual o nome do país?: /n")
    scanf ("%d', &nome1);
    printf ("qual a população deste país?: /n");
     scanf ("%d', &população1);
    printf ("qual a área deste país?: /n");
     scanf ("%d', &área1);
    printf ("qual o pib deste país?: /n");
     scanf ("%d', &pib1);
    printf ("quantos pontos turísticos este país tem?: /n");
     scanf ("%d', &pontosturísticos1);

         printf (nome1, populalção1, área1, pib1, pontosturísticos1);
    
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
