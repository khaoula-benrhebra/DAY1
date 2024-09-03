#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int A;
    printf("entrer un entier : ");
    scanf("%d",&A);
    if(A%2==0)
    printf("%d est paire ",A);
    else 
    printf("%d est impaire ",A);
    return 0;
}