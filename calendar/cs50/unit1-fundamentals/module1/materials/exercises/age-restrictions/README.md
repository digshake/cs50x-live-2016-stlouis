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

In case you're relatively new to Missouri's legal system, you can use the following guide to age restricted activities (each age range includes all of the activities above, in addition to the new allowances):
* 0-15: You can't do much. 
* 16-20: You can drive!
* 21+: You can vote! You can drink!

There are other restrictions based on age. Feel free to add your own, or develop your own age restriction system!
