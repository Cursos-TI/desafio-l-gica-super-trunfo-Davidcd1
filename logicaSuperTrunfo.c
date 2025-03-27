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
    printf("Carta 1\nEstado: ");
    scanf(" %s", estado1);

    printf("Codigo: ");
    scanf(" %s", codigo1);

    printf("Cidade: ");
    scanf(" %s", cidade1);

    printf("Populacao: ");
    scanf("%lf", &pop1);

    printf("Area: ");
    scanf("%lf", &area1);

    printf("PIB: ");
    scanf("%lf", &pib1);

    printf("Pontos Turisticos: ");
    scanf("%d", &npt1);
    
    // Pedindo as informações da carta 2 ao usuário
    printf("\nCarta 2\nEstado: ");
    scanf("%s", estado2);

    printf("Codigo: ");
    scanf("%3s", codigo2);

    printf("Cidade: ");
    scanf("%s", cidade2);

    printf("Populacao: ");
    scanf("%lf", &pop2);

    printf("Area: ");
    scanf("%lf", &area2);

    printf("PIB: ");
    scanf("%lf", &pib2);

    printf("Pontos Turisticos: ");
    scanf("%d", &npt2);

    // Calculando os valores "Densidade Populacional", "PIB per Capta" e "Poder" das duas cartas
    dpop1 = pop1 / area1;
    dpop2 = dpop2 / area2;

    ppc1 = pib1 / pop1;
    ppc2 = pib2 / pop2;


    poder1 = (pop1+area1+pib1+npt1+ppc1) - dpop1;
    poder2 = (pop2+area2+pib2+npt2+ppc2) - dpop2;

    // Comparação de Cartas:
    printf("\nComparacao de cartas:\n");
    int atributo;
    int resultado;
    double atributo1, atributo2;

    // Pedindo o atributo a ser comparado para o usuário
    printf("Atributo 1:\n");
    printf("Qual atributo deseja comparar?\n1. Populacao\n2. Area\n3. PIB\n4. Pontos Turisticos\n5. Densidade Populacional\n6 .PIB per Capta\n7. Super Poder\n>> ");
    scanf("%d", &atributo);

    printf("\nComparacao de Cartas: (Atributo: ");

    // verifica qual é o atributo escolhido pelo usuário e compara o atributo escolhido entre as duas cartas
    switch(atributo){
        case 1:
            printf("Populacao):\n");
            if(!(pop1 > pop2 || pop1 < pop2))
                resultado = 0;
            resultado = (pop1 > pop2) ? 1 : 2;
            atributo1 = pop1;
            atributo2 = pop2;
            break;
        case 2:
            if(!(area1 > area2 || area1 < area2))
                resultado = 0;
            resultado = (area1 > area2) ? 1 : 2;
            atributo1 = area1;
            atributo2 = area2;
            printf("Area):\n");
            break;
        case 3:
            if(!(pib1 > pib2 || pib1 < pib2))
                resultado = 0;
            resultado = (pib1 > pib2) ? 1 : 2;
            atributo1 = pib1;
            atributo2 = pib2;
            printf("PIB):\n");
            break;
        case 4:
            if(!(npt1 > npt2 || npt1 < npt2))
                resultado = (npt1 > npt2) ? 1 : 2;
            resultado = (npt1 < npt2) ? 1 : 2;
            atributo1 = npt1;
            atributo2 = npt2;
            printf("Pontos Turisticos):\n");
            break;
        case 5:
            if(!(dpop1 < dpop2 || dpop1 > dpop2))
                resultado = 0;
            resultado = (dpop1 < dpop2) ? 1 : 2;
            atributo1 = dpop1;
            atributo2 = dpop2;
            printf("Densidade Populacional):\n");
            break;
        case 6:
            if(!(ppc1 > ppc2 || ppc1 < ppc2))
                resultado = 0;
            resultado = (ppc1 > ppc2) ? 1 : 2;
            atributo1 = ppc1;
            atributo2 = ppc2;
            printf("Pib per Capta):\n");
            break;
        case 7:
            if(!(poder1 > poder2 || poder1 < poder2))
                resultado = 0;
            resultado = (poder1 > poder2) ? 1 : 2;
            atributo1 = poder1;
            atributo2 = poder2;
            printf("Super Poder):\n");
            break;
    }

    
    printf("Carta 1 - %s (%s): %lf\n", cidade1, estado1, atributo1);
    printf("Carta 2 - %s (%s): %lf\n", cidade2, estado2, atributo2);
    
    // Exibição dos Resultados:
    switch (resultado)
    {
    case 1:
        printf("Resultado: Carta 1(%s) venceu!", cidade1);
        break;
    
    case 2:
        printf("Resultado: Carta 2(%s) venceu!\n", cidade1);
        break;
    }

    // Pedindo o atributo a ser comparado para o usuário
    printf("Atributo 2:\n");
    printf("Qual atributo deseja comparar?\n1. Populacao\n2. Area\n3. PIB\n4. Pontos Turisticos\n5. Densidade Populacional\n6 .PIB per Capta\n7. Super Poder\n>> ");
    scanf("%d", &atributo);

    printf("\nComparacao de Cartas: (Atributo: ");

    // verifica qual é o atributo escolhido pelo usuário e compara o atributo escolhido entre as duas cartas
    switch(atributo){
        case 1:
            printf("Populacao):\n");
            if(!(pop1 > pop2 || pop1 < pop2))
                resultado = 0;
            resultado = (pop1 > pop2) ? 1 : 2;
            atributo1 = pop1;
            atributo2 = pop2;
            break;
        case 2:
            if(!(area1 > area2 || area1 < area2))
                resultado = 0;
            resultado = (area1 > area2) ? 1 : 2;
            atributo1 = area1;
            atributo2 = area2;
            printf("Area):\n");
            break;
        case 3:
            if(!(pib1 > pib2 || pib1 < pib2))
                resultado = 0;
            resultado = (pib1 > pib2) ? 1 : 2;
            atributo1 = pib1;
            atributo2 = pib2;
            printf("PIB):\n");
            break;
        case 4:
            if(!(npt1 > npt2 || npt1 < npt2))
                resultado = (npt1 > npt2) ? 1 : 2;
            resultado = (npt1 < npt2) ? 1 : 2;
            atributo1 = npt1;
            atributo2 = npt2;
            printf("Pontos Turisticos):\n");
            break;
        case 5:
            if(!(dpop1 < dpop2 || dpop1 > dpop2))
                resultado = 0;
            resultado = (dpop1 < dpop2) ? 1 : 2;
            atributo1 = dpop1;
            atributo2 = dpop2;
            printf("Densidade Populacional):\n");
            break;
        case 6:
            if(!(ppc1 > ppc2 || ppc1 < ppc2))
                resultado = 0;
            resultado = (ppc1 > ppc2) ? 1 : 2;
            atributo1 = ppc1;
            atributo2 = ppc2;
            printf("Pib per Capta):\n");
            break;
        case 7:
            if(!(poder1 > poder2 || poder1 < poder2))
                resultado = 0;
            resultado = (poder1 > poder2) ? 1 : 2;
            atributo1 = poder1;
            atributo2 = poder2;
            printf("Super Poder):\n");
            break;
    }

    
    printf("Carta 1 - %s (%s): %lf\n", cidade1, estado1, atributo1);
    printf("Carta 2 - %s (%s): %lf\n", cidade2, estado2, atributo2);
    
    // Exibição dos Resultados:
    switch (resultado)
    {
    case 1:
        printf("Resultado: Carta 1(%s) venceu!", cidade1);
        break;
    
    case 2:
        printf("Resultado: Carta 2(%s) venceu!\n", cidade1);
        break;
    }

    // Pedindo o atributo a ser comparado para o usuário
    printf("Atributo 3:\n");
    printf("Qual atributo deseja comparar?\n1. Populacao\n2. Area\n3. PIB\n4. Pontos Turisticos\n5. Densidade Populacional\n6 .PIB per Capta\n7. Super Poder\n>> ");
    scanf("%d", &atributo);

    printf("\nComparacao de Cartas: (Atributo: ");

    // verifica qual é o atributo escolhido pelo usuário e compara o atributo escolhido entre as duas cartas
    switch(atributo){
        case 1:
            printf("Populacao):\n");
            if(!(pop1 > pop2 || pop1 < pop2))
                resultado = 0;
            resultado = (pop1 > pop2) ? 1 : 2;
            atributo1 = pop1;
            atributo2 = pop2;
            break;
        case 2:
            if(!(area1 > area2 || area1 < area2))
                resultado = 0;
            resultado = (area1 > area2) ? 1 : 2;
            atributo1 = area1;
            atributo2 = area2;
            printf("Area):\n");
            break;
        case 3:
            if(!(pib1 > pib2 || pib1 < pib2))
                resultado = 0;
            resultado = (pib1 > pib2) ? 1 : 2;
            atributo1 = pib1;
            atributo2 = pib2;
            printf("PIB):\n");
            break;
        case 4:
            if(!(npt1 > npt2 || npt1 < npt2))
                resultado = (npt1 > npt2) ? 1 : 2;
            resultado = (npt1 < npt2) ? 1 : 2;
            atributo1 = npt1;
            atributo2 = npt2;
            printf("Pontos Turisticos):\n");
            break;
        case 5:
            if(!(dpop1 < dpop2 || dpop1 > dpop2))
                resultado = 0;
            resultado = (dpop1 < dpop2) ? 1 : 2;
            atributo1 = dpop1;
            atributo2 = dpop2;
            printf("Densidade Populacional):\n");
            break;
        case 6:
            if(!(ppc1 > ppc2 || ppc1 < ppc2))
                resultado = 0;
            resultado = (ppc1 > ppc2) ? 1 : 2;
            atributo1 = ppc1;
            atributo2 = ppc2;
            printf("Pib per Capta):\n");
            break;
        case 7:
            if(!(poder1 > poder2 || poder1 < poder2))
                resultado = 0;
            resultado = (poder1 > poder2) ? 1 : 2;
            atributo1 = poder1;
            atributo2 = poder2;
            printf("Super Poder):\n");
            break;
    }

    
    printf("Carta 1 - %s (%s): %lf\n", cidade1, estado1, atributo1);
    printf("Carta 2 - %s (%s): %lf\n", cidade2, estado2, atributo2);
    
    // Exibição dos Resultados:
    switch (resultado)
    {
    case 1:
        printf("Resultado: Carta 1(%s) venceu!", cidade1);
        break;
    
    case 2:
        printf("Resultado: Carta 2(%s) venceu!\n", cidade1);
        break;
    }

    return 0;
}
