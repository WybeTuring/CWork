/*
Author: Lemfon Karl Ndze'dzenyuy
Email: karllemfon@gmail.com
GitHub: WybeTuring
Intent: This function finds a more efficient way to read strings considering the ineffectiveness of the gets(), fgets() and scanf functions from the standard library at doing these tasks
*/
#include <stdio.h>
#include <stdlib.h>

// Declaring the function as required
int char_read(char [], int n);

int main(){
  int length;
  char arr[500]; //I want to pre-set the maximum lenght of the string the user can enter to be 500
  printf("Please enter the string: ");
  scanf("%d", &length);
  char_read(arr, 500);
  printf("%s\n",arr);
  return 0;
}
int char_read(char str[], int n){
  int ch, i = 0;

  while((ch = getchar()) != '\n'){ // given that the type returned by getchar is an interger, the operation and evn the variable declaration are quite defined. It's clear why certain things are done.
    if(i<499){
      str[i++] = ch;
    }
    str[i] = '\0';
  }
  return i;
}
