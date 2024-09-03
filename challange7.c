#include <stdio.h>

int main() {
    int A,B,C,Mp;
    printf("veuillez entrer le 1er nombre : ");
    scanf("%d",&A);
    printf("veuillez entrer le 2eme nombre : ");
    scanf("%d",&B);
    printf("veuillez entrer le 3eme nombre : ");
    scanf("%d",&C);
    Mp=((A*2)+(B*3)+(C*5))/(2+3+5) ;
    printf("la moyenne pondéré de 3 nombres est : %d",Mp);
    
    return 0;
}