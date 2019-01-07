/*
Author: Lemfon Karl Ndze'dzenyuy <WybeTuring>
Email: karllemfon@gmail.com, wybeturing@gmail.com
GitHub: WybeTuring
Date: 06/01/2019
Collaborators: AlexWaweru
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Reversing a string, this is a rather brute way of implemeting this functionality. When I learn pointers and other things, I will take serious time to implement a more advanced solution.

int main(){
  int i=0;
  char string[100];
  printf("Enter the string: \n");
  gets(string);

  int n = strlen(string);
  printf("%d\n",n);
  char rev[n];
  //looping through the string and reading from the end backwards
  for(i=0;i<=n;i++){
    rev[i] = string[n-i];
    printf("%c", rev[i]); //Print the new string as it appears
  }
  printf("\n%s\n",rev);
  return 0;

}
