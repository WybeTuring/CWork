/*
Author: Lemfon Karl Ndze'dzenyuy
Email: karllemfon@gmail.com
GitHub: WybeTuring
Intent: This is simply practice for the study I am doing on pointers
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
  int *table, size, i=0;
  int max_size,k;
  // Obtaining the array
  printf("How many elements does you array have? : \n");
  scanf("%d",&size);
  table = (int*)malloc(size*sizeof(int));
  for(i=0;i<size;i++){
    printf("Enter the %d element: \n",i );
    scanf("%d",&table[i]);
  }

  //Determining the amount of water that the tank can hold

  //Taking the case when the two boundaries are thesame
  if(table[0] == table[size-1]){
    max_size = table[0] * (size - 2);
    //Going through to subtract the occurences
    for(k=1; k < size-1 ; k++){
      if(table[k] >= table[0]){
        max_size -= table[0];
      }
      else{
        max_size -= table[k];
      }

    }
  }

  //taking the case when the two boundaries are not thesame

  else{
    //finding the lesser boundary and making the two boundaries equal
    if(table[0]<table[size-1]){
      table[size-1] = table[0];
    }
    else{
      table[0] = table[size-1];
    }
    // calculating the value of the maximum number of litres
    max_size = table[0] * (size - 2);
    //Going through to subtract the occurences
    for(k=1; k < size-1 ; k++){
      if(table[k] >= table[0]){
        max_size -= table[0];
      }
      else{
        max_size -= table[k];
      }

    }

  }


  printf("Output: %d litres of water.\n", max_size);
  free(table);
  return 0;
}
