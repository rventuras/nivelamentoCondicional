//Rodrigo Baaventura da Silva
//Quest�o 3

#include <stdio.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL,"");
	int idade;
	
	printf("Digite sua idade: ");
	scanf ("%d", &idade);
	if (idade < 30)
	{
		printf ("Voc� � muito jovem!");
	}
}
