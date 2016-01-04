##### Module 1

[Back to Class 2 Prep](../../class2-prep)

# Exercise: How many oranges?

In a file called `howmanyoranges.c` write a program that asks the user how many orange slices they want to eat, then prints out how many oranges the user should buy so they have enough slices. Assume there are 8 slices in each orange!

A run of your program should look like this:
```
$ ./howmanyoranges
How many orange slices do you want to eat? 15
You should buy 2 oranges!
```

```
$ ./howmanyoranges
How many orange slices do you want to eat? 17
You should buy 3 oranges!
```


How can we do this?  We need to buy enough oranges so that there are *at least* as many slices available as the user wants to eat this week. We can do this by dividing the number of slices they want by the number of slices in each orange (8). For example, `17.0 / 8` yields `2.215` oranges. But because we don't live in a world where one can buy fractional amounts of things (except [donuts](../../studios/donuts) of course), we need to round up to the nearest next integer.

To do this, we'll need to use the `ceil` function found <a href="https://reference.cs50.net/math.h/ceil" target="_blank">here</a>, in the `math.h` library.

```c
float x = ceil(8.2);
// the value of x is now 9.0
```

Finally, don't forget to `#include` the `<math.h>` library at the top of your file!

