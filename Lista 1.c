#include <stdio.h>

/*

Lista 1 - Exercício: 1

int main()
{
    int number1, number2;
    printf("Insira o valor de N1: ");
    scanf("%d", &number1);
    printf("Insira o valor de N2: ");
    scanf("%d", &number2);
    
    printf("A inversão da ordem dos numeros inseridos é %d e %d", number2, number1);

    return 0;
}

*/

/*

Lista 1 - Exercício: 2

#include <stdio.h>

int main()
{
    double valor, mantissa;
    int expoente;
    char buffer[50];
    char mantissa_str[30]; 
    
    printf("Insira um valor: ");
    scanf("%lf", &valor);
    
    sprintf(buffer, "%e", valor);
    sscanf(buffer, "%[^e]e%d", mantissa_str, &expoente);
    sscanf(mantissa_str, "%lf", &mantissa);
    
    printf("%.4lf X 10^%d\n", mantissa, expoente);
    
    return 0;
}

*/

lista 1 - Exercício: 3


