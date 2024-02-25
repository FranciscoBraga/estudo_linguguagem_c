#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	 FILE *arq;
	 char texto[100], *resultado, leitura[100];
	 //criação e escrita do arquivo w  escrita writer ou a - de append de adicionar
	 arq= fopen("arq.txt","a");
	 if(arq)
	 {
	 	printf("Escreva seu texto");
	 	fgets(texto,100,stdin);
	 	while(texto[0] != '0'){
	 		fputs(texto,arq);
	 		printf("Escreva seu texto");
	 		fgets(texto,100,stdin);
		 }
	 	printf("Criou o arquivo \n");
	 }
	 else{
	 	printf("Não criou o arquivo");
	 }
	fclose(arq);
	arq = fopen("arq.txt","r");
	if(arq){
	  while(!feof(arq)){
	  	resultado = fgets(leitura,100,arq);
	  //	printf("Resultado: %d",resultado);
	    if(resultado){
	    	printf("%s",leitura);
		}
	  }	
	}else{
	  printf("Não foi possível ler o arquivo");
	}
	 
	 
	 
	fclose(arq);
	return 0;
}
