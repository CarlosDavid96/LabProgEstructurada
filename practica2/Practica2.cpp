#include<stdio.h>

int x=5, y=2, z;

int main()
{
	printf("Operaciones Basicas");
	printf("\nEnteros");
	z=x+y;
	printf("\n%d + %d = %d",x,y,z);
	z=x-y;
	printf("\n%d - %d = %d",x,y,z); 
	z=x*y;
	printf("\n%d * %d = %d",x,y,z);
	z=x/y;
	printf("\n%d / %d = %d",x,y,z);
	z=x%y;
	printf("\n%d %% %d = %d",x,y,z);
	z=x++;
	printf("\n%d++ = %d",z,x);
	z=y--;
	printf("\n%d-- = %d",z,y);
	
	float a=7.5, b=5, c;
	printf("\nFlotantes");
	c=a+b;
	printf("\n%.2f + %.2f = %.2f",a,b,c);
	c=a-b;
	printf("\n%.2f - %.2f = %.2f",a,b,c);
	c=a*b;
	printf("\n%.2f * %.2f = %.2f",a,b,c);
	c=a/b;
	printf("\n%.2f / %.2f = %.2f",a,b,c);
	printf("\nBooleanos");
	c=a+b;
	printf("\n%f + %f = %f",a,b,c);
	char G=3, g=0, A;
	printf("\nCaracteres");
	G>>g;
	printf("\n%d >> %d",A,G,g);
	G<<g;
	printf("\n%d << %d",A,G,g);
	
    return 0;
}
