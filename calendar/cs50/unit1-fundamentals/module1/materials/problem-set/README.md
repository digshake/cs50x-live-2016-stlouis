#####[Module 1](../..)

# Problem Set 1

### Synopsis
In this problem set, you'll solve some problems in C using the concepts you'll learn throughout Module 1. There are three components to this problem set: **Water**, **Mario**, and **Greedy**.

The Pset Spec which describes the assignment can be found 
<a href="http://cdn.cs50.net/2015/fall/psets/1/pset1/pset1.html" target="_blank">Here</a>.

To review all information about the Problem Set, scroll down to the section titled <a href="http://cdn.cs50.net/2015/fall/psets/1/pset1/pset1.html#getting_started" target="_blank">Getting Started</a>. You will have seen a lot of this already, but it may be helpful to review.

### Assignments

The assignments of Problem Set 1 that you must do are:
* <a href="http://cdn.cs50.net/2015/fall/psets/1/pset1/pset1.html#smart_water" target="_blank">Problem Set 1: Water</a>
* <a href="http://cdn.cs50.net/2015/fall/psets/1/pset1/pset1.html#itsa_mario" target="_blank">Problem Set 1: Mario</a>
* <a href="http://cdn.cs50.net/2015/fall/psets/1/pset1/pset1.html#time_for_change" target="_blank">Problem Set 1: Greedy</a>

### Guidance

#### In General: How to approach a Problem Set

- Begin a pset by having ready at-hand, and focusing on, these 3 things:
  - the problem set specification (“pset spec” or “pspec”)
  - the lecture notes (you can find these on the class prep pages for the current Module)
  - the example source code from the current Module (you can find this at the bottom of the Module home page under "Helpful Links")

- The pset spec will link out to various videos. You may have already seen some of these during Class Prep. Regardless, these videos are always very relevant to the problem at hand and are probably worth a (re)watch.

- The psets usually have multiple assignments within them. Work on one at a time. (Ie, only read/watch items applicable to the one assignment you're currently working. Don't read/watch ahead.)

- Define a strategy (as in pseudocode, drawings, whatever) BEFORE starting to code anything.

- When ready to code, break the problem into the smallest pieces you can think of... then code a piece, test it, fix anything wrong; code the next piece, test it, fix it. Use printf() and the IDE's debugging tools like crazy!

- If you begin working on one piece while another is not quite finished - remark out the unfinished code. This prevents errors from the unfinished code from looking like problems with the new code.

#### Specific Guidance on Pset 1

##### Water:
<em>Use the source, Luke! Use the source!</em><br>
Check out the source code example called “adder.c” under 
<a href="http://cdn.cs50.net/2015/fall/lectures/1/w/src1w/" target="_blank">Week 1's Wednesday lecture source code examples</a>
. With a few tweaks, might this be the droids - er, code - you're looking for???

Remember: CS50's source code examples can take you a long way toward solving the pset problems!

##### Mario:
* Draw up a few examples for this assignment. Can you find a relationship between the height, line number (starting with 0!), number of spaces on each line, and number of hashes on each line?
* This is a good problem to begin practicing the art of breaking your code work into the smallest pieces possible! Don't try to write the entire program all at once before you try running it. Do just a little bit, and immediately run to make sure that part works. Then do a little bit more, and make sure it works. Rinse and repeat. For example:
  - Get your input working first;
  - THEN make sure the input part continues looping until a valid number is entered;
  - NEXT, check out that you can loop through lines (`printf()` is your friend! use it to verify that things are working properly);
  - THEN, get your spaces working correctly (use a substitute character while you're testing! E.g. something like `"@"` instead of `" "`);
  - FINALLY, get your hashes working correctly
* Code a little and test; repeat, repeat, repeat!

Note: this is also a good problem for learning to create your own functions. Maybe, for example, you could turn the space- and hash-printing parts, say, into functions? Again, check out the example source code CS50 provides for possibilities!

##### Greedy:
* Break this one up into an input piece, a quarters piece, a dimes piece, a nickels piece, and... do you need pennies? Make sure each individual bit of code works before moving on to the next!
* The pset spec gives a code example for printing `0.01` to 50 decimal places:

  ```
  float f = 0.01;
  printf("%.50f\n", f);
  ```
Do try this out for yourself and make sure you understand the inherent imprecision of the computer's representation of a `float` - this is very important to this problem! You WILL find some surprising results. Make sure your final program can handle those results - otherwise, don't be surprised when check50  gives you the wrong kind of emojis!

### How To Submit 

FILE NAMES: water.c, mario.c, greedy.c

INSTRUCTIONS: Submit your assignments on Vocareum. After signing in, you will see each component as an assignment on the left. You must submit each component separately. Follow the instructions there, and make sure you name your files correctly!

If you forget how to use Vocareum, please refer to the <a href="https://docs.google.com/document/d/1ac1Xpvnjh9-4C3Lb6J4CnodOwp54EBJAg4ooduG0gsw/edit?usp=sharing" target="_blank">Student Guide</a> section about Vocareum.

You may also find it useful to review the <a href="https://github.com/Launch-Code/cs50x-live-2016/blob/master/calendar/module0/materials/problem-set/README.md" target="_blank">Problem Set Page Overview from Problem Set 0</a>.

***
Congratulations on completing [Module 1](../..)! Return to the [Course Calendar](../../../../..) to see what's next.
