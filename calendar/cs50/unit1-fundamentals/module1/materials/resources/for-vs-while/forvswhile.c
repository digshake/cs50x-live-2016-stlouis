#include <stdio.h>

// This example provides a side-by-side comparison of a while-loop and a for-loop.

// for-loops just provide a different syntax for accomplishing the same thing as while-loops.

// In fact, they are both composed of the same 4 basic components:
//    INITIALIZE, CONDITION, BODY, MODIFY

int main(void)
{
  
  // WHILE LOOP -----------------------------------------
  
  // INITIALIZE: initialize some variable(s)
  int i = 0;
  
  // CONDITION: should we enter the loop (again)?
  while(i < 10)
  {
    // BODY: do stuff
    printf("Let's pause and appreciate the number %i\n", i);
    printf("A moment of contemplation please...\n");
    printf("...\n");
    printf("Thank you.\n");
    
    // MODIFY: modify variable(s)
    i = i + 1;
  }
  
  
  // FOR LOOP -------------------------------------------
  
  //  (INITIALIZE ; CONDITION ; MODIFY   )
  for (int i = 0  ; i < 10    ; i = i + 1)
  {
    // BODY
    printf("Let's pause and appreciate the number %i\n", i);
    printf("A moment of contemplation please...\n");
    printf("...\n");
    printf("Thank you.\n");
  }
  
  
  // NOTE: 
  // Instead of
  // i = i + 1
  // you will usually see
  // i++
  // which is just a "sexier" syntax for incrementing i by 1. They are exactly the same.
}
