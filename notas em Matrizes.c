#include<stdio.h>
#include<locale.h>

#define TAM 2

int main (){
setlocale(LC_ALL, "");	
//declarndo variavel.
char nome[2][200];
float nota[2][3], media = 0;
int i, j;

//exibindo dados do usuario.
  for(i = 0; i < 2; i++ ) {
 printf("Digite o nome do %iº aluno: ", i+1);
 scanf("%s",&nome[i]);
 
 
 for(j = 0; j < 3; j++ ){
 	printf("\nDigite a %i nota: \n ", i+1);
 	scanf("%f",&nota[i][j]);
 	
 }
 printf("\n"); //somente para pular uma linha...
 
}

printf("\n\n===EXIBINDOS NOTAS===\n\n");

  for(i = 0; i < 2; i++ ){
 printf("\n%iº aluno: %s \n ", i+1, nome[i]);
 
 for(j = 0; j < 3; j++ ){
 	printf("%iº nota: %.1f \n ", j+1, nota[i][j]);
 }
 printf("Média: %.1f \n", media);
}
 	return 0;
 	
}


