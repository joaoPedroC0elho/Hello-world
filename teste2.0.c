#include <stdio.h>
#include <math.h>

int main(){
	 
	 int a, b, r;
	 char opcao;
	  
	  scanf("%c", &opcao);
	   fflush(stdin);
	  while(opcao == 'S' || opcao == 's'){
	  	printf("Somar\n");
	  	r = a + b;
	  	printf("%d", &r);
	  	printf("deseja realizar um novo calculo\n");
	  	scanf("%c", &opcao);
	  	
	  }
	
	 
	
}
