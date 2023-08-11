#include <stdio.h>

int main(){
    int salario, prestacao;

    printf("qual seu salario? ");
    scanf("%i", &salario);
    printf("qual sua prestacao de emprestimo? ");
    scanf("%i", prestacao);

    if (prestacao > 0.2*salario){
        printf("Emprestimo nao concedido");
    }else {
        printf("Emprestimo concedido");
    }
    
}