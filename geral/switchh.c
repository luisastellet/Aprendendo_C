/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    printf("Hello World\n");
    int input, resp;
    
    scanf("%d", &input);
    
    // if (input == 1){ // op1
    //     resp = 100;
    // }
    // else if (input == 2){// op2
    //     resp = 200;
    // }
    // else if(input == 3){//op3
    //     resp = 300;
    // }
    // else{
    //     resp = -1;
    // }
    
    switch(input){
        case 1:
            resp = 100;
            break;
        case 2:
            resp = 200;
            break;
        case 3:
            resp = 300;
            break;
        default:
            printf("ERROR\n");
            break;
    }
    
    
    printf("\nResp = %d", resp);

    return 0;
}
