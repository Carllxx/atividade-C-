#include <string.h>
#include <locale.h>
#include <stdio.h>

float inflacionarPreco(float preco){
	float novoPreco;
	
	//operação ternário.
	novoPreco =preco < 100 ? preco * 1.1 : preco * 1.2;
	
	return novoPreco;
}

int main(){
   setlocale(LC_ALL, "");
   
   float precoProduto, resultado;
   
   printf("digite preço do produto: ");
   scanf("%f",&precoProduto);
   
   resultado =inflacionarPreco(precoProduto);
   
   printf("resultado: R$ %.1f.\n", resultado);
   
   return 0;
}
