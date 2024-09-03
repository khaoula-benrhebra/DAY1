#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
    float A,B,C,Mg;
    printf("veuillez entrer le 1er nombre : ");
    scanf("%f",&A);
    printf("veuillez entrer le 2eme nombre : ");
    scanf("%f",&B);
    printf("veuillez entrer le 3eme nombre : ");
    scanf("%f",&C);
     Mg = cbrt(A * B * C);
    printf("la moyenne geometriqede 3 nombres est : %f",Mg);
    
    return 0;
}