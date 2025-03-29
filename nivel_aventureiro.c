#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, media;

    printf("----- PROGRAMA DE CALCULO DE MEDIA -----\n\n");

    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);

    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);

    printf("Informe a terceira nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2 + nota3) / 3;

    printf("A media e de: %.2f\n", media);

    return 0;
}
