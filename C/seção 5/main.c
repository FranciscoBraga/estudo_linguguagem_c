#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int  parada = 1;
	int  multiplo = 1;
	int numero = 0;
	int maior = 0;
	int menor = 10008
	;
	while(parada <=5){
		if(multiplo%3 == 0){
			printf("Multiplo de 3  e %d \n",multiplo);
			parada++;
		}
		multiplo++;
		
	}
	
	//------------------------------
	
	for(int i=0;i<=100000;i+=100){
		printf("Valor %d \n",i);
	}
	//---------------------------
	
	for(int x =0; x<9;x++){
		printf("Digite um numero \n");
		scanf("%d",&numero);
		if(numero > maior){
			maior = numero;
		}
		if(numero < menor){
			menor = numero;
		}
		printf("O maior numero e %d e o menor numero e %d \n",maior, menor);
	}
	
	
	return 0;
}
