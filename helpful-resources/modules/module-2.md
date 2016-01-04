# Module 2

## Studios
We are providing instructions formatted as comments that you can copy over to the IDE.

### Class 1 Studio: Letter Locator
```
/**
  * Filename: letterlocator.c
  * Save in Folder: ~/workspace/module2/studios/letterlocator
  * 
  * In a file called letterlocator.c write a program that prompts the user for an alphabetic character, 
  * and then prints the position of that letter in the alphabet, starting with A at position 0. 
  * Your program should work for both capital and lowercase letters, but should reject any input that is not alphabetical, like '3' or '$'.
  *
  * Example:
  * $ ./letterlocator
  * Give me a letter: A
  * A is at position 0
  * $ ./letterlocator
  * Give me a letter: e
  * e is at position 5
  * $ ./letterlocator
  * Give me a letter: @
  * Give me a letter: Y
  * Y is at position 25
  *
  * (Hint: cs50 Library functions GetChar() and isAlpha() will be helpful)
  *
  */
```

### Class 2 Studio: Crazy Echoes
This studio will be made up of 2 separate programs, (`backwardsecho.c` and `mixedupecho.c`) The instructions for both programs are included here. You will start with the first program `backwardsecho.c` and follow the directions for the other program.

```
 /**
  * Filename: backwardsecho.c
  * Save in Folder: ~/workspace/module2/studios/backwardsecho
  * 
  * PART 1: Backwards Echo
  * In a file called backwardsecho.c write a program that accepts some command-line arguments, 
  * and then simply "echoes" those arguments back to the console, similar to the Module 2 Prep for Class 2 walkthrough argv-1
  * The twist: each string should print out backwards.
  *
  * Example:
  * $ ./backwardsecho hello 64
  * ohcesdrawkcab/. olleh 46
  *
  * Notice that the order of the arguments should remain unchanged, i.e.
  *      "./backwards-echo" prints first, followed by "hello", followed by "46". 
  * But when it comes time to print the string, you should print its characters in reverse order.
  *
  */
 ```
 ```
 /**
  * PART 2: Mixed-up Echo
  * Filename: mixedupecho.c
  * Save in Folder: ~/workspace/module2/studios/mixedupecho
  *
  * Now for another variation on the "echo" theme. In a file called mixedupecho.c
  * write another program that accepts some command-line arguments and then echoes them back to the console.
  *
  * The twist this time: the echoes should "intermix" with each other, like so:
  * $ ./mixedupecho HELLO!
  * .H/EmLiLxOe!dHuEpLeLcOh!oH
  *
  * For this program, you can ignore any command-line arguments beyond the first two (including the program name itself):
  * $ ./mixedupecho HELLO! morestuff lalala
  * .H/EmLiLxOe!dHuEpLeLcOh!oH
  *
  * Notice how "HELLO!" is shorter than "./mixedupecho", and so the program "wraps around" 
  * and starts over again at 'H'whenever it reaches the end of the string.
  *
  * How can you implement that? The modulo % operator is your friend here.
  * Spcecifically, note that "HELLO!"[5] yields '!', and "HELLO!"[6] is beyond the bounds of the array.
  * But "HELLO!"[6 % 6] evaluates to "HELLO!"[0], which yields 'H'.
  * And "HELLO!"[7 % 6] evaluates to "HELLO!"[1] ...
  *
  * To keep things simple, you can assume that the second argument will always be shorter than the first. 
  * In other words, the user will never provide a string longer than "./mixedupecho", which is 13 characters long. 
  *
  * **Bonus (Optional)**
  *
  * Just kidding about that last part.
  *
  * Now you may NOT assume the second argument will be the shorter one. 
  *
  * Example: The user might type this:
  * $ ./mixedupecho GREENEGGSANDSPAM
  *
  * in which case the output should be:
  * .G/RmEiExNeEdGuGpSeAcNhDoS.P/AeM
  * 
  */
```

