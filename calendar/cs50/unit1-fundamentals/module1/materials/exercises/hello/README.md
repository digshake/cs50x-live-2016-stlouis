##### Module 1

[Go back to Class 1 Prep](../../class1-prep#printing-getting-user-input)

# Exercise: Hello

Shall we have you write your first program? At this point you should have all of your module and pset folders created.  If not please refer to the <a href="../../../../../../../helpful-resources/CS50-IDE/file-management-resource.md" target="_blank">File Management Resource</a> in the CS50x Wiki.

### Create the Folder

In the terminal window, navigate to the `~/workspace/module1/exercises` folder 

If you are not sure where you are located, use the command `pwd` to list the directory you are at and if you are not in the `~/workspace/module1/exercises` folder use the command `cd` then hit enter, and type the command `cd ~/workspace/module1/exercises` to change directories.) 
```
$ pwd
/home/ubuntu/workspace/ (You will see something similar to this)
$ cd ~/workspace/module1/exercises
```

(Incidentally, `~` is the name of your system's "home" directory)

Now create a new folder called `hello`, and `cd` into this directory.
```
$ mkdir hello
$ cd hello
```

### Create the File

You should now be inside of the  `~/workspace/module1/exercises/hello` folder, where you will make a new file named `hello.c`. The linux command to create a file is `touch`. Then verify that the file was created by using the command `ls` to list the contents of the current folder.
```
$ touch hello.c
$ ls
hello.c
```
You can now look at your directory on the upper left side of the CS50 IDE and  click the dropdown arrow next to the folders `module1`, `exercises` and then `hello`, to see the new file you just created. You can double click the `hello.c` file to start writing your program! (You will see a new tab with the name hello.c above the terminal window. This is where you will write your program) 

### Start Writing the Program

First, checkout this quick <a href="https://youtu.be/HkQD6aw7oDc?t=101" target="_blank">video</a>, where Zamyla explains the steps as she writes the program. (We skipped ahead past the intro where she talks about getting set up, because our setup process is a little different).

Proceed to write your first program by typing precisely these lines into the file:
```c
#include <stdio.h>

int main(void)
{
    printf("hello, world\n");
}
```

Notice how CS50 IDE adds "syntax highlighting" (i.e., color) as you type. Those colors aren’t actually saved inside of the file itself; they’re just added by CS50 IDE to make certain syntax stand out. Had you not saved the file as hello.c from the start, CS50 IDE wouldn’t know (per the filename’s extension) that you’re writing C code, in which case those colors would be absent.

Do be sure that you type in this program just right, else you’re about to experience your first bug! In particular, capitalization matters, so don’t accidentally capitalize words (unless they’re between those two quotes). And don’t overlook that one semicolon. C, like most programming languages, is quite nitpicky!

When done typing, select File > Save (or hit command- or control-s), but don’t quit. Recall that the leading asterisk in the tab’s name should then disappear, indicating that the file has been saved. Click anywhere in the terminal window beneath your code, and be sure that you’re inside of `~/workspace/module1/exercises/hello` (Remember how? If not, type `cd` and then `Enter`, followed by `cd workspace/module1/exercises/hello` and then `Enter`.) Your prompt should be:
```
username@ide50:~/workspace/module1/exercises/hello $
```

Let’s confirm that `hello.c` is indeed where it should be. Type `ls` 
followed by `Enter`, and you should see `hello.c`. 
```
$ ls
hello.c
```
If not, no worries; you probably just missed a small step. Best to restart these past several steps or ask for help!

Assuming you indeed see `hello.c`, let’s try to compile! Cross your fingers and then type
```c
$ make hello
```
at the prompt, followed by `Enter`. (Well, maybe don’t cross your fingers whilst typing.) To be clear, type only `hello` here, **not** `hello.c`. If all that you see is another, identical prompt, that means it worked! Your source code has been translated to object code (0s and 1s) that you can now execute. Type
```
$ ./hello
```
at your prompt, followed by `Enter`, and you should see the below:
```
hello, world
```

And if you type `ls` followed by `Enter`, you should see a new file, `hello`, alongside `hello.c`. The first of those files, `hello`, should have an asterisk after its name that, in this context, means it’s **"executable," a program that you can execute (i.e., run).**
```
$ ls
hello* hello.c
```


If, though, upon running make, you instead see some error(s), it’s time to debug! (If the terminal window’s too small to see everything, click and drag its top border upward to increase its height.) If you see an error like expected declaration or something no less mysterious, odds are you made a **syntax error (i.e., typo)** by omitting some character or adding something in the wrong place. Scour your code for any differences vis-à-vis the template above. It’s easy to miss the slightest of things when learning to program, so do compare your code against ours character by character; odds are the mistake(s) will jump out! Anytime you make changes to your own code, just remember to re-save via **File > Save (or command- or control-s)**, then re-click inside of the terminal window, and then re-type
```
$ make hello
```
at your prompt, followed by `Enter`. (Just be sure that you are inside of `~/workspace/module1/exercises/hello` within your terminal window, as your prompt will confirm or deny.) If you see no more errors, try running your program by typing
```
$ ./hello
```
at your prompt, followed by `Enter`! Hopefully you now see whatever you told printf to print?

If not, reach out for help! Incidentally, if you find the terminal window too small for your tastes, know that you can open one in a bigger tab by clicking the circled plus (+) icon to the right of your `hello.c` tab.


### Congrats!

You’ve begun to program! 

Incidentally, you've also (unknowingly) just completed a portion of Pset 1! Namely, you did the section called <a href="http://cdn.cs50.net/2015/fall/psets/1/pset1/pset1.html#hello_c" target="_blank">Hello C</a>. 

Let's copy this work into your `/pset1` directory, so you don't have to redo it later when you are working on the rest of the problem set. In your terminal, type
```
$ cp -r ~/workspace/module1/exercises/hello ~/workspace/pset1/hello
```

Then verify that this worked correctly by typing
```
$ ls ~/workspace/pset1
hello/
```

You should see there is now a `hello/` directory inside `pset1/`.

