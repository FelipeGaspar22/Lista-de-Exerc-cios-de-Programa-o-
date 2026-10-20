
/*
- Exercicio 1:

int num[100], i;
for(i=0; i<100; i++){
printf("Digite o numero %d: \n", i+1);
scanf("%d", &num[i]);
}

for(i=99; i>=0; i--){
printf("Numero %d: %d\n", i-1);
}
return 0;

*/

// =========================================================================================================================

- Exercicio 2:











// =========================================================================================================================
  
/*

- Exercicio 3:

#include <stdio.h>

int main()
{
    int n;
    int bits[64];
    int tamanho = 0;

    printf("\nInsira um numero positivo de 1 ate 64: ");
    scanf("%d", &n);

    if (n >= 1 && n <= 64) {
        while (n > 0) {
            bits[tamanho] = n % 2;
            n = n / 2;              
            tamanho++;
        }

        for (int i = tamanho - 1; i >= 0; i--) {
            printf("%d", bits[i]);
        }
        printf("\n");
    }

    return 0;
}

*/

// =========================================================================================================================

/*

- Exercicio: 4
  
#include <stdio.h>

int main()
{
    int number[10];
    int maior = number[0];
    int contador = 1;
    
    for(; contador <= 10; contador++){
        if(){
            
        }
        printf("\nInsira o ⁰%d numero: ", contador);
        scanf("%d", &number[contador]);
    }

    return 0;
}

*/
