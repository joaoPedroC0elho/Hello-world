#include <stdio.h>
#include <math.h>


int main(){

    int A, b, c, d;
 
 printf("Digite o valor a: ");
 scanf("%d", &A);
 
 printf("Digite o valor b: ");
 scanf("%d", &b);
 
 printf("Digite o valor c: ");
 scanf("%d", &c);
 
 printf("Digite o valor d: ");
 scanf("%d", &d);
 
    if (b > c && d > A && (c + d) > (A + b) && c>0 && d>0 && A%2==0)
    printf("Valores aceitos");
     else printf("Valores nao aceitos");
   return 0;
}
  
