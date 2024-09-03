#include<stdio.h>
#include<stdlib.h>
int main ()
{
int A,B,S;
printf("Entrer le 1er nbr :");
scanf("%d",&A);
printf("Entrer le 2eme nbr :");
scanf("%d",&B);
S=A+B;
if (A != B)
printf("la somme de %d+%d = %d",A,B,S);
else
printf("la triple de la somme de %d+%d = %d",A,B,3*S);
return 0;


}