#include <stdio.h>    /*incluir bibliotecas*/
#include <stdlib.h>  /*ncluir bibliotecas*/
#include <iostream>
#include <string.h>
#include <locale.h>

int main (){  

    setlocale(LC_ALL,"portuguese_Brazil");
    void    entrar_aluno(void);
    void    entrar_adm(void);
    
                /*variaveis do menu principal                    */
	int    esc; /*variavel de escolha do menu principal          */
	int cond=1; /*variavel do laço de repetição do menu principal*/
	char  sair; /*variavel de escolha para sair do menu principal*/
	

	
    

   while (cond == 1){            /*laço de repetição do menu principal*/
   
                             printf("\n            ________________________________________");
                             printf("\n           |                                        |");
                             printf("\n           |   Biblioteca The World One Click       |");     
                             printf("\n           |________________________________________|");
                             printf("\n           |                                        |");
                             printf("\n           |   Entrar como Aluno          Digite [1]|");
                             printf("\n           |                                        |");
                             printf("\n           |   Entrar como Administrador  Digite [2]|");
                             printf("\n           |                                        |");
                             printf("\n           |   Sair                       Digite [3]|");
                             printf("\n           |________________________________________|\n\n");
   
                              printf("\n            Informe a opçao :");
   
   scanf("%d",&esc);
   system("cls") ;
   
   switch (esc){                     /*escolha  do menu principal*/
   	
   	case 1:/*_________________________________entrar ALUNO _______________________________________________________________________--*/
   	     
   	     entrar_aluno();
   		   
   	break;  
   	
   	case 2: /*_________________________________entrar admistrador _______________________________________________________________________*/
   		 
   		 entrar_adm();
   	
   	break; 
   
   	case 3: /*-----------------------------------       sair   ----------------------------------------------------------------------------- */
   		
   		printf(" +-------------------------------------+\n |Deseja realmente sair ? S-Sim / N-Nao|\n +-------------------------------------+\n");
   		printf("\n INFORME A OPCAO :");
   		scanf("%s",&sair);
   		
   	    if(sair == 's' or sair == 'S' ){
   	    	cond=2;
		   }else{
		   	
		   	cond=1;
		   }
   	    system("cls") ;	
   	break;    /*----------------------------------- fecha sair ----------------------------------------------------------------------------- */
   		
   	
   	  default:  /*-----------------------------------Opcao invalida ----------------------------------------------------------------------------- */
   	  	    printf("\n            +--------------------------------+           \n            |Opcao invalida!! Tente Novamente| \a\a \n            +--------------------------------+");
            
            cond=1;
            
             /*-----------------------------------fecha Opcao invalida ----------------------------------------------------------------------------- */
   	
   }/* fecha escolha  do menu principal*/
 }	 /* fecha laço de repetição do menu principal*/
 
	

  return 0;  

}   /*fecha função main*/



void entrar_aluno( ){ /*função entar*/
	
	void    consultarlivro(void);

	
	        int cpflido[50];      /* varial cpf lido no bloco de notas   */
   		    int senha[50];        /* varial senha lida no bloco de notas */
            char nome[50][100];       /* varial nome lido no bloco de notas  */
	        int cpfinf;           /* cpf informado                       */
			int senhainf;         /* senha informado                     */  
            int i;                 
                  
            

	        printf("OBS: Caso nao esteja cadastrado procure o administrador \n\n");
	        
	        printf("Informe seu CPF com 11 digitos: ");
	        scanf("%d",&cpfinf); 
	        printf("Informe sua senha com 4 digitos: ");
	        scanf("%d",&senhainf);
	        
	        
	        
	         FILE *arquivo ;
        	arquivo = fopen("cadastroaluno.txt","r") ;   /* ablre arquivo txt para leitura e armazena no vetor*/
        	
        	while (!feof(arquivo)){
        		
        	for (i=0;i<50;i++){
           fscanf(arquivo,"%d %d %s  \n", &cpflido[i],&senha[i],&nome[i]);	
        
			}
	       
			
				
        
        	}
        	
        	 
	        fclose(arquivo);
	
	        int cond2; 
	        
	
            for (i=0; i<50 ;i++){    /*laço do vetor*/
            if (cpfinf == cpflido[i] && senhainf == senha[i] ){  /* se as os cpfs e senhas corresponderem*/ 
        
            system("cls") ;
            nome[i][30];
           
				
              printf("\n            +_____________________________________+");
              printf("\n            |  %s        " ,nome[i] ); 
			                                         printf("          |"  );    
              printf("\n            +_____________________________________+");
              printf("\n            |                                    |");
              printf("\n            |Consultar Livro           Digite [1]|");
              printf("\n            |                                    |");
              printf("\n            +____________________________________+\n\n");
            
            
            printf("\n            Informe a opçao :");        
            scanf("%d",&cond2); // pega variavel escolha do menu do aluno//
			switch (cond2) {     /*menu entrar*/ 
				
				
				case 1:
				    system("cls") ;	
					consultarlivro();
			
				break;
					
				
				
				
			}                 /*fecha menu ao entrar*/ 
			
			
			
			 i=51;
				
			}                 /* fecha se as os cpfs e senhas corresponderem*/ 
			
			else{   /* se as os cpfs e senhas nao corresponderem*/       
			
			
			 if (cpfinf != cpflido[i] && i == 49 ){ /* se chegar no final do arquivo e nao encontar nenhum cpf iguau digitado*/ 
			printf(" \n +-------------------+\n |CPF Nao cadastrado |\n |Ou senha incorreta | \n +-------------------+\n \a\a");
			
		       }                                    /* fecha se chegar no final do arquivo e nao encontar nenhum cpf iguau digitado*/ 
              
   	        }    /* se as os cpfs e senhas nao corresponderem*/ 
			
			
		
		
				
			} /*fecha o laço do vetor*/
   	        system("pause") ;
   	        system("cls") ;	
	
	
	
}/*fecha função entrar */






