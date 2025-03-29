#include <stdio.h>

int main()
{
    char produtoA[30] = "Produto A", produtoB[30] = "Produto B";
    unsigned int estoqueA = 1000, estoqueB = 2000;
    float valorA = 10.50, valorB = 20.40;
    unsigned int estoqueMinimoA = 500, estoqueMinimoB = 2500;
    double valorTotalA, valorTotalB;
    int resultadoA, resultadoB;

    printf("Produto %s tem estoque %u e o valor unitario e R$%.2f\n", produtoA, estoqueA, valorA);
    printf("Produto %s tem estoque %u e o valor unitario e R$%.2f\n\n", produtoB, estoqueB, valorB);

    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    printf("O produto %s tem estoque minimo %d\n", produtoA, resultadoA);
    printf("O produto %s tem estoque minimo %d\n\n", produtoB, resultadoB);

    valorTotalA = estoqueA * valorA;
    valorTotalB = estoqueB * valorB;

    printf("O valor toal de A (R$ %.2f) e maior que o valor total de B (R$ %.2f): %d\n\n", valorTotalA, valorTotalB, valorTotalA > valorTotalB);

    return 0;
}
