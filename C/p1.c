#include <stdlib.h>
#include <stdio.h>

unsigned int printMultiplesOf(unsigned int m, unsigned int n){
	unsigned int total = 0;
	for(unsigned int x = 0; x < n; x+=m){
		total += x;
	}
	return total;
}

int main(){
	unsigned int total = 0;
	total += printMultiplesOf(3,1000);
	total += printMultiplesOf(5,1000);
	total -= printMultiplesOf(15,1000);
	printf("%u",total);
	return 0;
}
