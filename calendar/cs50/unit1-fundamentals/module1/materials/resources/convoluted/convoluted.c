#include <stdio.h>
#include <cs50.h>

int main(void)
{
  
  // Example 1 ---------------------------------------------------------------
  // this works, but is a very bad idea
  printf("What is the year of your birth? ");
  string birthyear_str = GetString();
  // this code is impossible to read because there is too much stuff crammed onto one line:
  printf("In the year %i, you were halfway towards becoming who you are today!\n", atoi(birthyear_str) + (2016 - atoi(birthyear_str)) / 2);
  // -------------------------------------------------------------------------


  // Example 2.  ---------------------------------------------------------------
  // this is ever so slightly better
  printf("What is the year of your birth? ");
  birthyear_str = GetString();
  int answer = atoi(birthyear_str) + (2016 - atoi(birthyear_str)) / 2;
  printf("In the year %i, you were halfway towards becoming who you are today!\n", answer);
  
  // but still needs to be expanded more, because:
  // -- it's very difficult for someone else to understand what that math is doing.
  // -- if we get a bug, it will be very difficult to figure out which part of our formula is broken
  // -- we repeat the same expression twice: (2016 - atoi(birthyear))
  
  // -------------------------------------------------------------------------

  


  // Example 3 ---------------------------------------------------------------
  // The following is much clearer. 
  // We break up the convulted math into multiple lines with descriptive variable names and comments

  // prompt user for their birthday
  printf("What is the year of your birth? ");
  
  // get user's answer
  birthyear_str = GetString();
  
  // convert string to int
  int birthyear = atoi(birthyear_str);
  
  // calculate year at which the user was half of their current age
  int currentyear = 2016;
  int age = currentyear - birthyear;
  int halfage = age / 2;
  int halfwayYear = birthyear + halfage;
  
  printf("In the year %i, you were halfway towards becoming who you are today!\n", halfwayYear);
  
  // -------------------------------------------------------------------------
}
