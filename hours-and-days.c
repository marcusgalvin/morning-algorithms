//declare a starting hour
//declare an amt of hours passed
//print out how many days and hours have passed, once use delcare the above ints

#include <stdio.h>
#include <math.h>

int main()
{
  int morningHours;
  for (morningHours = 1; morningHours <= 12; morningHours++)
  {
    printf("%d\n", morningHours);
  }

  int nightHours;
  for (nightHours = 1; nightHours <= 12; nightHours++)
  {
    printf("%d\n ", nightHours);
  }

  //turn the two iterations into arrays and concatonate them

  

  return 0;
}

// #include <stdio.h>

// int main()
// {
//   int array[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
//   int loop;

//   for (loop = 0; loop < 12; loop++)
//     printf("%d\n ", array[loop]);

//   return 0;
// }