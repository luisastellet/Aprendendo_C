/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    printf("Hello World\n");
    int num = 0;
        
    // scanf("%d", &num);
    
    do{// Faça algo enquanto num != -1
        scanf("%d", &num); 
        printf("%d é par: %d\n", num, num % 2 == 0);
    }while(num != -1);
    
    // printf("lixo %d\n", num);
    // while(num != -1){
    //     scanf("%d", &num);
    //     printf("%d é par: %d\n", num, num % 2 == 0);  
    // }   
    
    return 0;
}
