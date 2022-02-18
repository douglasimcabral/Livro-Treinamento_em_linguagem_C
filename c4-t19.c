/* calculadora.c */
/* Simula uma calculadora de 4 opera��es*/
/* Mostra o uso de switch */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int TRUE=1;

    while (TRUE) /* Sempre verdadeiro */
    {
        float n1,n2;
        char op;

        printf("\nDigite n�mero operador n�mero: ");
        scanf("%f%c%f", &n1, &op, &n2);

        if(n1==0.0) break;/*Termina se Zero digitado*/

        switch (op)
        {
            case '+':
                printf("\n%f", n1 + n2);
                break;
            case '-':
                printf("\n%f", n1 - n2);
                break;
            case '*':
                printf("\n%f", n1 * n2);
                break;
            case '/':
                printf("\n%f", n1 / n2);
                break;
            default:
                printf("Op. desconhecido.");
                break;
        }
    }
    printf("\n");
    system("PAUSE");
    return 0;
}