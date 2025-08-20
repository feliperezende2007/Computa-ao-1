#include <stdio.h>

int main()
{
	int alunos;
	int monitores;
	int total;
	printf("quantos alunos vao?");
	scanf("%d",&alunos);
	printf("quantos monitores vao?");
	scanf("%d",&monitores);
	total= alunos + monitores;
	if(total <= 50)
	{
		printf("C) possivel fazer em uma viagem");
	}
	else {
		printf("C) preciso mais de uma viagem");
	}

	return 0;
}