## Follow Alongs
We are providing pseudocode for the follow along tasks so you can start writing the program before watching the video.  You will find instructions to complete the task in the video.
The pseudocode will be formatted as comments so you can copy it over to the CS50 IDE. And if you are ever confused :confused:  about what to do, you can always refer to the video for help.

### Class 1 Task: Floats-0
Copy the pseudocode to the CS50 IDE and use the information below to name the file and place it in the correct folder.
```
 /**
  * Filename: floats-0.c
  * Save in Folder: ~/workspace/module2/followalongs/floats
  * 
  * Include the stdio library
  * Add main method
  *    Assign the expression "1 / 10" to a variable called f of type float
  *    Print the variable f (Formatted to 1 decimal place) and a new line.
  * 
  * You will find instructions to complete this task in the video. 
  * You will be modifying this code as you go along.
  *
  */
```

### Class 1 Task: Floats-1
This is a continuation of Floats-0, please follow the instructions below.  You will use terminal commands to copy the `floats-0.c` file.  Make sure you are in the `module2/followalongs/floats` folder in the terminal window. (Hint: You can use the terminal command `pwd` to see the current directory you are working in.) You can also review <a href="../Supplementary-Resources/terminal-commands.md" target="_blank">Terminal Commands</a>.
```
 /**
  * This is a continuation of the last program and you should copy floats-0.c so you do not have to 
  * write the whole program. Use the command below, open up floats-1.c and watch the video
  * to complete the task.  
  * Make sure you are in this Folder: ~/workspace/module2/followalongs/floats
  *
  *      cp floats-0.c floats-1.c
  *
  */
```

### Class 1 Task: Floats-2
This is a continuation of Floats-1, please follow the instructions below.  You will use terminal commands to copy the `floats-1.c` file.  Make sure you are in the `module2/followalongs/floats` folder in the terminal window. (Hint: You can use the terminal command `pwd` to see the current directory you are working in.) You can also review <a href="../Supplementary-Resources/terminal-commands.md" target="_blank">Terminal Commands</a>.
```
 /**
  * This is a continuation of the last program and you should copy floats-1.c file so you do not have to 
  * write the whole program. Use the command below, open up floats-2.c and watch the video
  * to complete the task.  
  * Make sure you are in this Folder: ~/workspace/module2/followalongs/floats
  *
  *      cp floats-1.c floats-2.c
  *
  */
```

### Class 1 Task: ASCII-0
<a href="http://cdn.cs50.net/2015/fall/lectures/1/f/notes1f/notes1f.html#loops" target="_blank">For loops</a> refresher. Copy the pseudocode to the CS50 IDE and use the information below to name the file and place it in the correct folder.
```
 /**
  * Filename: ascii-0.c
  * Save in Folder: ~/workspace/module2/followalongs/ascii
  * 
  * Include the stdio library
  * Add main method
  *   Add a for loop using a variable i that is initialized to 65 of type int and a condition of "i < 65 + 26"
  *   (Hint: for ( initialization; condition; updates) { statement(s); } 
  * 
  * You will find instructions to complete this task in the video. 
  * You will be modifying this code as you go along.
  *
  */
```

### Class 1 Task: ASCII-1
This is a continuation of ASCII-0, please follow the instructions below.  You will use terminal commands to copy the `ascii-0.c` file.  Make sure you are in the `module2/followalongs/ascii` folder in the terminal window. (Hint: You can use the terminal command `pwd` to see the current directory you are working in.) You can also review <a href="../Supplementary-Resources/terminal-commands.md" target="_blank">Terminal Commands</a>.
```
 /**
  * This is a continuation of the last program and you should copy ascii-0.c file so you do not have to 
  * write the whole program. Use the command below, open up ascii-1.c and watch the video
  * to complete the task.  
  * Make sure you are in this Folder: ~/workspace/module2/followalongs/ascii
  *
  *      cp ascii-0.c ascii-1.c
  *
  */
```

### Class 1 Task: Functions-0

