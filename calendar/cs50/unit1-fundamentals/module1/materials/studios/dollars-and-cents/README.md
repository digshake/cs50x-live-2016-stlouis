##### Module 1

[Go back to Class 3](../../class3)

# Studio: Dollars and Cents

Another useful function from `<math.h>` is `round`. This function takes a floating point number, and returns the nearest integer:

```c
int x = round(4.7);
// the value of x is 5

int y = round(4.4);
// the value of y is 4 
```

Remember when your donut shop was charging customers crazy fractional dollar amounts, like `$7.2494328374`? Now we're able to do a better job in that sort of situation.

In a file called `daollarsandcents.c` write a program that prompts the user for a floating point dollar amount, and then tells them the *actual* dollar amount:

```
$ ./dollarsandcents
Gimme a dollar amount: 7.2494328374
Oh, I think you mean $7.250000000
```

(It still looks stupid because of the trailing `0`s but thats ok. We'll learn how to fix that some other time.)

Of course, in this case we do not want to round all the way down to the nearest integer. Doing so would have given us `$7.00`. Instead we want to round to the nearest 2 decimal places. Unfortunately, `round` isn't fancy enough to do that. But with a little bit of clever arithmetic, you can get around this no problem!

As a bonus, the work you do here will be very helpful for last section of Pset 1.

*You can grab a copy of these instructions from the CS50x Wiki <a href="../../../../../../../helpful-resources/modules/module-1.md#class-3-studio-dollars-and-cents" target="_blank">here</a>. They are formatted as comments so that you can put it at the top of your program in the CS50 IDE. Remember the compiler ignores any comments, so this won't affect your program! You can start writing your code right after the comments.
