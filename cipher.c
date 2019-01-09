#include <stdio.h>
#include <stdlib.h>

int main(void){
  int i,k=13,m,n=11;
  char ans[11];
  char str[11] = "hailceasar";
  for(i=0;i<n;i++){
    m = (int)str[i] + k;
    if (m > 123){
      m = m -123 + 97;
    }
    ans[i] = (char)m;
  }
  for(i=0;i<n;i++){
    printf("%c",ans[i]);
  }
  return 0;
}
