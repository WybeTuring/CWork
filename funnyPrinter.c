/*
Author: Lemfon Karl Ndze'dzenyuy
Email: karllemfon@gmail.com
GitHub: WybeTuring
Intent: This program prints the numbers from 1 to 100; printing Fizz if the number is a multiple of 3, Buzz if it is of 5, and FizzBuzz if it is of both 5 and 3
*/
#include <stdlib.h>
#include <stdio.h>

int main(){
  int i;
  //looping through
  for(i=1;i<=100;i++){
    //checking if the number is neither a multiple of 5 nor 3
    if((i%3 != 0) && (i%5 != 0)){
      printf("%d\n", i);
    }
    //checks if the number is both a multiple of 3 and 5
    else if((i%5 == 0) && (i%3 == 0)){
      printf("FizzBuzz\n");
    }
    //checks if the number is only a multiple of 5
    else if(i%5 == 0){
      printf("Buzz\n");
    }
    //All remaining numbers at this stage are multiples of 3
    else {
      printf("Fizz\n");
    }
  }
  return 0;
}
