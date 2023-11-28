#include <stdio.h>
#include <stdlib.h>

int main()
{

    double x, y;

    printf("Digite dois numeros: \n");
    scanf("%lf", &x);
    scanf("%lf", &y);

    while(x != y)
    {

        if(x > y)
        {
            printf("DECRESCENTE\n");
        }
        else
        {
            printf("CRESCENTE\n");
        }

        printf("Digite outros dois numeros: \n");
        scanf("%lf", &x);
        scanf("%lf", &y);
    }

    return 0;
}
