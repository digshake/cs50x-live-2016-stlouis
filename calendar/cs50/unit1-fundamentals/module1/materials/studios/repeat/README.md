##### Module 1
[Go back to Class 3](../../class3)
# Studio: Repeat

In a file called `repeat.c` write a program that repeats a phrase multiple times. 
You program should prompt the user for both a phrase, and a number of repeats, like so:
```
$ ./repeat
Give me a phrase: I am NOT a talking robot!
How many times should I say it? 5
I am NOT a talking robot!
I am NOT a talking robot!
I am NOT a talking robot!
I am NOT a talking robot!
I am NOT a talking robot!
```

**Twist 1: Validiate**
Your program should only accept values that are at least 1, 
and no greater than 100 for the "how many times" argument. 
If the user fails supply a number within that range, the program should continue prompting until they do:
```
$ ./repeat
Give me a phrase: Oh na na, what's my name.
How many times should I say it? (between 1 and 100): -4
How many times should I say it? (between 1 and 100): 238
How many times should I say it? (between 1 and 100): 2
Oh na na, what's my name.
Oh na na, what's my name.
```

*You can grab a copy of these instructions from the CS50x Wiki <a href="../../../../../../../helpful-resources/modules/module-1.md#class-3-studio-repeat" target="_blank">here</a>. They are formatted as comments so that you can put it at the top of your program in the CS50 IDE. Remember the compiler ignores any comments, so this won't affect your program! You can start writing your code right after the comments.
