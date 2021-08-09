#include <stdio.h>

int main ()

{
	static int n,x = 0;

	printf("\n\tCONTADOR DE CIFRAS\n\n");

	printf("\n\tDigite el numero:    ");
	scanf("%i", &n);

	while (n != 0){
		n=n / 10;
		x++;

	}

	printf("Este valor numerico tiene %i cifras\n", x);

	return 0;
}
