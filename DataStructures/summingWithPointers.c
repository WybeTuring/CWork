/*
Author: Lemfon Karl Ndze'dzenyuy
Email: karllemfon@gmail.com
GitHub: WybeTuring
Intent: This is simply practice for the study I am doing on pointers. Here I sum the elements of an array by using pointers to loop through the array
*/
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int arr[5] = {1,4,5,7,8}, *p, sum;
  p = &arr[0];
  for(p=&arr[0];p<&arr[4];p++){
    sum += *p;
  }
  printf("The sum of elememts is: %d",sum);
  return 0;
}
