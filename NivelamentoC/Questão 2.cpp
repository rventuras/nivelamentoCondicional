//Rodrigo Boaventura da Silva
//Quest�o 2

#include <stdio.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL, "");
	float area, base, altura;
	printf ("Insira base e altura: ");
	scanf ("%f%f", &base, &altura);
	area = (base * altura)/2;
	printf ("A �rea � %.2f", area);
}
