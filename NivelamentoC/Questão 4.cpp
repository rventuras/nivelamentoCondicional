//Rodrigo Boaventura da Silva
//Quest�o 4

#include <stdio.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL,"");
	int idade;
	printf ("Insira sua idade: ");
	scanf ("%d", &idade);
	if (idade >= 70)
	{
		printf ("Velho");
	}
	else if (idade >= 21)
	{
	
		printf ("Adulto");
		
	}
	else if (idade < 21)
	{

		printf ("Jovem");
	}
}
