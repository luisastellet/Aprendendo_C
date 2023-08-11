#include <stdio.h>

int main(){
    float graus;
    printf("Digite o angulo em graus: ");
    scanf("%f", &graus);
    printf("Esse angulo em radianos e %f", graus * 3.14/180);

}