#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main ()
{

float a,b,c,delta,X1,X2,X;
printf("veuillez entrer la valeur de a : ");
scanf("%d",&a);
printf("veuillez entrer la valeur de b : ");
scanf("%d",&b);
printf("veuillez entrer la valeur de c : ");
scanf("%d",&c);
delta=pow(b,2) - 4*a*c ;
if (delta>0)
{
    X1=(-b - sqrt(delta))/2*a ;
    X1=(-b + sqrt(delta))/2*a ;
    printf(" les solution de cette equation sont : %d \n %d \n",X1,X2);
}
else if (delta=0)
{
    X=-b/(2*a);
    printf("la seul racine de cette equation est : %d ",X);
}
else
    printf("delta negatife donc n a pas de racine");
return 0;

}