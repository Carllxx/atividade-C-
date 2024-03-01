//biblioteca
//std-i-o
//std= standar(padrão)
//i=input (esntrada)
//o= (saida)
#include<stdio.h>

int main(){

//declarar variavel

char nome [200];  //cadeia
int idade;
float primeiraNota;
float segundaNota;
float terceiraNota;
float media;
//exibir dados

printf("\n=== exibindo dados === \n");

printf("informe o nome do aluno: \n");
scanf("%s",&nome);

printf("Digite a Idade; \n");
scanf("%d",&idade);

printf("informe sua nota1: \n");
scanf("%f",&primeiraNota);

printf("informe nota2: \n");
scanf("%f",&segundaNota);

printf("informe nota3: \n");
scanf("%f",&terceiraNota);

//calculando...

media = (primeiraNota+segundaNota+terceiraNota) / 3;

printf("\n=== exibindo dados ===\n");

printf("nome: %s \n", nome);

printf("Idade: %i \n\n", idade);

printf("primeiranota: %.1f \n", primeiraNota);

printf("segundanota: %.1f \n", segundaNota);

printf("terceiranota: %.1f \n", terceiraNota);

printf("Média: %.1f \n", media);
}




















