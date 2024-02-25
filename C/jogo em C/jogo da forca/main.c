#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 
 jogo: jogo da forca
 objetivo: 
 1- fazer o desenho da forca
 2-fazer um banco de palavras que serão sorteadas aleatoriamente
 3-contar a quantidade de letras da palavra escolhida e trocar as letras por underscore '_'
 4-encontrar as letras na palavra selecionada
 5-verificar se errou ou acertou a letra
 6-criar loop para que o jogo continue constante até o usuário desejar para.
 7-autualizar tela cada verz que jogador digitar uma letra
 8-ao vencer ou perder o jogador podera atualizar a tela 
 */
//desenhar a forca conforme a quantidade de erros
void forca(int erros){
	if(erros == 0 ){
	printf("=================\n");
    printf(" ||             | \n");
    printf(" ||               \n");
    printf(" ||               \n");
    printf(" ||               \n");
    printf(" ||               \n");
    printf(" ||               \n");
    printf("_||__             \n");
  }
  	else if(erros == 1 ){
	printf("=================\n");
    printf(" ||             | \n");
    printf(" ||             O \n");
    printf(" ||               \n");
    printf(" ||               \n");
    printf(" ||               \n");
    printf(" ||               \n");
    printf("_||__             \n");
  }
   	else if(erros == 2 ){
	printf("=================\n");
    printf(" ||             | \n");
    printf(" ||             O \n");
    printf(" ||             | \n");
    printf(" ||               \n");
    printf(" ||               \n");
    printf(" ||               \n");
    printf("_||__             \n");
  }
  else if(erros == 3 ){
	printf("=================\n");
    printf(" ||             | \n");
    printf(" ||             O  \n");
    printf(" ||            /|  \n");
    printf(" ||               \n");
    printf(" ||               \n");
    printf(" ||               \n");
    printf("_||__             \n");
  }
  	else if(erros == 4 ){
	printf("=================\n");
    printf(" ||             | \n");
    printf(" ||             O \n");
    printf(" ||            /|\\  \n");
    printf(" ||               \n");
    printf(" ||               \n");
    printf(" ||               \n");
    printf("_||__             \n");
  }
   	else if(erros == 5 ){
	printf("=================\n");
    printf(" ||             | \n");
    printf(" ||             O \n");
    printf(" ||            /|\\ \n");
    printf(" ||               \n");
    printf(" ||               \n");
    printf(" ||               \n");
    printf("_||__             \n");
  }
   else if(erros == 6 ){
	printf("=================\n");
    printf(" ||             | \n");
    printf(" ||             O \n");
    printf(" ||            /|\\  \n");
    printf(" ||            /  \n");
    printf(" ||               \n");
    printf(" ||               \n");
    printf("_||__             \n");
  }
   	else if (erros == 7 ){
	printf("=================\n");
    printf(" ||             | \n");
    printf(" ||             O \n");
    printf(" ||            /|\\ \n");
    printf(" ||            / \\ \n");
    printf(" ||               \n");
    printf(" ||               \n");
    printf("_||__             \n");
  }
}
// banco de palavras que serão selecionadas aleatóriamente
char* banco(){
	char palavra[8][100]={"bolo","biscoito","cadeira","catatumba","elevador","pincel","caveira","guarda-roupa"};
	char *escolhida = malloc(sizeof *escolhida * 100);
	srand(time(NULL));
	int valor = rand() % 4;
	//return palavra[valor];
   strcpy(escolhida, palavra[valor]);
    //printf("%d \n",&escolhida);
	//printf("%i \n",valor);
	printf("%s \n",palavra[valor]);
	return escolhida;
}

int quantidade_letras(char* palavras){
	int comprimento = strlen(palavras);	
	return comprimento;
}

//principal
int main(void) {
	 int continuar = 1;
	do{
		 
		    int erros = 0; // varialvel que vai verficar a quantidade de erros
		    char letra;
		    char desenha_linha[100];
		    int comp,i,total_letras;
		   
		    forca(erros);//desenhando a forca conforme o erro	
		    char *escolhida  = banco();//pegando a palavra selecioada aleatóriamento do banco de palavras
		    // printf("%s",escolhida);
		   comp = quantidade_letras(escolhida);
		    for(i =0; i< comp; i++){
		    	desenha_linha[i] = '_';
		    	printf(" %c", desenha_linha[i]);
			}
		
		/*------------------------------------------------------------------*/ 
			while(continuar){
			printf("\nDigite uma letra\n");
			scanf(" %c",&letra);
				int errou = 1;
				for(i = 0; i< comp; i++){
				//	printf(" %c",desenha_linha[i]);
					if(letra == escolhida[i]){
						desenha_linha[i] = letra;
						//printf("%c ",desenha_linha[i]);
						total_letras ++;
						errou =0;
					}
				}
				
				if(errou == 1){
					erros++;
				}
			   forca(erros);
			   for(i =0; i< comp; i++){
		    	printf("%c ", desenha_linha[i]);
			  }
			  if(erros >6 || total_letras >= comp ){
			  	continuar = 0;
			  }
			}
		/*--------------------------------------------------------------------*/	
			 if(erros > 6){
			 	printf("Perdeu\n");
			 	printf("Deseja continuar a jogar\n ?");
			 	scanf("%d",&continuar);	
			 }
		      if( total_letras >= comp){
		      	printf("\nVenceu\n");
			 	printf("Deseja continuar a jogar\n ?");
			 	scanf("%d",&continuar);
			  }
			  printf("%d",continuar);
	 }while(continuar == 1);
		return 0;
}
