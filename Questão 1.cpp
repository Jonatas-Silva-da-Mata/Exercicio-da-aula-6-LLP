#include <stdio.h>
  int main(){
  	int idade;
  	
  	printf("Informe qual a sua idade:");
  	scanf("%d", &idade);
  	/* 
	  5 quest�o
	  scanf ("%d", &diheiro);
	  if(dinheiro % 5 ! = 0){	
	  printf("Valor inv�lido");
      }
	    */
  	if (idade>=18){
  		printf("Maior de idade\n");
	  }
	  
	if (idade<=18){
		printf("Menor de idade");
	}
	  
	return 0;
  }
