#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("Even Fib #s\n");

	int * arr = (int *)malloc(sizeof(int)*2);
	int arrLen = 2;

	//Set base cases
	arr[0] = 1;
	arr[1] = 2;

	while(arr[arrLen-1] < 4000000){
		int * nPtr = (int*)realloc(arr,sizeof(int)*(arrLen+1));
		if(nPtr == NULL){
			free(nPtr);
			printf("Error!\n");
			return 0;
		}
		arr = nPtr;
		arrLen+=1;
		arr[arrLen-1] = arr[arrLen-2] + arr[arrLen-3];
		printf("New Len: %d\n",arrLen);
	}
	unsigned int total = 0;
	for(int x = 0; x < arrLen-1; x++){
		printf("%d,",arr[x]);
		if(arr[x]%2 == 0){
			total += arr[x];
		}
	}

	printf("Result: %u",total);

	return 0;
}
