//Rodrigo Boaventura da Silva
//Quest�o 6

#include <stdio.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL,"");
	int num;
	printf ("Insira um n�mero: ");
	scanf ("%d", &num);
	if (num > 10){
		printf ("N�mero � maior que 10");
		
	}
	else if (num < 10){
		printf ("N�mero � menor que 10");
	}
	else if (num = 10){
		printf ("Voc� acertou!");
	}
	
}
