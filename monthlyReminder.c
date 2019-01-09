/* Prints a one month reminder
Author: Lemfon Karl Ndze'dzenyuy
Email: karllemfon@gmail.com
GitHub: WybeTuring
Intent: This is a continuation of the work I am doing in C, I will be printing a one month reminder thing.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_REMIND 50 // Maximum number of reminders
#define MSG_LEN 60 //max lenght of reminder messages

int read_line(char str[], int n){
  int ch, i=0;
  while((ch=getchar()) != '\n'){
    if (i<n)
    str[i++] = ch;
  }
  str[i] = '\0';
  return i;
}
int main(void){
  char reminders[MAX_REMIND][MSG_LEN+3];
  char day_str[3], msg_str[MSG_LEN+1];
  int day, i, j, num_remind = 0;

  for(;;){
    if (num_remind == MAX_REMIND){
      printf("-- No space left --\n");
      break;
    }
    printf("Enter day and reminders\n");
    scanf("%2d");
    if(day == 0){
      break;
    }
    sprintf(day_str, "%2d", day);
    scanf("%2d",&day);
    if (day == 0)
      break;
    sprintf(day_str, "%2d", day);
    read_line(msg_str, MSG_LEN);

    for(i=0; i < num_remind; i++){
      if (strcmp(day_str, reminders[i]) < 0)
        break;
    }
    for(j=num_remind; j > i; j--){
      strcpy(reminders[j],reminders[j-1]);
    }
    strcpy(reminders[i], day_str);
    strcat(reminders[i], msg_str);

    num_remind++;
  }

  printf("\nDay Reminders\n");
  for (i=0;i<num_remind;i++){
    printf("%s\n", reminders[j]);
  }

  return 0;
}
