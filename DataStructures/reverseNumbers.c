/*
Author: Lemfon Karl Ndze'dzenyuy
Email: karllemfon@gmail.com
GitHub: WybeTuring
Intent: This is a program that reads a number from the input on the keyboard and prints them in reverse order
*/
#include <stdio.h>
#include <stdlib.h>
#define N 10

int main(){
  int arr[N], *p;
  printf("Enter the numbers: ");
  //Interesting way to read the strings here man! Never thought of this before
  for(p=arr;p<arr+N;p++){
    scanf("%d",p );
  }
  //printing in reverse order
  for(p=arr+N-1;p>=arr;p--){
    printf("%d", *p);
  }
  return 0;
}
