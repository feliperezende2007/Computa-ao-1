#include <stdio.h>
int main()
{
	int i;
	float f;
	char c;

	printf("Digite um caractere: ");
	scanf("%c",&c);
	printf("Digite um valor inteiro: ");
	scanf("%i",&i);
	printf("Entre com um numero de ponto flutuante (valor nao inteiro): ");
	scanf("%f",&f);
	printf ("Voc digitou: \n");
	printf("caractere: %c\n",c);
	printf("numero inteiro:%d\n",i);
	printf("nimero de ponto flutuante: %.2f\n",f);

	return 0;
}
