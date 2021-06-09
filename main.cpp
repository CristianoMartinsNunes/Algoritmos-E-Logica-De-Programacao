#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
	
	// Função Imprimi Menu do Programa
	fcMenuPrograma() 
	{
		printf("-> ------------------------------------- <-\n");
		printf("-> Programa Criptografia de Substituição <-\n");
	        printf("-> ------------------------------------- <-\n");
		printf("-> [ 01 ] - Criptografar uma Palavra     <-\n");				
		printf("-> [ 02 ] - Descriptografar uma Palavra  <-\n");
		printf("-> [ 03 ] - Sair                         <=\n");
		printf("-> ------------------------------------- <-\n");
		printf("-> Digite Opção: ");
	}
	
int main(){
	
	// Seta Idioma
	setlocale(LC_ALL, "Portuguese");

	// Declaração de variável
	int qntLetras;
	char opcao[1], alfabeto[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	char palavra[10] = {NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL};
	char criptografada[10] = {NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL};

	
	
	do{
			// Saida de dados - Menu do Programa
			fcMenuPrograma();
			
			// Entrada de dados
			gets(opcao);
			
			// Função limpa tela
			system("CLS");
			 
			if(opcao[0] == '1')
			{
							// Entrada de dados
							printf("-> ------------------------------------- <-\n");
							printf("-> [ 01 ] - Criptografar uma Palavra     <-\n");
							printf("-> ------------------------------------- <-\n");
							printf("-> Informe uma Palavra p/ser Criptografada: ");
							gets(palavra);
							
							// Número de Letras da palavra
							for(int K=0; K<10; K++)
    						{	
								if(palavra[K] != NULL)
								  {		
									qntLetras++;  
								  }
							}
							
							// Verifica letra atual e apresenta sucessor
							for(int j=0; j<qntLetras; j++)
							{
    							if(palavra[j] == 'A')
    							{
    								criptografada[j] = 'B';
								}
    							if(palavra[j] == 'B')
    							{
    								criptografada[j] = 'C';
								}
    							if(palavra[j] == 'C')
    							{
    								criptografada[j] = 'D';
								}
    							if(palavra[j] == 'D')
    							{
    								criptografada[j] = 'E';
								}
    							if(palavra[j] == 'E')
    							{
    								criptografada[j] = 'F';
								}
    							if(palavra[j] == 'F')
    							{
    								criptografada[j] = 'G';
								}
    							if(palavra[j] == 'G')
    							{
    								criptografada[j] = 'H';
								}
    							if(palavra[j] == 'H')
    							{
    								criptografada[j] = 'I';
								}
    							if(palavra[j] == 'I')
    							{
    								criptografada[j] = 'J';
								}
    							if(palavra[j] == 'J')
    							{
    								criptografada[j] = 'K';
								}
    							if(palavra[j] == 'K')
    							{
    								criptografada[j] = 'L';
								}
    							if(palavra[j] == 'L')
    							{
    								criptografada[j] = 'M';
								}
    							if(palavra[j] == 'M')
    							{
    								criptografada[j] = 'N';
								}
    							if(palavra[j] == 'N')
    							{
    								criptografada[j] = 'O';
								}
    							if(palavra[j] == 'O')
    							{
    								criptografada[j] = 'P';
								}
    							if(palavra[j] == 'P')
    							{
    								criptografada[j] = 'Q';
								}
    							if(palavra[j] == 'Q')
    							{
    								criptografada[j] = 'R';
								}
    							if(palavra[j] == 'R')
    							{
    								criptografada[j] = 'S';
								}
    							if(palavra[j] == 'S')
    							{
    								criptografada[j] = 'T';
								}
    							if(palavra[j] == 'T')
    							{
    								criptografada[j] = 'U';
								}								
    							if(palavra[j] == 'U')
    							{
    								criptografada[j] = 'V';
								}								
    							if(palavra[j] == 'V')
    							{
    								criptografada[j] = 'W';
								}								
    							if(palavra[j] == 'W')
    							{
    								criptografada[j] = 'X';
								}								
    							if(palavra[j] == 'X')
    							{
    								criptografada[j] = 'Y';
								}								
    							if(palavra[j] == 'Y')
    							{
    								criptografada[j] = 'Z';
								}								
    							if(palavra[j] == 'Z')
    							{
    								criptografada[j] = 'A';
								}
							}
							
							// Saida de dados 1 - Palavra Origem
							printf("-> Palavra Origem: ");
							
							// Vetor palavra
							for(int K=0; K<qntLetras; K++)
    						{	
								printf("%c",palavra[K]);											
							}
							printf("\n");
							
							// Saida de dados 2 - Palavra Destino
							for(int K=0; K<qntLetras; K++)
    						{	
								printf("   [%d] - %c -> %c \n",K,palavra[K],criptografada[K]);											
							}
							printf("-> Palavra Destino: ");
							
							// Vetor criptografada
							for(int K=0; K<qntLetras; K++)
    						{	
								printf("%c",criptografada[K]);											
							}
							printf("\n\n");
															
			}		

			if(opcao[0] == '2')
			{
							// Entrada de dados
							printf("-> ------------------------------------- <-\n");
							printf("-> [ 02 ] - Descriptografar uma Palavra  <-\n");
							printf("-> ------------------------------------- <-\n");
							printf("-> Informe uma Palavra p/ser Descriptografada: ");
							gets(palavra);
							
							// Número de Letras da palavra
							for(int K=0; K<10; K++)
    						{	
								if(palavra[K] != NULL)
								  {		
									qntLetras++;  
								  }
							}
							
							// Verifica letra atual e apresenta antecessor							
							for(int j=0; j<qntLetras; j++)
							{
    							if(palavra[j] == 'A')
    							{
    								criptografada[j] = 'Z';
								}
    							if(palavra[j] == 'B')
    							{
    								criptografada[j] = 'A';
								}
    							if(palavra[j] == 'C')
    							{
    								criptografada[j] = 'B';
								}
    							if(palavra[j] == 'D')
    							{
    								criptografada[j] = 'C';
								}
    							if(palavra[j] == 'E')
    							{
    								criptografada[j] = 'D';
								}
    							if(palavra[j] == 'F')
    							{
    								criptografada[j] = 'E';
								}
    							if(palavra[j] == 'G')
    							{
    								criptografada[j] = 'F';
								}
    							if(palavra[j] == 'H')
    							{
    								criptografada[j] = 'G';
								}
    							if(palavra[j] == 'I')
    							{
    								criptografada[j] = 'H';
								}
    							if(palavra[j] == 'J')
    							{
    								criptografada[j] = 'I';
								}
    							if(palavra[j] == 'K')
    							{
    								criptografada[j] = 'J';
								}
    							if(palavra[j] == 'L')
    							{
    								criptografada[j] = 'K';
								}
    							if(palavra[j] == 'M')
    							{
    								criptografada[j] = 'L';
								}
    							if(palavra[j] == 'N')
    							{
    								criptografada[j] = 'M';
								}
    							if(palavra[j] == 'O')
    							{
    								criptografada[j] = 'N';
								}
    							if(palavra[j] == 'P')
    							{
    								criptografada[j] = 'O';
								}
    							if(palavra[j] == 'Q')
    							{
    								criptografada[j] = 'P';
								}
    							if(palavra[j] == 'R')
    							{
    								criptografada[j] = 'Q';
								}
    							if(palavra[j] == 'S')
    							{
    								criptografada[j] = 'R';
								}
    							if(palavra[j] == 'T')
    							{
    								criptografada[j] = 'S';
								}								
    							if(palavra[j] == 'U')
    							{
    								criptografada[j] = 'T';
								}								
    							if(palavra[j] == 'V')
    							{
    								criptografada[j] = 'U';
								}								
    							if(palavra[j] == 'W')
    							{
    								criptografada[j] = 'V';
								}								
    							if(palavra[j] == 'X')
    							{
    								criptografada[j] = 'W';
								}								
    							if(palavra[j] == 'Y')
    							{
    								criptografada[j] = 'X';
								}								
    							if(palavra[j] == 'Z')
    							{
    								criptografada[j] = 'Y';
								}
							}
							
							// Saida de dados 1 - Palavra Origem							
							printf("-> Palavra Origem: ");
							
							
							for(int K=0; K<qntLetras; K++)
    						{	
								printf("%c",palavra[K]);											
							}
							printf("\n");
							
							// Vetor criptografada							
							for(int K=0; K<qntLetras; K++)
    						{	
								printf("   [%d] - %c <- %c \n",K,criptografada[K],palavra[K]);											
							}
							printf("-> Palavra Destino: ");

							for(int K=0; K<qntLetras; K++)
    						{	
								printf("%c",criptografada[K]);											
							}
							printf("\n\n");
															
			}
			
			// Limpa vetor palavra			
			for(int K=0; K<10; K++)
			{
				palavra[K] = NULL;	
			}
			
			// Zera Contador 
			qntLetras = 0;

		
	}while(opcao[0]!='3');
	
	// Saida de dados
	printf("-> ------------------------------------- <-\n");
	printf("-> [ 03 ] - Sair                         <-\n");
	printf("-> ------------------------------------- <-\n");
	printf("-> Programa Encerrado c/sucesso!!!       <-\n\n");
	
	// Console pause
    system("PAUSE");
    return 0;
}


