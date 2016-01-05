##### [Module 2](../..)

# Problem Set 2 

### Synopsis
Zhofrph wr Sureohp Vhw 2! Whoops, forgot to decrypt myself there... Welcome to Problem Set 2!

In this problem set, you'll use what you've learned so far to dabble in some cryptography. To do this, you'll be introduced to some ciphers, which are codes used to encrypt messages. 


### Guidance

There are a couple extra shorts that you may find useful to watch:
* <a href="https://www.youtube.com/watch?v=36xNpbosfTY&index=11&list=PLhQjrBD2T380dhmG9KMjsOQogweyjEeVQ" target="_blank">Short: Caesar Cipher</a>
* <a href="https://www.youtube.com/watch?v=9zASwVoshiM&index=54&list=PLhQjrBD2T380dhmG9KMjsOQogweyjEeVQ" target="_blank">Short: Vigenere Cipher</a>

Start using CS50’s reference tools, if you haven't already!

These show what functions are available to you and the libraries to #include to use them (eg, ctype.h is required to use the toupper() function):
* <a href="https://reference.cs50.net" target="_blank">reference.cs50.net</a>
* <a href="https://cs50.harvard.edu/resources/cppreference.com/" target="_blank">cs50.harvard.edu/resources/cppreference.com/</a>

CS50's Study resource provides more concise examples and explanations of how to do certain tasks. It also has practice problems for you to solve (eg, ASCII demonstrates the relationships between the char 'A' and the int 65, and it gives you a sample conversion problem to work on):

* <a href="https://study.cs50.net" target="_blank">study.cs50.net</a>

##### Vocabulary:
command line: the line in Terminal on which you type commands, eg:<br>
`jharvard:~/workspace $ `

The `jharvard:~/workspace $ ` part, specifically, is called the "prompt".

The following command line shows "command line arguments" for running Caesar: `./caesar` and `13`:
`jharvard:~/workspace $ ./caesar 13`

##### `argc` and `argv[]`:
In the above example, `argc == 2` because there are two command line arguments.<br>
And, the array `argv[]` contains two string (`char *`) elements - the name of the program and the number - in the order they appear on the command line:
````
argv[0] == "./caesar"
argv[1] == "13"
````
A string (or `char *`) is an array itself, containing `char` values, so:
````
argv[0][0] == '.'
argv[0][1] == '/'
argv[0][2] == 'c'
…
argv[1][0] == '1'
argv[1][1] == '3'
````

##### Caesar:
Key here (pun intended ;-) is the need to understand the relationship between a char, its integer value, and a position in the alphabet.

For example, the char 'A' has an ASCII (integer) value of 65, but its position in the alphabet would be 0 (in computer terms). 'B' is 65 ASCII and 1 alphabet, and so on.

Initially, it seems easy to convert the number from the command line to its pair, even just using "ASCII math": enter 1 and 'A', convert using 'A' + 1 = 'B'. Easy, right?

But, what happens when you get further into the alphabet - or get a really large number as your key? 'Z' + 1 does NOT equal 'A' in ASCII. Rather you’ve gone past the end. In order to make that rotation, you need a conversion AND "trust in the mod!"

0 % 26 = 0, 1 % 26 = 1, … 26 % 26 = 0, 27 % 26 = 1, …

That crazy formula that Zamyla shows DOES work - you just have to tweak it to put it into language that works in your program. Again: "trust in the mod!"

##### Vigenere:
Vigenere is Caesar with rotation. That makes this a perfect opportunity to practice your function-coding skills!
* Vigenere uses letters from the command line as key values. Simply convert those letters into their equivalent integers.
* Handle the rotation: you need to end up with the correctly matched single "key" `int` value for a single "plaintext" `char`.
* Then, turn the "meat" of your Caesar code into a function:
  * Set up the function's parameters to allow for a "key" and a "plaintext" value.
  * Make sure to match the parameter names with your Caesar variable names for the "key" and "plaintext" items.
  * Tweak anything that needs tweaking in consideration of the new way you're providing the values to the Caesar code.


### Get Started
To review all information about the Problem Set, go here: <a href="http://cdn.cs50.net/2015/fall/psets/2/pset2/pset2.html#getting_ready" target="_blank">Getting Ready</a>. You will have seen a lot of this already, but it may be helpful to review.

Here are the components due for Problem Set 2:
* <a href="http://cdn.cs50.net/2015/fall/psets/2/pset2/pset2.html#initializing" target="_blank">Problem Set 2: Initials</a>
* <a href="http://cdn.cs50.net/2015/fall/psets/2/pset2/pset2.html#hail_caesar" target="_blank">Problem Set 2: Caesar</a>
* <a href="http://cdn.cs50.net/2015/fall/psets/2/pset2/pset2.html#parlez_vous_français" target="_blank">Problem Set 2: Vigenere</a>

### How to submit 
FILE NAMES: initials.c, caesar.c, vigenere.c

INSTRUCTIONS: Submit your assignments on Vocareum. After signing in, you will see each component as an assignment on the left. You must submit each component separately. Follow the instructions there, and make sure you name your files correctly!

If you are forget how to use Vocaruem, please refer to the <a href="https://docs.google.com/document/d/19HIMxU_RtVV0PcGpuL71KmAoQh-KTgyPGpWWLcmwo58/edit?usp=sharing" target="_blank">Student Guide</a> section about Vocaruem.

You may also find it useful to review the <a  href="https://github.com/Launch-Code/cs50x-live-2016/blob/master/calendar/module0/materials/problem-set/README.md" target="_blank">Problem Set Page Overview from Problem Set 0</a>.