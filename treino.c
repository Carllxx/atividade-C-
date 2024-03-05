//biblioteca
//std-i-o
#include <stdio.h>
#include<string.h>

    void cabecalho() {
	
     
    system("cls || clear"); //limpa a tela
	printf ("\n============= \n");
	printf("\n===SENAI===\n");
	printf("\n============== \n");
	fflush(stdin); //limpar o cache de input
}

int main(){
	
	char login [200], logincadastrado[200] = "Caio";
	char senha[200], senhacadastrada[200] = "123";
	
	cabecalho();
	printf ("digite o login: ");
	scanf("%s",&login);
	
	cabecalho();
	printf ("digite a senha: ");
	scanf("%s",&senha);
	
	cabecalho();
	if (strcmp(login, logincadastrado) == 0 && strcmp(senha, senhacadastrada)== 0){
	  printf("Bem Vindo! ");
}else{
      printf("acesso negado! ");
}
		return 0;
	
}
