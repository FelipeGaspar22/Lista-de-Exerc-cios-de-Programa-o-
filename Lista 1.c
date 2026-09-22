// =====================================================================================================================================

/*

#include <stdio.h>

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

// =====================================================================================================================================

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

// =====================================================================================================================================

/*

lista 1 - Exercício: 3

#include <stdio.h>

int main()
{
    int n;
    printf("Insira um número posítivo menor ou igual a 64: ");
    scanf("%d", &n);


    if (n <= 0|| n > 64){
        printf("valor inválido \n");
        return 1;
    }
    
    
    printf("Valor em binário: ");
    
    printf("%d", (n >> 6) & 1);
    printf("%d", (n >> 5) & 1);
    printf("%d", (n >> 4) & 1);
    printf("%d", (n >> 3) & 1);
    printf("%d", (n >> 2) & 1);
    printf("%d", (n >> 1) & 1);
    printf("%d", (n >> 0) & 1);    

- ">>" Empurra os bits que representam o valor de n, uma determinada quantidade de casas para a direita.
- "& 1" Isola o ultimo bit da sequência, e zera o restante.
    
    return 0;
}

*/

// =====================================================================================================================================

/*

lista 1 - Exercício: 4

#include <stdio.h>

int main()
{
    float salariofixo, calcfinal;
    int comissao;
    printf("Insira seu salário fixo: ");
    scanf("%f", &salariofixo);

    comissao = salariofixo * 0.15;
    calcfinal = salariofixo + comissao;
    
    printf("Você vai receber de salário no final do mês: %.2f\n", calcfinal);

    return 0;
}

*/

// =====================================================================================================================================

/*

lista 1 - Exercício: 5
    
#include <stdio.h>

int main()
{
    int n1, n2, n3, n4;
    int soma, media, produtoria;
    printf("Insira o valor de N1: ");
    scanf("%d", &n1);
    printf("Insira o valor de N2: ");
    scanf("%d", &n2);
    printf("Insira o valor de N3: ");
    scanf("%d", &n3);
    printf("Insira o valor de N4: ");
    scanf("%d", &n4);

    soma = n1 + n2 + n3 + n4;
    media = (n1 + n2 + n3 + n4) / 4;
    produtoria = n1 * n2 * n3 * n4;
    
    printf("Soma: %d\n", soma);
    printf("Media: %d\n", media);
    printf("Produtoría: %d\n", produtoria);
    
    return 0;
}

*/

// =====================================================================================================================================

/*

lista 1 - Exercício: 6

#include <stdio.h>

int main()
{
    int idade;
    int anos, meses, dias;
    
    printf("Insira sua idade em dias: ");
    scanf("%d", &idade);
    
    anos = idade / 365;
    idade = idade % 365;
    
    meses = idade / 30;
    dias = idade % 30;
    
    printf("Voce esta vivo ha: | %d - Anos | %d - Meses | %d - Dias |\n", anos, meses, dias);

    return 0;
}


*/

// =====================================================================================================================================

/*

Lista 1 - Exercício: 7

#include <stdio.h>

int main()
{
    int raio;
    float pi = 3.14;
    float volume;
    
    printf("Insira o raio da esfera: ");
    scanf("%d", &raio);
    
    volume = (pi * 4 * (raio * raio * raio)) / 3;
    
    printf("O volume do raio de %d é | volume: %.2f| ", raio, volume);
    
    return 0;
}

*/

// =====================================================================================================================================


Lista 1 - Exercício: 8

