#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Variáveis da carta 1
    char estado1[30], cidade1[50], codigo1[4];
    double pop1, area1, pib1, dpop1, ppc1, poder1;
    int npt1;

    // Variáveis da carta 2
    char estado2[30], cidade2[50], codigo2[4];
    double pop2, area2, pib2, dpop2, ppc2, poder2;
    int npt2;
    
    // Cadastro das Cartas:
    // Pedindo as informações da carta 1 ao usuário
    printf("\nCarta 1\nEstado: ");
    scanf(" %s", estado1);

    printf("Código: ");
    scanf("%s", codigo1);

    printf("Cidade: ");
    scanf(" %s", cidade1);

    printf("População: ");
    scanf("%lf", &pop1);

    printf("Área: ");
    scanf("%lf", &area1);

    printf("PIB: ");
    scanf("%lf", &pib1);

    printf("Pontos Turísticos: ");
    scanf("%d", &npt1);
    
    // Pedindo as informações da carta 2 ao usuário
    printf("\nCarta 2\nEstado: ");
    scanf("%s", estado2);

    printf("Código: ");
    scanf("%3s", codigo2);

    printf("Cidade: ");
    scanf("%s", cidade2);

    printf("População: ");
    scanf("%lf", &pop2);

    printf("Área: ");
    scanf("%lf", &area2);

    printf("PIB: ");
    scanf("%lf", &pib2);

    printf("Pontos Turísticos: ");
    scanf("%d", &npt2);

    // Calculando os valores "Densidade Populacional", "PIB per Capta" e "Poder" das duas cartas
    dpop1 = pop1 / area1;
    dpop2 = dpop2 / area2;

    ppc1 = pib1 / pop1;
    ppc2 = pib2 / pop2;


    poder1 = (pop1+area1+pib1+npt1+ppc1) - dpop1;
    poder2 = (pop2+area2+pib2+npt2+ppc2) - dpop2;

    // Comparação de Cartas:
    printf("\nComparação de cartas:\n");
    double atributo1, atributo2, atributo3, atributo4;

    // Pedindo o atributo a ser comparado para o usuário
    printf("Atributo 1:\n");
    printf("Qual atributo deseja comparar?\n1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade Populacional\n6 .PIB per Capta\n7. Super Poder\n>> ");
    scanf("%d", %atributo1);

    switch(atributo1){
        
    }
    

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
