##### Module 1

[Back to Class 1](../../class1)

# Studio: Donuts

You run a hip donut shop, the Loop Hole, which, in its short lifetime, has already rocked the donut market with 
numerous disruptions, including:
* a minimalist menu consisting of just one type of donut per day: Manager's Special... always Manager's Special.
* giving consumers the option to order fractional amounts of donuts, e.g. 1.7 donuts, please.
* a progressive pay-what-you-want pricing system, in which the customer pays what s/he thinks is a fair price. (Of
course, you do provide a "suggested price".)

Now it's time to implement your latest innovation, an app via which users can pre-order donuts remotely from the
convenience of... the command-line terminal on their computer.

In a file called `donuts.c`, write a program which introduces the flavor of the day, and then takes
the user's order. Taking their order involves asking two questions: "How many donuts?" and "How much do you want to pay?"

Finally, inform the user of the total cost of their order. Don't forget to include sales-tax, which is, let's say, 5%.

Here's an example of how the finished program should behave:

```
$ ./donuts
Welcome to the Loop Hole!
Today's Manager's Special is:
Crunch Jelly: A traditional jelly donut in which the jelly filling is made entirely of Capn' Crunch Berries (Just Berries)
How many would you like? 3.33333
How much would you like to pay per donut (suggested price is $4.35 each)? 2.5
Ok, let me prepare that for you....
After tax, your total is: $8.74999125
Thank you for snacking! Loop back around here soon!
```

Notice that the total price `$8.74999125` went way beyond 2 decimal places. Obviously it would be better to
round that to $8.75. Later in this module, you'll be introduced to a function called `round` which will allow 
you to do just that. But for now, don't worry about it.

Also, don't be concerned if your program gives an answer with a *slightly* different number of decimal places than the example program above. This is just a precision issue.

*You can grab a copy of these instructions from the CS50x Wiki <a href="../../../../../../../helpful-resources/modules/module-1.md#class-1-studio-donuts" target="_blank">here</a>.  They are formatted as comments so that you can put it at the top of your program in the CS50 IDE.  Remember the compiler ignores any comments, so this won't affect your program! You can start writing your code right after the comments. 

### How to Submit

For detailed instructions on how to submit this Studio, see the Wiki page on Submitting Assignments.
