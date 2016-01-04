#Escape Sequences
| Escape Character Notation| Description|
| :-------- | :-------- |
| **`\n`**  | New Line  |
| **`\r`**  | Return  |
| **`\t`**  | Tab  |
| **`\'`**  | Single Quote  |
| **`\"`**  | Double Quote  |
| **`\\`**  | Back Slash  |
| **`\0`**  | ASCII Value Zero  |

#Format Codes
| Format Code Notation | Description|
| :------- | :-------- |
| **`%s`**  | String  |
| **`%c`**  | Char  |
| **`%i`** or **`%d`**  | Integer  |
| **`%f`**  | Float  |
| **`%g`**  | Double |
| **`%lld`**  | Long Long Double  |

#Precedence
| Order of Precedence | Description |
| :-----: | :----- |
| **`( )`**     | Parenthesis |
| **`*`** **`/`** | Multiplication Division <br> (Solve the equation from left to right because there is equal priority for both.) |
| **`+`** **`-`** | Addition Subtraction <br> (Solve the equation from left to right because there is equal priority for both.) |

| Notation| Name | Explanation | 
| :------- | :--------: | :-------- |
| **`++count`** | Prefix Increment | The value is incremented first and then it is used in the expression. |
| **`--count`** | Prefix Decrement | The value is decremented first and then it is used in the expression. |
| **`count++`** | Postfix (Suffix) Increment | The current value of `count` is used in the expression and then it is incremented. <br> The value will only be different the next time the value is used. |
| **`count--`** | Postfix Decrement | The current value is used in the expression and then it is decremented. | 

#Data Types and Variables 

