#include <stdio.h>

int main()
{
    int a, b, c, d;
    int temp_a, temp_b, temp_c, temp_d;
    
    printf("Insira o valor de A: ");
    scanf("%d", &a);
    printf("Insira o valor de B: ");
    scanf("%d", &b);
    printf("Insira o valor de C: ");
    scanf("%d", &c);
    printf("Insira o valor de D: ");
    scanf("%d", &d);
    
    temp_a = a;
    temp_b = b; 
    temp_c = c; 
    temp_d = d;
    
    printf("A = %d | B = %d | C = %d | D = %d \n", a, b, c, d);
    
    a = temp_b;
    b = temp_d;
    c = temp_a;
    d = temp_c;
    
    printf("A = %d | B = %d | C = %d | D = %d \n", a, b, c, d);
    

    return 0;
}
