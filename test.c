#include <stdio.h>
#include <math.h>

int main(){

   
  int idade;
  int i;
  
  
  for(i = 0; i <=3; i++){
       printf("digite sua idade\n");
  scanf("%d", &idade);
    if(idade <= 18)
   printf("Jovem\n");
    else printf("adulto\n");
  }
}
  
