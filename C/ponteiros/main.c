#include <stdio.h>
#include <stdlib.h>

/* cadastro de usu�rio */

//declarando ponteiro dentro da fun��o cadastro
 void cadastro(char* nome,char* cpf,char* rg, int* idade,int* casado, int* habilitado){
 	
   printf("Seu nome e : %s\n",nome);
  printf("Seu CPF e: %s\n",cpf);
  printf("Seu RG e: %s\n",rg);
   printf("Sua idade e : %d\n", *idade);
   if(*casado == 1){
   	   printf("Voce e casado : Sim\n");
   }else{
   	   printf("Voce e casado : Nao\n");
   }
    if(*habilitado == 1){
   	   printf("Voce e habilitado : Sim\n");
   }else{
   	   printf("Voce e habilitado : Nao\n");
   }
  

       
 }

//, , int* idade, int* casado, char* habilitado

int main() {
	char nome[100];
	char cpf[11];
	char rg[8];
	int idade;
	int casado = 0;
	int habilitado;
	
	printf("------------Cadatro de usu�rio--------------------\n");
    printf("Digite seu nome:\n");
	scanf("%c",&nome); 
	printf("Digite seu CPF:\n");
	scanf("%c",&cpf);
	 printf("Digite seu RG:\n");
	scanf("%c",&rg);
	printf("Digite sua idade:\n");
	scanf("%d",&idade);
	printf("Voce e casado digite 1 para sim e 0 para nao :\n");
	scanf("%d",&casado);
	printf("Voce e habilitado digite 1 para sim e 0 para nao :\n ");
	scanf("%d",&habilitado);
//	printf("Voce tem habilitacao '%c':",&habilitado);
	cadastro(nome,cpf,rg,&idade,&casado,&habilitado); // acessando o endere�o de mem�ria e passando para a fun��o cadastro
	
	//,cpf,rg,idade,casado,habilitado)
		
	return 0;
}