```
 /**
  * Filename: functions-0.c
  * Save in Folder: ~/workspace/module2/followalongs/functions
  * 
  * Include the stdio library
  * Include the cs50 library
  * Add main method
  *   Print "Your name: "
  *   Declare a variable s of type string and assign the user input to it 
  *   (Hint: use cs50 library function GetString())
  * 
  * You will find instructions to complete this task in the video. 
  * You will be modifying this code as you go along.
  *
  */
```

### Class 1 Task: Functions-1
This is a continuation of Functions-0, please follow the instructions below.  You will use terminal commands to copy the `functions-0.c` file.  Make sure you are in the `module2/followalongs/functions` folder in the terminal window. (Hint: You can use the terminal command `pwd` to see the current directory you are working in.) You can also review <a href="../Supplementary-Resources/terminal-commands.md" target="_blank">Terminal Commands</a>.
```
 /**
  * This is a continuation of the last program and you should copy functions-0.c file so you do not have to 
  * write the whole program. Use the command below, open up functions-1.c and watch the video
  * to complete the task.  
  * Make sure you are in this Folder: ~/workspace/module2/followalongs/functions
  *
  *      cp functions-0.c functions-1.c
  *
  */
```

### Class 1 Task: String-0
```
 /**
  * Filename: string-0.c
  * Save in Folder: ~/workspace/module2/followalongs/string
  * 
  * Include the stdio library
  * Include the cs50 library
  * Include the string library
  * Add main method
  *   Declare a variable s of type string and assign the function GetString() to it 
  * 
  * You will find instructions to complete this task in the video. 
  * You will be modifying this code as you go along.
  *
  */
```

### Class 1 Task: String-1
This is a continuation of String-0, please follow the instructions below.  You will use terminal commands to copy the `string-0.c` file.  Make sure you are in the `module2/followalongs/string` folder in the terminal window. (Hint: You can use the terminal command `pwd` to see the current directory you are working in.) You can also review <a href="../Supplementary-Resources/terminal-commands.md" target="_blank">Terminal Commands</a>.
```
 /**
  * This is a continuation of the last program and you should copy string-0.c so you do not have to 
  * write the whole program. Use the command below, open up string-1.c and watch the video
  * to complete the task. 
  * Make sure you are in this Folder: ~/workspace/module2/followalongs/string
  * 
  *      cp string-0.c string-1.c
  *
  */
```

### Class 1 Task: String-2
This is a continuation of String-0, please follow the instructions below.  You will use terminal commands to copy the `string-0.c` file.  Make sure you are in the `module2/followalongs/string` folder in the terminal window. (Hint: You can use the terminal command `pwd` to see the current directory you are working in.) You can also review <a href="../Supplementary-Resources/terminal-commands.md" target="_blank">Terminal Commands</a>.
```
 /**
  * This is a continuation of the last program and you should copy string-1.c so you do not have to 
  * write the whole program. Use the command below, open up string-2.c and watch the video
  * to complete the task.
  * Make sure you are in this Folder: ~/workspace/module2/followalongs/string
  *  
  *      cp string-1.c string-2.c
  *
  */
```

### Class 1 Task: Capitalize-0
```
 /**
  * Filename: capitalize-0.c
  * Save in Folder: ~/workspace/module2/followalongs/capitalize
  *
  * Include the stdio library
  * Include the cs50 library
  * Include the string library
  * Add main method
  *   Declare a variable s of type string and assign the function GetString() to it 
  * 
  * You will find instructions to complete this task in the video. 
  * You will be modifying this code as you go along.
  *
  */
```

### Class 1 Task: Capitalize-1
This is a continuation of Capitalize-0, please follow the instructions below.  You will use terminal commands to copy the `capitalize-0.c` file.  Make sure you are in the `module2/followalongs/capitalize/` folder in the terminal window. (Hint: You can use the terminal command `pwd` to see the current directory you are working in.) You can also review <a href="../Supplementary-Resources/terminal-commands.md" target="_blank">Terminal Commands</a>.
```
 /**
  * This is a continuation of the last program and you should copy capitalize-0.c so you do not have to 
  * write the whole program. Use the command below, open up capitalize-1.c and watch the video
  * to complete the task. 
  * Make sure you are in this Folder: ~/workspace/module2/followalongs/capitalize
  * 
  *      cp capitalize-0.c capitalize-1.c
  *
  */
```

