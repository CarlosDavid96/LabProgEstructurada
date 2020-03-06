#include<stdio.h>

int main()
{
	char c;
	
	printf("Ingrese un caracter: ");
	c=getchar();
	
	int a = (int) c;
	
	if(48<=a && a<=57)
	{
	 printf("Caracter Numerico: ");
	 
	}else{
		
		if(65<=a && a<= 90)
		{
		printf("Caracter Alfabetico en Mayusculas: ");
		}
		else{
			if(97<=a && a<=122)
			{
			printf("Caracter Alfabetico en minusculas: ");
		}else{
			printf("Caracter Sinmolico: ");
      }
	}
  }
  putchar(c);
  printf("\n");
  return 0;
}

