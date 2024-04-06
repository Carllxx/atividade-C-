/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h> 
#include <locale.h>

int main (){
    setlocale (LC_ALL, "");
    
    char nome, disciplina;
    int idade, n1, n2, n3;
    float telefone, nota;
    float media, soma;
    int CPF;
    int i;
    
      printf("\n\n=== MENU DE INFORMACÕES ESCOLARES ===\n\n");
       
    printf("Digite seu nome: ");
    scanf("%s",&nome);
    
    printf("informe seu CPF: ");
    scanf("%i",&CPF);
    
    printf("digite a sua idade: ");
    scanf("%i",&idade);
    
    printf("Informe seu numero de telefone: ");
    scanf("%f",&telefone);
    
    
    for (i = 1; i <= 4; i++) {
        
          printf("digite a %iª nota: ", i);
    scanf("%f",&nota);
    
    media = media + nota;
    }
    
    printf ("\n\n === EXIBINDO RESULTADO === \n\n");
          printf("media: %.1f \n", media);
    return 0;
}