### Class 1 Task: Capitalize-2
This is a continuation of Capitalize-0, please follow the instructions below.  You will use terminal commands to copy the `capitalize-0.c` file.  Make sure you are in the `module2/followalongs/capitalize` folder in the terminal window. (Hint: You can use the terminal command `pwd` to see the current directory you are working in.) You can also review <a href="../Supplementary-Resources/terminal-commands.md" target="_blank">Terminal Commands</a>.
```
 /**
  * This is a continuation of the last program and you should copy capitalize-1.c so you do not have to 
  * write the whole program. Use the command below, open up capitalize-2.c and watch the video
  * to complete the task.
  * Make sure you are in this Folder: ~/workspace/module2/followalongs/capitalize
  * 
  *      cp capitalize-1.c capitalize-2.c
  *
  */
```

### Class 2 Task: Ages
<a href="http://cdn.cs50.net/2015/fall/lectures/1/f/notes1f/notes1f.html#loops_continued" target="_blank">Do While Loops</a> refresher. 
```
 /**
  * Filename: ages.c
  * Save in Folder: ~/workspace/module2/followalongs/ages
  * 
  * Include the stdio library
  * Include the cs50 library
  * Add main method
  *   Declare a variable n of type int
  *   Do 
  *      Print "Number of people in room: "
  *      Assign user input to the variable n
  *   While(n < 1)
  * 
  * You will find instructions to complete this task in the video. 
  * You will be modifying this code as you go along.
  *
  */
```

### Class 2 Task: argv-0
<a href="http://cdn.cs50.net/2015/fall/lectures/2/w/notes2w/notes2w.html#command_line_arguments" target="_blank">Command Line Arguments</a> refresher. 
```
 /**
  * Filename: argv-0.c
  * Save in Folder: ~/workspace/module2/followalongs/argv
  * 
  * Include the stdio library
  * Include the cs50 library
  * Add main method that has two arguments: argc of type int, argv an array of strings
  *    Print "%s\n" using the 1st element of the array argv as the value of the placeholder "%s"
  * 
  * You will find instructions to complete this task in the video. 
  * You will be modifying this code as you go along.
  *
  */
```

### Class 2 Task: Argv-1
This is a continuation of Argv-0, please follow the instructions below.  You will use terminal commands to copy the `argv-0.c` file.  Make sure you are in the `module2/followalongs/argv` folder in the terminal window. (Hint: You can use the terminal command `pwd` to see the current directory you are working in.) You can also review <a href="../Supplementary-Resources/terminal-commands.md" target="_blank">Terminal Commands</a>.
```
 /**
  * This is a continuation of the last program and you should copy argv-0.c so you do not have to 
  * write the whole program. Use the command below, open up argv-1.c and watch the video
  * to complete the task. 
  * Make sure you are in this Folder: ~/workspace/module2/followalongs/argv 
  * 
  *      cp argv-0.c argv-1.c
  *
  */
```

### Class 2 Task: Argv-2
This is a continuation of Argv-1, please follow the instructions below.  You will use terminal commands to copy the `argv-1.c` file.  Make sure you are in the `module2/followalongs/argv` folder in the terminal window. (Hint: You can use the terminal command `pwd` to see the current directory you are working in.) You can also review <a href="../Supplementary-Resources/terminal-commands.md" target="_blank">Terminal Commands</a>.
```
 /**
  * This is a continuation of the last program and you should copy argv-1.c so you do not have to 
  * write the whole program. Use the command below, open up argv-2.c and watch the video
  * to complete the task. 
  * Make sure you are in this Folder: ~/workspace/module2/followalongs/argv 
  * 
  *      cp argv-1.c argv-2.c
  *
  */
```
