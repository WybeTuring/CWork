#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int i,y;
  int arr[256];
  char str1[256];
  for(i=0;i<256;i++){
    arr[i] = 0;
  }
  printf("Enter the string: ");
  gets(str1);
  int k = strlen(str1);
  printf("\n");
  //looping through counting the occurences
  for(i=0;i<k;i++){
    y = (int)str1[i] - 32;
    arr[y] = arr[y]+1;
  }
  //checking if any character appears more than once
  for(i=0;i<k;i++){
    if(arr[y] != 1){
      printf("The string is not made up of unique characters!\n");
      return 1;
    }
    else{
      arr[y] = 1; 
    }
 }
 printf("The string is made up of unique characters\n");
 return 0;
}
