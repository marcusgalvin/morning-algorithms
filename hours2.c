#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
  int startingTime;

  int hoursPassed;

  // int newTime = 0;

  //get user input
  printf("pick a time) ");
  scanf("%d", &startingTime);

  printf("pick an amt of hours: ");
  scanf("%d", &hoursPassed);

  int totalDays = hoursPassed / 24;
  printf("total-day: %d\n", totalDays);

  int current_time = hoursPassed % startingTime;

  printf("current time: %d\n", current_time);
}