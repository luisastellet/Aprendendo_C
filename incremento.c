/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    printf("Hello World\n");
    int i = 0, j = 0;

    printf("Original print --> %d e %d\n", i, j);
    printf("Prim print --> %d e %d\n", i++, ++j);
    printf("Sec print --> %d e %d\n", i++, ++j);
    return 0;
}
