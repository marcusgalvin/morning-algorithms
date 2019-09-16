//return the amount of years and months that have passed
//based on user input

#include <stdio.h>
int main()
{
  int ndays, nyears, year, month, day;
  float totalMonth, totalYear, total;

  printf("Input no. of days: ");
  scanf("%d", &ndays);

  printf("Input number of years: ");
  scanf("%d", &nyears);

  year = (int)ndays / 365;

  //total years will be the year equation + the inputed year
  totalYear = year + nyears;

  ndays = ndays - (365 * year);

  month = (int)ndays / 30;

  totalMonth = month / year;

  day = (int)ndays - (month * 30);

  // printf(" %d nyears", nyears);

  printf(" %f Years \n %f Months", totalYear, totalMonth);

  // printf(" %d Answer \n", totalYear )
  return 0;
}