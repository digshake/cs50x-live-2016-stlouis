/**
 * marathon
 * predicts the time at which a marathon runner will cross the finish line, 
 * assuming they continue to run at a constant speed
 */

#include <stdio.h>
#include <cs50.h>

int main(void)
{
  printf("How many miles have you run so far? ");
  float miles_run = GetFloat();
  
  printf("How hours ago did you start? ");
  float hours_so_far = GetFloat();
  
  float mph = miles_run / hours_so_far;
  float hours_remaining = 26.2 - miles_run / mph;
  
  printf("At this rate, you have %f hours left.", hours_remaining);
  
}
