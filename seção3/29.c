#include <stdio.h>

int main(){
    float n1, n2, n3, n4;

    printf("Digite a nota 1: ");
    scanf("%f", &n1);

    printf("Digite a nota 2: ");
    scanf("%f", &n2);

    printf("Digite a nota 3: ");
    scanf("%f", &n3);

    printf("Digite a nota 4: ");
    scanf("%f", &n4);
    
    printf("A media e %f", (n1+n2+n3+n4)/4);

}