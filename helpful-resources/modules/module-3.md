# Module 3

## Studios
We are providing instructions formatted as comments that you can copy over to the IDE.

### Class 1 Studio: Word-Grid
```
/**
  * Filename: wordgrid.c
  * Save in Folder: ~/workspace/module3/studios/wordgrid
  * 
  * Recall that you can represent multi-dimensional data with nested arrays. 
  * For example, you can represent a grid of things as an array of (arrays of things).
  * In fact, an array of strings is one such example; since a string is actually just an array of chars, 
  * an array of strings is an array of (arrays of chars).
  * Let's explore this by writing a program that receives three 3-character strings (in other words a grid of 9 chars),
  * and prints the grid to the console, with each word in its own column, like so:
  * 
  * Example:
  * $ ./wordgrid sun yes ear
  * sye
  * uea
  * nsr
  * 
  * Notice how each word is written downwards, rather than across.
  * 
  * First you'll want to perform some validation:
  * Make sure the user provided exactly 3 additional command-line arguments 
  * (in addition to the name of the program itself).
  * Make sure each of those arguments is exactly 3 characters-long. (Use strlen())
  * After validating, you can go about printing the grid.
  * 
  * Note that you can access the elements of a nested array using multiple brackets, i.e. [][]. 
  * For example, if words looks like:
  * 
  * [ "sun", "yes", "ear" ]
  * , then:
  *
  * words[0][0] evaluates to "sun"[0] which evaluates to 's'
  * words[2][1] evaluates to "ear"[1] which evaluates to 'a'
  *
  */
```

### Class 2 Studio: Multiplication and Exponents
This Studio will consist of 4 separate files that will all be saved in one folder called `multiplication_and_exponents` in the `workspace/module3/studios` directory.  You can cd into this directory and then use the command `mkdir multiplication_and_exponents`. 

If you decide to copy parts of these instructions to place into each file, please remember that comments follow this structure:
```c
// Single line comment
/*
 Multi-line comments
 Make sure you end the comment block correctly. (If you do not all of your code will be blue!) 
*/
int main(void)
``` 

