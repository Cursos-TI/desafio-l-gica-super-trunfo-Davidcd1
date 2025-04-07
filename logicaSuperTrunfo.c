#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Variáveis da carta 1
    char estado1[30], cidade1[50], codigo1[4];
    float pop1, area1, pib1, dpop1, ppc1, poder1;
    int npt1;

    // Variáveis da carta 2
    char estado2[30], cidade2[50], codigo2[4];
    float pop2, area2, pib2, dpop2, ppc2, poder2;
    int npt2;

    // Variáveis resultado
    int r_pop, r_area, r_pib, r_npt, r_dpop, r_ppc, r_poder;
    
    // Cadastro das Cartas:
    // Pedindo as informações da carta 1 ao usuário
    printf("Carta 1\nEstado: ");
    scanf(" %[^\n]", estado1);

    printf("Codigo: ");
    scanf(" %s", codigo1);

    printf("Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%f", &pop1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos Turisticos: ");
    scanf("%d", &npt1);
    
    // Pedindo as informações da carta 2 ao usuário
    printf("\nCarta 2\nEstado: ");
    scanf(" %[^\n]", estado2);

    printf("Codigo: ");
    scanf("%3s", codigo2);

    printf("Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%f", &pop2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos Turisticos: ");
    scanf("%d", &npt2);

    // Calculando os valores "Densidade Populacional", "PIB per Capta" e "Poder" das duas cartas
    dpop1 = pop1 / area1;
    dpop2 = dpop2 / area2;

    ppc1 = pib1 / pop1;
    ppc2 = pib2 / pop2;


    poder1 = (pop1+area1+pib1+npt1+ppc1) - dpop1;
    poder2 = (pop2+area2+pib2+npt2+ppc2) - dpop2;

 
    // Compara atributo por atributo
    r_pop = (pop1 != pop2) ? (pop1 > pop2 ? 1 : 2) : -1;

    r_area = (area1 != area2) ? (area1 > area2 ? 1 : 2) : -1;

    r_pib = (pib1 != pib2) ? (pib1 > pib2 ? 1 : 2) : -1;

    r_npt = (npt1 != npt2) ? (npt1 > npt2 ? 1 : 2) : -1;

    r_dpop = (dpop1 != dpop2) ? (dpop1 < dpop2 ? 1 : 2) : -1;

    r_ppc = (ppc1 != ppc2) ? (ppc1 > ppc2 ? 1 : 2) : -1;

    r_poder = (poder1 != poder2) ? (poder1 > poder2 ? 1 : 2) : -1;

    // Comparação de Cartas:
    printf("\nComparacao de cartas:\n");
    int atributo, atr_temp, resultado;
    float atributo1, atributo2;
    double soma1, soma2 = 0;

    // Pedindo o atributo a ser comparado para o usuário
    printf("Atributo 1:\n");
    printf("Qual atributo deseja comparar?\n1. Populacao\n2. Area\n3. PIB\n4. Pontos Turisticos\n5. Densidade Populacional\n6 .PIB per Capta\n7. Super Poder\n>> ");
    scanf("%d", &atributo);
    atr_temp = atributo;
    printf("\nComparacao de Cartas: (Atributo: ");

    // Imprime o valor do atributo escolhido em cada carta e passa o valor resultado para ser imprimido
    switch(atributo){
        case 1:
            printf("Populacao):\n");
            resultado = r_pop;
            atributo1 = pop1;
            atributo2 = pop2;
            break;
        case 2:
            printf("Area):\n");
            resultado = r_area;
            atributo1 = area1;
            atributo2 = area2;
            break;
        case 3:
            printf("PIB):\n");
            resultado = r_pib;
            atributo1 = pib1;
            atributo2 = pib2;
            break;
        case 4:
            printf("Pontos Turisticos):\n");
            resultado = r_npt;
            atributo1 = npt1;
            atributo2 = npt2;
            break;
        case 5:
            printf("Densidade Populacional):\n");
            resultado = r_dpop;
            atributo1 = dpop1;
            atributo2 = dpop2;
            break;
        case 6:
            printf("Pib per Capta):\n");
            resultado = r_ppc;
            atributo1 = ppc1;
            atributo2 = ppc2;
            break;
        case 7:
            printf("Super Poder):\n");
            resultado = r_poder;
            atributo1 = poder1;
            atributo2 = poder2;
            break;
        default:
            printf("Atributo invalido\n\n");
            return 1;
    }

    // Imprime o valor dos atributos comparados
    printf("\nCarta 1 - %s (%s): %.2f\n", cidade1, estado1, atributo1);
    printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, atributo2);
    soma1 += atributo1;
    soma2 += atributo2;

    // Imprime quem foi o vencedor;
    if(resultado == 1 || resultado == 2){
        printf("Resultado:Carta %d (%s) venceu!\n\n", resultado, (resultado == 1) ? cidade1 : cidade2);
    }else{
        printf("Empate!\n\n");
    }

    // Pedindo o atributo a ser comparado para o usuário
    printf("Atributo 2:\n");
    printf("Qual atributo deseja comparar?\n1. Populacao\n2. Area\n3. PIB\n4. Pontos Turisticos\n5. Densidade Populacional\n6 .PIB per Capta\n7. Super Poder\n>> ");
    scanf("%d", &atributo);
    atr_temp = atributo;
    printf("\nComparacao de Cartas: (Atributo: ");

    // Imprime o valor do atributo escolhido em cada carta e passa o valor resultado para ser imprimido
    switch(atributo){
        case 1:
            printf("Populacao):\n");
            resultado = r_pop;
            atributo1 = pop1;
            atributo2 = pop2;
            break;
        case 2:
            printf("Area):\n");
            resultado = r_area;
            atributo1 = area1;
            atributo2 = area2;
            break;
        case 3:
            printf("PIB):\n");
            resultado = r_pib;
            atributo1 = pib1;
            atributo2 = pib2;
            break;
        case 4:
            printf("Pontos Turisticos):\n");
            resultado = r_npt;
            atributo1 = npt1;
            atributo2 = npt2;
            break;
        case 5:
            printf("Densidade Populacional):\n");
            resultado = r_dpop;
            atributo1 = dpop1;
            atributo2 = dpop2;
            break;
        case 6:
            printf("Pib per Capta):\n");
            resultado = r_ppc;
            atributo1 = ppc1;
            atributo2 = ppc2;
            break;
        case 7:
            printf("Super Poder):\n");
            resultado = r_poder;
            atributo1 = poder1;
            atributo2 = poder2;
            break;
        default:
            printf("Atributo invalido\n\n");
            return 1;
    }

    // Imprime o valor dos atributos comparados
    printf("\nCarta 1 - %s (%s): %.2f\n", cidade1, estado1, atributo1);
    printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, atributo2);
    soma1 += atributo1;
    soma2 += atributo2;

    // Imprime quem foi o vencedor;
    if(resultado == 1 || resultado == 2){
        printf("Resultado:Carta %d (%s) venceu!\n\n", resultado, (resultado == 1) ? cidade1 : cidade2);
    }else{
        printf("Empate!\n\n");
    }

    // Pedindo o atributo a ser comparado para o usuário
    printf("Atributo 3:\n");
    printf("Qual atributo deseja comparar?\n1. Populacao\n2. Area\n3. PIB\n4. Pontos Turisticos\n5. Densidade Populacional\n6 .PIB per Capta\n7. Super Poder\n>> ");
    scanf("%d", &atributo);
    atr_temp = atributo;
    printf("\nComparacao de Cartas: (Atributo: ");

    // Imprime o valor do atributo escolhido em cada carta e passa o valor resultado para ser imprimido
    switch(atributo){
        case 1:
            printf("Populacao):\n");
            resultado = r_pop;
            atributo1 = pop1;
            atributo2 = pop2;
            break;
        case 2:
            printf("Area):\n");
            resultado = r_area;
            atributo1 = area1;
            atributo2 = area2;
            break;
        case 3:
            printf("PIB):\n");
            resultado = r_pib;
            atributo1 = pib1;
            atributo2 = pib2;
            break;
        case 4:
            printf("Pontos Turisticos):\n");
            resultado = r_npt;
            atributo1 = npt1;
            atributo2 = npt2;
            break;
        case 5:
            printf("Densidade Populacional):\n");
            resultado = r_dpop;
            atributo1 = dpop1;
            atributo2 = dpop2;
            break;
        case 6:
            printf("Pib per Capta):\n");
            resultado = r_ppc;
            atributo1 = ppc1;
            atributo2 = ppc2;
            break;
        case 7:
            printf("Super Poder):\n");
            resultado = r_poder;
            atributo1 = poder1;
            atributo2 = poder2;
            break;
        default:
            printf("Atributo invalido\n\n");
            return 1;
    }

    // Imprime o valor dos atributos comparados
    printf("\nCarta 1 - %s (%s): %.2f\n", cidade1, estado1, atributo1);
    printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, atributo2);
    soma1 += atributo1;
    soma2 += atributo2;

    // Imprime quem foi o vencedor;
    if(resultado == 1 || resultado == 2){
        printf("Resultado:Carta %d (%s) venceu!\n\n", resultado, (resultado == 1) ? cidade1 : cidade2);
    }else{
        printf("Empate!\n\n");
    }

    // Exibindo os Resultados:
    printf("A soma dos atributos comparados da Carta 1 e: %.2lf\n", soma1);
    printf("A soma dos atributos comparados da Carta 2 e: %.2lf\n", soma2);

    resultado = (soma1 != soma2) ? ((soma1 > soma2) ? 1 : 2) : -1;

    switch(resultado){
        case 1:
            printf("Resultado: Carta 1(%s) venceu!\n\n", cidade1);
            break;
        case 2:
            printf("Resultado: Carta 2(%s) venceu!\n\n", cidade2);
            break;
        case -1:
            printf("Empate!\n\n");
            break;
        default: 
            printf("Erro no Resultado!\n\n");
            break;
    }

    return 0;
}
