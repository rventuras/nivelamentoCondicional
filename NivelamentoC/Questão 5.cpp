//Rodrigo Boaventura da Silva
//Quest�o 5

#include <stdio.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL,"");
	float notaF, totalP, aulaM, mediaAula;
	printf ("Insira sua nota final: ");
	scanf ("%f", &notaF);
	printf ("Insira o total de presen�a: ");
	scanf ("%f", &totalP);
	printf ("Insira o total de aulas: ");
	scanf ("%f", &aulaM);
	mediaAula = aulaM * 0.75;
	printf ("Nota final � %.2f", notaF);
	printf ("Total de presen�as � %.f", totalP);
	if (totalP >= mediaAula && notaF >= 6)
	{
		printf ("\nAprovado!");
	
	}
	else{
		printf ("\nReprovado!");
	}
	

	
}
