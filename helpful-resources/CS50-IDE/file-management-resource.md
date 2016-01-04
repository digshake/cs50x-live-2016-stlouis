#How to structure your workspace in the CS50 IDE

You will be introduced to the CS50 IDE in Module 1, so if you haven't reached there yet, don't worry, there will be instructions on how to use the CS50 IDE.
  
####Directory Structure
When you begin to write your programs using the CS50 IDE, you will want a good way to keep your work organized.  We have a specific format that we suggest you to use for creating directories (folders) to save your programs (files) in. Specific instructions for how to set everything up are provided [below](#setting-up-the-directory-tree).

There will be a directory in your home folder called ``~/workspace/`` (though you might also see it named ``~/ide50/``). This is where all your work should go. Inside `~/workspace/`, you should have one folder for each Problem Set, and one folder for each Module.

Within each module folder there will be 4 sub-folders: one each for exercises, followalongs, misc and studios. Within each of those sub-folders (exercises, followalongs, misc, studios) you will also create a folder for each program you write. Examples for each are listed below.

As you get further into the course your programs will become more complex.  You may have additional files that will need to be grouped together in the same folder for a single program.  Don't worry about this now, you'll learn more about this later on. 

#####Exercises
Exercises are not the only task that may need to have files grouped as you will see below.
```
|---- /module1
      |---- /exercises
            |---- /haiku
                  |---- haiku.c
            |---- /largerprogram
                  |---- largerprogram.c
                  |---- additionalfile.c
                  |---- additionalfile.h
```
  
#####Follow Alongs
For some of the follow alongs, you will notice that the name will end in a hyphen and number (IE: hello-0).  These tasks are similar to one another and should be grouped together in the same folder named after the follow along (excluding the hyphen and number).
```
|---- /module1
      |---- /followalongs
            |---- /hello
                  |---- hello-0.c
                  |---- hello-1.c
```
#####Misc
The **`misc`** folder will hold any other programs that you complete during the module that are not an exercise, followalong, Studio or Problem Set.
```
|---- /module1
      |---- /misc
            |---- /examplefromlecture
                  |---- examplefromlecture.c
```  
   
#####Studios
Some of your Studios will have multiple parts that require creating new programs.  You will create a folder within the studios folder of the corresponding module that is the same as the name of the Studio. Then you will save all of the programs created for that Studio in the same folder.
```
|---- /module1
      |---- /studios
            |---- /donuts
                  |---- donuts.c
            |---- /guess
                  |---- guess.c
                  |---- guess5.c
                  |---- guessfive.c
``` 

  
####Setting Up The Directory Tree
  
1. Open up your CS50 IDE and log in.
2. Inside the IDE, open up a new Terminal Window by clicking the little green plus sign at the bottom of the screen.
3. Inside the terminal, make a new directory called `/module1`, and within that, a directory called `/exercises`:

  ```
  $ mkdir module1
  $ mkdir module1/exercises
  ```
  NOTE: Don't type the dollar sign `$`. That's just a convention for specifying that the example is supposed to take place at the command-line prompt in a linux terminal window.
  
4. While you're at it, make a few other subfolders that you'll need:

  ```
  $ mkdir module1/followalongs
  $ mkdir module1/studios
  $ mkdir module1/misc
  ```
  
5. You will create another folder just like this one for Modules 2, so you can copy it like so:

  ```
  $ cp -r module1 module2
  ```
  You should now see a new folder called `/module2/` which contains all the same stuff:
  $ ls
  module1 module2
  $ ls module2
  exercises follow_alongs misc studios
  
5. Repeat step 5 for Modules 3-8. (Using `module3` ... `module8` in place of `module2`)
  
6. Finally, now that you have created all of the folders for each module, let's also make folders for the Problem Sets.
  
  ```
  $ mkdir pset1 pset2 pset3 pset4 pset5 pset6 pset7 pset8
  ```
  

####Graphical Display
Within the CS50 IDE, you will see a graphical display (along the left of the IDE page) of the folders that you have created.  It should be similar to the figure below. 

The file folder icon :file_folder: represents a folder in the directory.  The open file folder icon :open_file_folder: is also a folder in the directory but is used to demonstrate what folders and/or files will be included in that folder. The page icon :page_facing_up: represents a program (file).  You will use the format of these folder and file names when completing these tasks. 

**Folder Format:**
  
When you are in the CS50 IDE you will see that your "home" folder is named ``~/workspace/`` and in some cases ``~/ide50/``. 



~/workspace/
    
&nbsp;&nbsp;:open_file_folder: **``module1/``**
  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;:open_file_folder: **_``exercises/``_**
  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;:open_file_folder: **_``exercise1/``_**
  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;:page_facing_up: exercise1.c
  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;:open_file_folder: **_``exercise2/``_**
  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;:page_facing_up: exercise2.c
  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;:open_file_folder: **_``followalongs/``_**        
  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;:open_file_folder: **_``followalong/``_**
  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;:page_facing_up: followalong.c
  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;:open_file_folder: **_``secondfollowalong/``_**
  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;:page_facing_up: secondfollowalong-0.c
  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;:page_facing_up: secondfollowalong-1.c
  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;:open_file_folder: **_``misc/``_**
    
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;:open_file_folder: **_``misc1/``_**
  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;:page_facing_up: misc1.c
  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;:open_file_folder: **_``studios/``_**
  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;:open_file_folder: **_``studio1/``_**
  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;:page_facing_up: studio1.c
  
&nbsp;&nbsp;:file_folder: **``module2/``**
  
&nbsp;&nbsp;&nbsp;&nbsp;**...**
  
&nbsp;&nbsp;:file_folder: **``module8/``**
  
&nbsp;&nbsp;:file_folder: **``pset1``**
  
&nbsp;&nbsp;:file_folder: **``pset2``**
  
&nbsp;&nbsp;&nbsp;&nbsp;**...**
  
&nbsp;&nbsp;:file_folder: **``pset8``**