void entrar_adm(){
	
	void    emprestarlivro(void);
	void    devolucaodolivro(void);
	void     cadastrar_aluno(void);
	void     cadastrar_livro(void);
    void       excluirlivro(void);
    int cond3;
	int senhaadm;
   		printf("\nINFORME A SENHA DE ADMINISTRADOR :");
   		scanf("%d",&senhaadm);
   		fflush(stdin);
   		
   	
   		if(senhaadm == 2901){
   			
   			                 printf("\n            _____________________________________");
                             printf("\n            |         Menu Do Administrador      |");     
                             printf("\n            |____________________________________| ");
                             printf("\n            |                                    |");
                             printf("\n            |Cadastrar Aluno           Digite [1]|");
                             printf("\n            |                                    |");
                             printf("\n            |Cadastrar Livro           Digite [2]|");
                             printf("\n            |                                    |");
                             printf("\n            |Excluir Livro             Digite [3]|");
                             printf("\n            |                                    |");
                             printf("\n            |Retirar Livro             Digite [4]|");
                             printf("\n            |                                    |");
                             printf("\n            |Devolver Livro            Digite [5]|");
                             printf("\n            |                                    |");
                             printf("\n            |____________________________________|\n\n");
   
   			                 printf("\n Informe a opçao:");
   	       	  scanf("%d",&cond3);
   			
   			
   			switch (cond3) { 
   			
   			case 1:
   				system("cls") ;
   				cadastrar_aluno( );
			break;
   			
   			case 2:
   				system("cls") ;
   				cadastrar_livro( );
			break;
   			
   			case 3:
   				system("cls") ;
   				excluirlivro( );
			break;
   			
   			case 4:
   				system("cls") ;
			    emprestarlivro();
			break;
			
			
			case 5:
   				system("cls") ;
				devolucaodolivro();
			break;
   			
   			
   			
   	       	}
   			
   			
		   }else {
		   	printf("\n            +------------------------------------+ \n            |   Senha do administrador incorreta !  |    \n            +------------------------------------+\n\n");
            }
   	     
           
           system("pause") ;
          system("cls") ;
     
	 
	  }



