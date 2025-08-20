#include <stdio.h>

int main()
{
	int base;
	int altura;
	float perimetro;
	float area;
	printf("digite a base:");
	scanf("%d",&base);
	printf("digite a altura:");
	scanf("%d",&altura);

	perimetro = 2*base + 2*altura;
	area = base*altura;

	printf("o perimetro C): %.2f \n", perimetro);
	printf(" a area C): %.2f \n", area);
	if (perimetro > area)
		printf(" o perimetro C) maior que a area");
		else
		printf(" o perimetro nao é maior que a area");

	return 0;
}
