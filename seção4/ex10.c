#include <stdio.h>

int main(){
    char sexo;
    float altura;

    printf("qual seu sexo? [homem/mulher] ");
    scanf("%c", &sexo);
    printf("qual sua altura? ");
    scanf("%f", &altura);
    
    if (sexo == "homem"){
        printf("seu peso ideal e %f", (72.7*altura)-58);
    }else if (sexo == "mulher"){
        printf("seu peso ideal e %f", (62.1*altura)-44.7);
    }else {
        printf("dados insuficientes");
    }
    
}