void cadastrar_aluno( ){   /*___________________________________ função cadastrar_________________________________________________________ */
	
		                
	              
	char  nome[90]; /*variavel pega o nome do aluno            */
    char   cpf[15];/*variavel pega o cpf  do aluno             */
    int    senha1; /*variavel pega a senha do aluno            */
    int   senha2;  /*variavel pega a comfirma do aluno         */
   	int   cont4=1; /*laço para verificar se as senha sao iguais*/
	int     i=0;
	
	
    printf("Digite o nome do aluno :");
	fflush(stdin); 
	gets(nome);
	
	
	for (i=0;i<50;i++){
	if(nome[i]==' '){
		
		nome[i]='_';
	}
     }
	
	
	
	
	
	 printf("Digite o cpf do aluno com 11 digitos:");
	 gets(cpf);
	 fflush(stdin);
	
	FILE *arquivo1 ;
	
	arquivo1 =fopen("cadastroaluno.txt","a") ;     /* ablre arquivo txt para gravar o dados*/
	
	while( cont4==1 ){ /* laço de repetiçao caso a senha nao correspoderem */
		
	printf("Digite uma senha com 4 digitos:");
	scanf("%d",&senha1);
	fflush(stdin);
	
	printf("Comfirme sua senha com 4 digitos:");
	scanf("%d",&senha2);
	fflush(stdin);
	if(senha1 == senha2)
	{
		printf("\n +-------------------------------------+ \n |Cadastro realizado com sucesso       | \n +-------------------------------------+\n\n");
	 cont4=2;
	}else {
		system("cls");
		printf("\n +-------------------+ \n |Senhas nao conferem    | \n |Digite a senha novamente | \n +-------------------+ \n");
		
	cont4=1;	
	   }
	   
	 }
	
	fprintf(arquivo1 ,"\n%s %d %s" ,cpf, senha1 ,nome   );
	
	fclose(arquivo1);
	
   	system("pause") ;		
   	system("cls") ;	
   		
}/*fecha função cadastrar aluno*/



void cadastrar_livro( ){ 

    char  nomelivro [100]  ;
    char   gen [20];
    char  autor [30];
    char  editora[60];
    int   edicao;
    int i;
    		
	int cond4 = 0 ;
     
    while( cond4 <= 1) {
	

	FILE *arquivo ;

	
	arquivo =fopen("cadastrolivro.txt","a") ; 
	
	printf("Digite o nome do livro :");
	fflush(stdin); 
	gets(nomelivro);
	
	
	
	// troca espaço em braco por _//
	for (i=0;i<50;i++){
	if(nomelivro[i]==' '){
		
		nomelivro[i]='_';
	}
     }
	
	
	
	 
	printf("Digite o genero :");
	gets(gen);
	fflush(stdin);
	
	
		// troca espaço em braco por _//
	for (i=0;i<50;i++){
	if(gen[i]==' '){
		
		gen[i]='_';
	}
     }
	
	
	printf("digite o autor :");
	gets(autor);
	fflush(stdin);
	
		// troca espaço em braco por _//
	for (i=0;i<50;i++){
	if(autor[i]==' '){
		
		autor[i]='_';
	}
     }
     
     
    printf("digite a editora :");
	gets(editora);
	fflush(stdin);
	
		// troca espaço em braco por _//
	for (i=0;i<50;i++){
	if(autor[i]==' '){
		
		autor[i]='_';
	}
     }
	
	
	
	printf("digite a edicao :");
	scanf("%d",&edicao);
	fflush(stdin);
	
		// troca espaço em braco por _//

     
     
     
     
	
	

	 printf("\n +-------------------------------+\n |Cadastro realizado com sucesso! |\n +------------------------------+\n\n");
	 int i;
	 
	fprintf(arquivo , "\n%s %s %s  " ,nomelivro,gen,autor   );
	
	 
	
	
	fclose(arquivo);
	
	
	 
	 printf("Deseja cadastrar novamente ? 1-Sim / 2-Nao\n"); // comando para continuar ou encerrar
	 
	   scanf("%i", &cond4 );
	 
	}   

    

}  /*fecha função cadastrar livro*/

