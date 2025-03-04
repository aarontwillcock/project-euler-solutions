#include <stdio.h>
#include <stdlib.h>

int getLCM(int a, int b){

  int max = (a>b)?a:b;

  while(1){
    if(max % a == 0 && max % b == 0){
      return max;
    }
    max++;
  }

  return 0;
}

int main(){
  printf("LCM of a set\n");
  int target = 20;
  int current = 1;
  for(int x = 1; x<=target; x++){
    current = getLCM(current,x);
  }

  printf("%d",current);

  return 0;
}
