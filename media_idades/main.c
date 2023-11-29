#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, soma, controle;
    double  media;

    printf("Digite as idades:\n");
    scanf("%d", &idade);

    controle = 0;
    soma = 0;

    while(idade >= 0)
    {
        soma = soma + idade;
        controle = controle + 1;

        scanf("%d", &idade);
    }


    if(controle == 0)
    {
        printf("IMPOSSIVEL CALCULAR \n");
    }
    else
    {
        media = (double)soma / controle;
        printf("MEDIA = %.2lf\n", media);
    }

    return 0;
}
