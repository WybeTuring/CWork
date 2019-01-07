/*
Author: Lemfon Karl Ndze'dzenyuy
Email: karllemfon@gmail.com
GitHub: WybeTuring
Intent: This is simply practice for the study I am doing on pointers
*/
#include <stdio.h>
#include <stdlib.h>
#define N 10

void max_min(int a[], int n, int *max, int *min){
  int i;
  *min = *max = a[0];
  // Traversing the array, searching for the maximum and minimum at thesame time
  for(i=0;i<N;i++){
    if(a[i] > *max){
      *max = a[i];
    }
    else if(a[i] < *min){
      *min = a[i];
    }
  }

}

int main(){

  int arr[10], biggest = 0, smallest = 0, i;
  for(i=0;i<N;i++){
    printf("Enter the %d element\n",i );
    scanf("%d", &arr[i]);
  }
  max_min(arr, N, &biggest, &smallest);
  printf("The largest element is %d\n", biggest);
  printf("The smallest element is %d\n",smallest );
  return 0;

}
