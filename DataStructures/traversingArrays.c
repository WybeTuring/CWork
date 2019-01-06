#include <stdio.h>

int main(){
  int i,n,array[20];
  printf("Enter the number of elements in the string: ");
  scanf("%d",&n);
  for(i=0;i<n;i++){
    printf("Enter the element at array[%d]: ",i );
    scanf("%d",&array[i]);
  }
  for(i=0;i<n;i++){
    printf("%d \n",array[i] );
  }
  return 0;
}
