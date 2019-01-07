/*
Author: Lemfon Karl Ndze'dzenyuy
Email: karllemfon@gmail.com
GitHub: WybeTuring
Intent: This is simply practice for the study I am doing on pointers
*/
#include <stdio.h>
#include <stdlib.h>

//Decomposes the double number into an interger part and a fractional int_part
void decompose(double x, long *int_part, double *frac_part){
  *int_part = (long)x;
  *frac_part = x - *int_part;
  printf("%ld\n",*int_part);
  printf("%d\n",*frac_part);
}


int main(){
  long i=0;
  double d=0.9898;
  decompose(3.5476352,&i,&d);
  return 0;
}
