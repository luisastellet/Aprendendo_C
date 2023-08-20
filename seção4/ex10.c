#include <stdio.h>
#include <string.h> //string.h   math.h
// strcpy(destino, origem); copy
// strcmp(var1,var2) compare, se for igual retorna 1
int main(){
    char sexo[6];
    float altura;

    printf("qual seu sexo? [homem/mulher] ");
    scanf("%s", sexo);
    printf("qual sua altura? ");
    scanf("%f", &altura);
    
    if (strcmp(sexo, "homem") == 1){
        printf("seu peso ideal e %.1f", (72.7*altura)-58);
    }else if (strcmp(sexo, "mulher") == 1){
        printf("seu peso ideal e %.1f", (62.1*altura)-44.7);
    }else {
        printf("dados insuficientes");
    }
    
}