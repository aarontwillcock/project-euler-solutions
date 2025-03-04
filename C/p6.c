#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("Sum sq diff\n");
	int n = 100;

	unsigned int totalSquares = 0;
	unsigned int total = 0;

	for(int x=0; x<=n; x++){
		totalSquares += x*x;
		total += x;
	}

	printf("Squares: %u\n",totalSquares);

	total *= total;

	printf("Square of Sum: %u\n",total);

	total -= totalSquares;

	printf("%u",total);

	return 0;
}
