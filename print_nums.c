#include <stdio.h>

int main(){
  int A[]={1,2,10,43,5};
  int size=sizeof(A)/sizeof(int);
  int i;
  for(i=0;i<size;i++){
    printf("[%d] ",A[i]);
  }
  return 0;
}
