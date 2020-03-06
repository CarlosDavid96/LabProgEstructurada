#include <stdio.h>
//Practica5
int main()
{
	int i=0, num;
	float prom, suma=0;
	printf("Promedio");
	printf("\nIngrese un numero Positivo:");
	scanf("%d", &num);
	while(num>=0)
	{
	suma=suma+num;
	i=i+1;
	printf("\nIngrese un numero positivo:");
	scanf("%d", &num);
	}
	prom=suma/i;
	printf("\n%.2f = %.2f / %d", prom,suma,i);
	printf("\nEl promedio es: %.2f", prom);
	return 0;
}
