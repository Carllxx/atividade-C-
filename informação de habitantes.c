#include<stdio.h> 
#include <locale.h>

int main () {
setlocale(LC_ALL, "");

char sexo;
float mediaSalario, salario, somaSalario =0;
int maiorIdade = 0, menorIdade = 0, mulheres5k, contadorSalario =0;
int idade, opcao;
 
 do{
 
printf("\n ===== MENU ===== \n");
printf("1 - adicionar pessoa \n");
printf("2 - Exibir resultado e sair \n");
printf("Digite a opção desejada: ");
scanf("%i",&opcao);


 switch (opcao) {
	case 1:
printf("digite sua idade:  ");
scanf("%i",&idade);

fflush(stdin);

printf("informe seu sexo usando M ou F: ");
scanf("%c",&sexo);

sexo = toupper(sexo);

printf("informe seu salario: ");
scanf("%f",&salario);

//somaSalario = somaSalario + salario;
somaSalario = somaSalario + salario;

//contadorSalario = contadorSalario + 1
somaSalario+= salario;

if(idade >maiorIdade){
	maiorIdade= idade;
}

if(idade <menorIdade)
    menorIdade = idade;
		
		if (sexo == 'F' && salario >= 5.000 );
		mulheres5k++;
		
		break;
		case 2:
			
			mediaSalario = somaSalario / contadorSalario;
			
			printf("Média salario do grupo: R$ %.2f \n",mediaSalario);
			printf("Maior idade do grupo: %i \n", maiorIdade);
			printf("Menor idade do grupo: %i \n", menorIdade);
			printf("quantidade de mulheres com o salario de 5k \n",mulheres5k);
			break;
			default:
				printf("opção invalida! ");
}
} while (opcao != 2);

return 0;
}
  

