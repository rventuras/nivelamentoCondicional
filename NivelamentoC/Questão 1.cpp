//Rodrigo Boaventura da Silva
//Quest�o 1

#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "portuguese");
	float nota1, nota2, nota3, nota4, nota5, media;
	printf ("Insira nota1: ");
	scanf ("%f", &nota1);
	printf ("Insira nota2: ");
	scanf ("%f", &nota2);
	printf ("Insira nota3: ");
	scanf ("%f", &nota3);
	printf ("Insira nota4: ");
	scanf ("%f", &nota4);
	printf ("Insira nota5: ");
	scanf ("%f", &nota5);
	media = (nota1 + nota2 + nota3 + nota4 + nota5)/5;
    printf ("Sua m�dia � %.1f", media);
	
}
