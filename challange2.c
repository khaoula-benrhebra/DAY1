#include<stdio.h>
#include<stdlib.h>
int main ()
{
int i,N;
printf("veuillez entrer un nbr inf à 10 : ");
scanf("%d",&N);
i=0;
do
{
  printf("%d * %d = %d \n",N,i,N*i);
  i++;
} while (i<=10);
///printf("%d * %d = %d \n",N,i,N*i);
return 0;
}