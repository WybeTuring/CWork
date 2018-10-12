#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
//This function will be used to count the number of integers in the entire string
int intergerCount(char str[], int len){
  int i;
  i = 0;
  int count;
  count = 0;
  for(i=0;i<len;i++){
    if(str[i]=='1'||str[i]=='2'||str[i]=='3'||str[i]=='4'||str[i]=='5'||str[i]=='6'||str[i]=='7'||str[i]=='8'||str[i]=='9'||str[i]=='0'){
      count++;
    }
  }
  return count;
}
//this function will be used to count the number of commas in the string

int commaCount(char str[], int start, int end){
  int i;
  int countcomma=0;
  for(i=start;i<=end;i++){
    if(str[i]=='?'){
      countcomma++;
    }
  }
  printf("The number of commas is %d\n",countcomma );
  return countcomma;
}

//This function returns the positions of the integers in the stringLength
int *tableOfPositions(char str2[], int len2){
  int *table;
  int i,lenTable,*placeholder;
  lenTable = intergerCount(str2,len2);
  table =  (int*) malloc(lenTable * sizeof(int));
  for(i=0;i<len2;i++){
    if(str2[i]=='1'||str2[i]=='2'||str2[i]=='3'||str2[i]=='4'||str2[i]=='5'||str2[i]=='6'||str2[i]=='7'||str2[i]=='8'||str2[i]=='9'||str2[i]=='0'){
      table[i] = i;
    }
    placeholder = table;
    free(table);
    return placeholder;
  }

}

int main(){
  char string[100];
  int stringLength,k,criticalValue, last;
  int count, *keytable,holder1,holder2;
  k = 0;
  last = 1;

  printf("Enter your string\n");
  gets(string);
  stringLength = strlen(string);
  intergerCount(string,stringLength);
  count = intergerCount(string,stringLength);
  keytable = tableOfPositions(string,stringLength);
while(last ==1){
  for(k=0;k<count-1;k++){
    holder1 = string[keytable[k]]-'0';
    holder2 = string[keytable[k+1]]-'0';
    if((holder1+holder2)==10){
      criticalValue = commaCount(string,keytable[k],keytable[k+1]);
      if(criticalValue != 3){
        last = 0;
      }
    }
  }
}
if(last ==1){
  printf("True\n");
}
else{
  printf("False\n");
}
free(keytable);

  return 0;

}