This studio is broken into 4 parts, which can be copied to the top of your file so that you can complete each part.   
* PART 1: You will copy the text **(there are no asterisks `*` preceding the code that will be copied to the file)** and save it in a file called `makefile`, do not use an extension.  
* PART 2: You will save in a file called `mult.h` (for the function prototype). 
* PART 3: You will save in a file called `mult.c` (for the function implementation) 
* PART 4: You will save in a file called `expt.c`.  The starter code is provided in PART 4 **(there are no asterisks `*` preceding the code that will be copied to the file)**.  If you need help please ask! :smile:  
```
/**
 * 
 * Save All Files in Folder: ~/workspace/module3/studios/multiplication_and_exponents 
 * 
 * In this studio, you will be writing code that performs multiplication and exponents recursively.
 * Since these two functions are separate from each other, we will use separate files for them.   
 * As a starting point you are provided with some files for the exponentiation function. 
 * expt.c includes starter code for the exponentiation function as well as some tests for 
 * multiplication and exponentiation in a main method.
 * 
 * 
 * PART 1:
 * File: makefile
 * Save in Folder: ~/workspace/module3/studios/multiplication_and_exponents
 * 
 * Copy the two lines below in a file called makefile (Do not add an extension, just name it makefile exactly)
     
      all:
              g++ expt.c mult.c mult.h -o expt
 * 
 * If you try to run it you'll see that there are some issues:
 *      ~/workspace/module3/studios/multiplication_and_exponents $ make
 *      g++ expt.c mult.c mult.h -o expt
 *      g++: error: expt.c: No such file or directory
 *      g++: error: mult.c: No such file or directory
 *      g++: error: mult.h: No such file or directory
 * 
 * The first line attempts to make the program. The next line shows what the makefile is trying to do: 
 * compile a program that consists of three files, mult.c, mult.h, and expt.c. Unfortunately we are missing 
 * those files: expt.c, mult.c and mult.h. (You will be given the starter code for expt.c in part 4)
 * 
 */
```
```
/**
 * PART 2:
 * File: mult.h
 * Save in Folder: ~/workspace/module3/studios/multiplication_and_exponents
 * 
 * Let's create the mult.h. This is the header file for the multiplication function, and should 
 * include the function prototype. A prototype defines what a function uses for its inputs and 
 * outputs, but does not define what the function does. It is used to tell other parts of your 
 * program what kinds of functions are available for use.To keep things simple, our multiplication 
 * function will focus on integers. 
 *
 * Our function should take two integers as input and return an integer as output. This should 
 * be enough information to construct your prototype.
 * Believe it or not, the header file is now complete! It may seem silly to have only a single line of code in the 
 * header file, but for this example it is sufficient. More complex programs will require more complex header 
 * files, but this is fine for now.
 *
 */
```
```
/**
 * PART 3:
 * File: mult.c
 * Save in Folder: ~/workspace/module3/studios/multiplication_and_exponents
 * 
 * Let's move on to mult.c. This file should contain the entire multiplication function. Fortunately you have already 
 * written the function definition - that's what the prototype is! Go ahead and copy it into the mult.c file.
 * All that's left now is to write the function body - how do we want our multiplication function to behave? 
 * It would be easy to use the multiplication operator (*) and call it a day, but we're going to give you some 
 * restrictions to make this a little bit more challenging. Specifically, you are not allowed to use the multiplication operator. 
 * You should perform multiplication using repeated addition instead. Also, you should accomplish this using recursion. 
 * That means loops are not allowed for this studio. Your multiplication function should be able to handle both positive 
 * and negative integers. To make things easier, focus on only positive integers first. Once you are satisfied that 
 * multiplication works for positive values, see if you can tweak your code to make it work with negative values as well. 
 * 
 * As always, it is important to test your code. It may be a good idea to write a simple main method in mult.c that 
 * you can use to test your mult function. 
 *
 * Hint: it may be useful to create a second (perhaps non-recursive) function that checks whether the integers are 
 * positive or negative and proceeds accordingly. Be sure to ask for help if you get stuck!
 * 
 */
```
```
/**
 * 
 * PART 4:
 * File: expt.c
 * Save in Folder: ~/workspace/module3/studios/multiplication_and_exponents
 * 
 * Copy the text below in a file called expt.c
 * 
     #include <stdio.h>

     //TODO: Write a recursive function that computes exponents.
     //This function will rely upon your multiplication function, so you should do that first!
     int expt(int x, int y) {
         //Your code here
     }

    int main() {
        //Test multiplication:
        printf("2 * 2 = %i", mult(2, 2));
        printf("3 * 9 = %i", mult(3, 9));
        printf("-3 * 9 = %i", mult(-3, 9));
        printf("3 * -9 = %i", mult(3, -9));
        printf("-3 * -9 = %i", mult(-3, -9));
        
        //Test exponentiation:
        printf("2^8 = %i", expt(2, 8)); //should be 256
        printf("2^3 = %i", expt(2, 3)); //should be 8
        printf("(-2)^3 = %i", expt(-2, 3)); //should be -8
    }
 * 
 * Once you are satisfied with your multiplication function, it is time to 
 * turn our attention to exponentiation. Exponentiation can be thought of as repeated multiplication, much like 
 * multiplication can be thought of as repeated addition. Like with the mult function, however, you are faced with 
 * some restrictions. The multiplication operator is still not allowed. Instead you should use the recursive mult 
 * function that you wrote. In order to do this, we need to tell the exponentiation function what the multiplication 
 * function looks like. We can do this by referring to the header file that we created.
 * 
 * Header files are referenced with the #include statement. So to include our header file in expt.c, we would type 
 *   #include "mult.c" 
 * 
 * Go ahead and add this to the expt.c file now.
 * 
 * You are now ready to use your multiplication function to compute exponents. Your solution should be recursive, 
 * so loops are still not allowed. Make sure to use your mult function to perform multiplication! Anywhere that 
 * you would normally use * should be replaced with a function call to mult.
 * You should now be able to use make to run the provided test cases and check your work. Notice that for expt, 
 * the base (the first number) can be negative, but the exponent (the second number) cannot.
 * 
 */
```

## Follow Alongs
We are providing pseudocode for the follow along tasks so you can start writing the program before watching the video.  You will find instructions to complete the task in the video.
The pseudocode will be formatted as comments so you can copy it over to the CS50 IDE. And if you are ever confused :confused:  about what to do, you can always refer to the video for help.

### Class 2 Task: Sigma-0

```
 /**
  * Filename: sigma-0.c
  * Save in Folder: ~/workspace/module3/follow-alongs/sigma
  * 
  * Include the stdio library
  * Include the cs50 library
  * Add main method
  *    Declare a variable n of type int
  *    Do 
  *       Print "Positive Integer please: " 
  *       Assign the user input to the variable n. (Hint: Use the CS50 Library function GetInt())
  *    While n < 1
  *    Declare a variable called answer of type int and assign the expression "sigma(n)" to it
  *    Print the variable answer and a new line
  * 
  * You will find instructions to complete this task in the video. 
  * You will be modifying this code as you go along.
  *
  */
```

### Class 2 Task: Sigma-1
This is a continuation of Sigma-0, please follow the instructions below. You will use terminal commands to copy the `sigma-0.c` file. Make sure you are in the `module3/follow-alongs/sigma` folder in the terminal window. (Hint: You can use the terminal command `pwd` to see the current directory you are working in.)
```
 /**
  * This is a continuation of the last program and you should copy sigma-0.c so you do not have to 
  * write the whole program. Use the command below, open up sigma-1.c and watch the video
  * to complete the task.  
  * Make sure you are in this Folder: ~/workspace/module3/follow-alongs/sigma
  *
  *      cp sigma-0.c sigma-1.c
  *
  * Afterwards, step through your program in the IDE Debugger, just like they did in class.
  */
```
