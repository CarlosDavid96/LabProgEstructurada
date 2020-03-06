#include <stdio.h>
//Practica6
int main()
{
	int i=0, num;
	float prom, suma=0;
	printf("Practica 6 -Do While");
	printf("\n\nCalcular el Promedio");
	do
	{
	printf("\nIngrese un numero positivo:");
	scanf("%d", &num);
	if(num>=0)
	{
	suma=suma+num;
	i=i+1;
    }
    }
	while(num>=0);
	prom=suma/i;
	printf("\n%.2f / %d = %.2f", suma,i,prom);
	printf("\nEl promedio es: %.2f", prom);
	return 0;
}
