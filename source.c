#include <stdio.h>
#include <locale.h>

void main(void)
{
	setlocale(LC_ALL, "RUS");
	int n = 4, k = 2, m = 6;
	printf("%d\n\t",n);
	printf("число %d, %d - цифр целой части и %d цифр дробной части\n\n", n, k, m );
	printf("%2.6f", n/333.);
	
}
