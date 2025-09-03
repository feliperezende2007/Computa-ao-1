#include <stdio.h>

int main()
{
	int n, i;
	float a, b, c, media;

	printf("digite o numero de testes desejado:");
	scanf("%d", &n);

	for(i = 0; i < n; i++)
	{

		printf("digite tres valores reais:");
		scanf("%f %f %f", &a, &b, &c);

		media = (a*2 + b*3 + c*5)/10;

		printf("%.1f\n", media);

	}


	return 0;
}
