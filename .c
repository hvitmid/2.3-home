#include <stdio.h>
#include <locale.h>

void main(void)
{
	setlocale(LC_ALL, "RUS");
	int num, A, lol;
	puts("введите число", "\n");
	scanf("%d", &num);
	scanf("%d", &lol);
	A = num;
	printf("введено число");
	printf("%d", lol + num);

}
