- Lista 2 
  
#include <stdio.h>

int main()
{
    
    int idade, ano_atual, ano_de_nascimento; 
    
    printf("\nInsira a sua idade: ");
    scanf("%d", &idade);
    printf("\nInsira o ano atual: ");
    scanf("%d", &ano_atual);
    
    ano_de_nascimento = ano_atual - idade;
    
    printf("\nVocê tem %d, e o ano atual é %d, você nasceu em %d", idade, ano_atual, ano_de_nascimento);

    return 0;
}