void excluirlivro(){
	
	
	
             char nome[7][60];
              char genero[7][60];
			 char autor[7][60];
            



	        char res[60];
            int i;

            printf("Digite o nome do livro\n");
            scanf("%s\n",&res );


	         FILE *arquivo ;
        	arquivo = fopen("cadastrolivro.txt","r") ;

        	while (!feof(arquivo)){

           for (i=0;i<7;i++){

           fscanf(arquivo,"%s %s %s \n", &nome[i], &genero[i],&autor[i]);

		   }



            

        	}


	        fclose(arquivo);
	        
	        
	           FILE *arquivo1 ;
	         arquivo1 =fopen("cadastrolivro.txt","w") ;
	        
	        
           fclose(arquivo1);
           
           
            
	        
	           FILE *arquivo2 ;
	         arquivo2 =fopen("cadastrolivro.txt","a") ;
	       
		    for (i=0;i<7;i++){
		   if ( strcmp(res, nome[i]) ==0  ){
	        }else {
				
				fprintf(arquivo2 ,"%s %s %s\n" ,nome[i],genero[i], autor[i] );
			}
	     	}
           fclose(arquivo2);
           
	
	
	printf("Livro excluido com sucesso ");
	
	
}


       void consultarlivro(){
	
	
	
             char nome[40][60];
             char genero[40][60];
             char autor[40][60];



	        char escolhadolivro[60];
            int i;

            printf("Digite O Nome Do Livro\n");
            fflush(stdin); 
	        gets(escolhadolivro);
            
            	// troca espaço em braco por _//
	     	for (i=0;i<60;i++){
			if(escolhadolivro[i]==' '){
		
		   	escolhadolivro[i]='_';
            	}
             }
	


	         FILE *arquivo ;
        	arquivo = fopen("cadastrolivro.txt","r") ;

        	while (!feof(arquivo)){

           for (i=0;i<7;i++){

           fscanf(arquivo,"%s %s %s \n", &nome[i], &genero[i],&autor[i]);

		   }





        	}


	        fclose(arquivo);

            for (i=0;i<7;i++){

            	 if ( strcmp(escolhadolivro, nome[i]) ==0  ){

	        system("cls") ;
            printf(" Livro: %s \n Genero: %s\n Autor: %s \n",nome[i],genero[i],autor[i]);
        
			i=8 ;
           	}else {
           		
           		if ( escolhadolivro != nome[i] && i == 6 ){
           		printf("livro nao encontrado\n");
           	    
           	    }
			   }
		   }




     system("pause") ;
		
	
}

   void emprestarlivro(){
   	
   	
   	
	        char nomelivro[50][100];  
            char genero[50][100];
            char autor[50][100];
            
	          
            
          
          
            char cadastrolivro [30];
            int i;
            
            
	
	        
	        printf("Digite o nome do livro emprestado: ");
	        scanf("%s",&cadastrolivro);
	       
	         
			   
	         FILE *arquivo ;
        	arquivo = fopen("cadastrolivro.txt","r") ;
        	
        	while (!feof(arquivo)){
        		
           for (i=0;i<7;i++){
           fscanf(arquivo,"%s %s %s \n", &nomelivro[i], &genero[i], &autor[i]);	
            }
		
	       
			
				
        
        	}
        	
        	 
	        fclose(arquivo);
	
	         char cpflivro [100];
	         
	          
            
            
             
            
              
             // dhdsfsdkkkkkkkfffff-----------------------------------------------------------------//
             
            for (i=0;i<7;i++){
            if ( strcmp(cadastrolivro, nomelivro[i]) ==0  ){
            	
             printf("\n O livro a ser emprestado : %s  Genero: %s Autor  %s Data : %s Hora: %s \n \n ",nomelivro[i],genero[i],autor[i],__DATE__,__TIME__);
            
            
             printf("Informe O CPF:");
             scanf("%s",&cpflivro);
             
                 
            FILE *arquivo ;
        	arquivo = fopen("cadastrolivroaluno.txt","a") ;
        	
        	
          
          fprintf(arquivo,"%s %s %s %s %s %s  \n", cpflivro,nomelivro[i], genero[i],autor[i],__DATE__,__TIME__);
          
          i=8;
          
           fclose(arquivo);
           
           printf("  \n\nLivro emprestado com sucesso  \n Voce tem 5 dias para devolver \n");
				
              }else {
           		
           		if ( cadastrolivro != nomelivro[i] && i == 6 ){
           		printf("Livro Nao Encontrado\n");
           	    
           	    }
			   }

           }
           
	
	      
    	
     }


 void    devolucaodolivro(){
    	
    	     char cpfdevolver1[7][60];
    	     char nome[7][60];
             char genero[7][60];
             char autor[7][60];



	        char cpfdevolver[60];
            int i;

            printf("Informe seu CPF:\n");
            scanf("%s",&cpfdevolver);


	         FILE *arquivo ;
        	arquivo = fopen("cadastrolivroaluno.txt","r") ;

        	while (!feof(arquivo)){

           for (i=0;i<7;i++){

           fscanf(arquivo,"%s %s %s %s \n",&cpfdevolver1[i], &nome[i], &genero[i],&autor[i]);

		   }





        	}


	        fclose(arquivo);
	        
	        
	           FILE *arquivo1 ;
	         arquivo1 =fopen("cadastrolivroaluno.txt","w") ;
	
           fclose(arquivo1);
           
           
            
	        
	           FILE *arquivo2 ;
	         arquivo2 =fopen("cadastrolivroaluno.txt","a") ;
	       
		    for (i=0;i<7;i++){
		   if ( strcmp(cpfdevolver, cpfdevolver1[i]) ==0  ){
	        }else {
				
				fprintf(arquivo2 ,"%s %s %s %s\n" ,cpfdevolver1[i],nome[i],genero[i], autor[i] );
			}
	     	}
           fclose(arquivo2);
           
    	
    	
	}


