##### Module 1

[Go back to Prep for Class 2](../../class2-prep)

# Exercise: Age Restrictions

In a program called `agerestrictions.c` write a program that asks the user for their age, and then reports the set of societal activities the user is legally
entitled to participate in:

```
$ ./agerestrictions
How old are you? 30
You can drive!
You can vote!
You can drink!
```

```
$ ./agerestrictions
How old are you? 17
You can drive!
```

```
$ ./agerestrictions
How old are you? 12
Some day, kid...
```

Obviously you are going to need a handful of `if` statements here. Think carefully about when your `if` statement
needs an `else` branch, and when not.

In case you need a refresh, here are the rules:
* under 16: You can't do much. 
* 16 and over: You can drive! 
* 18 and over: You can vote!
* 21 and over: You can drink!
