##### Module 1
[Go back to Class 2](../../class2)
# Studio: Guess

#### Part 1

Write a "guessing game" program, in which the user attempts to guess correctly a number between 1 and 10.
You can simply decide on a "correct answer" and hard-code that number into your code. 
Supposing for example that you decide to make 4 the correct answer, you will probably have a line like this:
```c
int answer = 4;
```
somewhere in your code, and your program should behave like this:

```
$ ./guess
I'm thinking of a number between 1 and 10. Can you guess what it is?
Guess #1: 5
Wrong!
Guess #2: 9
Wrong!
Guess #3: 4
Correct!
```

When the user guesses incorrectly, your program should reprompt them to guess again. Notice that you'll need to keep track of how many guesses have happened so far, so that you can properly print `"Guess #<n>:`. 

#### Part 2

Currently we give the user an unlimited number of chances to get the right answer. Let's make things a little more difficult. Write another program called `guess5`, which gives the user only 5 chances to get the answer:
```
$ ./guess5
I'm thinking of a number between 1 and 10. Can you guess what it is?
Guess #1: 8
Wrong!
Guess #2: 5
Wrong!
Guess #3: 1
Wrong!
Guess #4: 7
Wrong!
Guess #5: 6
Wrong!
Sorry, you ran out of guesses.
```

This should only involve some minor tweaking, so you can make a copy of your `guess.c` file using the `cp` command:
```
$ cp guess.c guess5.c
```
and then open up `guess5.c` and make changes there.

#### Part 3

Most likely, you've been using a `while` loop so far. Let's now refactor, and use a `for` loop instead, just for kicks. Write another program in a file called `guessfive.c`, which behaves exactly like `guess5`, but is implemented with a `for` loop. (But if you did use a `for` loop in `guess5`, then use a `while` loop here.)

*You can grab a copy of these instructions from the CS50x Wiki <a href="../../../../../../../helpful-resources/modules/module-1.md#class-2-studio-guess" target="_blank">here</a>.  They are formatted as comments so that you can put it at the top of your program in the CS50 IDE.  Remember the compiler ignores any comments, so this won't affect your program! You can start writing your code right after the comments. 