| Data Type | Explanation |
| :--------: | :-------- |
| **`int`** | Used for variables to store Integers. <br> <b>Range: 4 bytes of memory or 32 bits ( -2<sup>31</sup> to 2<sup>31-1 </sup>)</b> |
| **`unsigned` `int`** | **`unsigned`** is a qualifier and can be used with different data types. <br> If you use it there will be not be any negative values in the range. <br> The amount of positive values will be doubled. <br> <b>Range: ( 0<sup>31</sup> to 2<sup>32-1 </sup>)</b> |
| **`char`** | Used for variables to store single characters. <br> <b>Range: 1 byte of memory or 8 bits ( -128 to 127 )</b> |
| **`float`** | Used for variables to store floating point values (Real Numbers). <br> <b>Range: 4 bytes of memory or 32 bits </b> |
| **`double`** | Used for variables to store floating point values (Real Numbers). <br> <b>Range: 8 bytes of memory or 64 bits </b> |
| **`void`** | It is a **TYPE** and **NOT A DATA TYPE**. Used for function return types (the function doesn't return a value) or as a parameter of a function (the function takes no parameters).  |
| **`bool`** | **You must include the cs50 library to use this data type.** <br>`#include <cs50.h>` <br>Used for variables to store boolean values (true or false).  |
| **`string`** | **You must include the cs50 library to use this data type.** <br>`#include <cs50.h>` <br>Used for variables to store a series of characters. (words, sentences, paragraphs, etc.) |

| Variable Statement | Description |
| :------- | :-------- |
| **`int x;`** | Declares the variable `x` with the datatype Integer. (but `x` does not yet have a value) |
| **`x = 4;`** | Assigns the value `4` to the variable `x`. (make sure `x` has already been declared before you do this!) |
| **`int x = 4;`** | Performs both steps in one line: initializes the variable `x` with the datatype Integer and assigns the value `4` to the variable `x`. |

#Operators
| Description | Compound Operator | Compound Assignment | Equivalent To |
| :-------: | :-------: | :--------: | :--------: |
| Addition | **`+=`** | `x += 4` | `x = x + 4` |
| Subtraction | **`-=`** | `x -= 4` | `x = x - 4` |
| Multiplication | **`*=`** | `x *= 4` | `x = x * 4` |
| Division | **`/=`** | `x /= 4` | `x = x / 4` |
| Modulo (Remainder) | **`%=`** | `x %= 4` | `x = x % 4` |

#####Boolean Expressions 
|Relational Operators | Description |
| :------- | :--------: |
| `==` | Equality |
| `!=` | Inequality |
| `<` | Less Than |
| `>` | Greater Than |
| `<=` | Greater Than or Equal To |
| `>=` | Less Than or Equal To |

|Logical Operators | Description |
| :------- | :--------: |
| `&&` | AND |
| `||` | OR |
| `!` | NOT |


| x | y  | ( x AND y) | ( x OR y) |
| :-------: | :-------: | :--------: | :--------: |
| True | True | True | True |
| True | False | False | True |
| False | True | False | True |
| False | False | False | False |

| x | x! |
| :------- | :--------: |
| True | False |
| False | True |




#Loops
| Name | Structure | Example | Explanation | 
| :------- | :-------- | :-------- | :--------: |
| while | `while( condition )` <br> `{ ` <br> &nbsp;&nbsp; `statement(s); ` <br> `}` | `while( i < 4 )` <br> `{ ` <br> &nbsp;&nbsp; `printf("%i", i); ` <br> `}` | If `i = 1` the loop will print `1 2 3` and then terminate. |
| do while | `do ` <br> `{ ` <br> &nbsp;&nbsp; `statement(s); ` <br> `}` <br> `while( condition )`  | `do ` <br> `{ ` <br> &nbsp;&nbsp; `printf("Positive Number: ");` <br> &nbsp;&nbsp; `n = GetInt()` <br> `}` <br> `while( i < 1 )`  | The user will be continuously <br> prompted until they enter a positive number. <br> The loop will terminate when the user enters a number greater than 0 |
| for | `for ( init; condition; iteration)` <br> `{` <br> &nbsp;&nbsp; `statement(s);` <br> `}`  | `for ( int i = 1; i < 4; i++)` <br> `{` <br> &nbsp;&nbsp; `printf("%i", i);` <br> `}` | `i` is initialized to 1 and will continue to <br> execute the statements until `i = 3`. <br> `i++` increments the variable `i` for each iteration of the loop. <br> The loop will print `1 2 3 ` and terminate. |

#Functions
Some functions do not take any inputs and in that case you would declare a `void` argument list. Remember this?
```c
int main(void)
```
Some functions do not have any outputs and in that case you would declare the function as having a `void` return-type.

Example:
```c
#include <stdio.h>

void print_age(int age);

int main(void)
{
    print_age(5);
}

void print_age(int age)
{
  printf("You are %i years old.\n", age);  
}
```
Output:
```
$ You are 5 years old.
```
 
| Function Type| Description | Notation | Example | 
| :---- | :--- | :------------------------- | :------------------------- |
| Declaration | The declaration should always <br>be on top of your code <br>right above the main method. <br>This lets the compiler know <br>that there will be a <br>user-defined function in the code. | **`return-type`** **`name(argument list);`** | **`int`** **`add_two_ints(int a, int b);`** |
| Definition | Almost identical to a declaration, <br>but you will replace the semicolon <br>with **` { }`** and code in between.<br>The definition must be outside <br> of the main method and <br> after the declaration. | **`return-type`** **`name(argument list)`** <br> **`{`** <br> &nbsp;&nbsp;&nbsp; **`// Some code`** <br> **`}`** | **`int`** **`add_two_ints(int a, int b)`** <br> **`{`** <br> &nbsp;&nbsp;&nbsp;**`int sum;`** <br> &nbsp;&nbsp;&nbsp;**`sum = a + b;`** <br> &nbsp;&nbsp;&nbsp;**`return sum;`** <br> **`}`**. | 
| Calling | You can call the function <br>by inserting the appropriate <br>inputs. In the example <br> x and y are two ints that <br> have already been initialized.<br>The value returned from the <br>function is stored in <br> the variable z.  | **`name(input list);`** | **`int z =`** **`add_two_ints(x, y);`** | 
