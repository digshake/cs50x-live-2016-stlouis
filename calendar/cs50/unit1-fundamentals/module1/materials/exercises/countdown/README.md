##### Module 1 
[Go back to Prep for Class 2](../../class2-prep#loops)
# Exercise: Countdown

In a file called `countdown.c` write a program that performs an epic countdown from a user-specified integer:

```
$ ./countdown
Count down from: 3
3...
2...
1...
BLAST OFF!
```

```
$ ./countdown
Count down from: 5
5...
4...
3...
2...
1...
BLAST OFF!
```

```
$ ./countdown
Count down from: 0
BLAST OFF!
```

Watch out for negative numbers! If the user gives you a negative number, you should continue prompting until they 
behave more responsibly: 
```
$ ./countdown
Count down from: -2
Count down from: -32
Count down from: 3
3...
2...
1...
BLAST OFF!
```

Or optionally, you can implement the program such that whenever receiving a negative number, it counts **up** rather than down:
```
$ ./countdown
Count down from: -2
-2...
-1...
BLAST OFF!
``` 
