##### Module 1

[Go back to Prep for Class 2](../../class2-prep)

# Exercise: Validate

In a program called `validate.c` write a program using a do-while loop that prompts the user for an even integer. If they try to swindle you with odd numbers, 
just keep prompting them until you get your way:

```
$ ./validate
Give me an even integer please: 3
Give me an even integer please: 35
Give me an even integer please: 6
Thanks! I got what I wanted.
```

To determine whether a number is even, you can use the modulo operator `%`, which calculates the remainder after 
division. Here's some examples:

* `3 % 3` is `0`
* `4 % 3` is `1`
* `5 % 3` is `2`
* `6 % 3` is `0`
* `7 % 3` is `1`
* ...
* `9 % 3` is `0`
* `12 % 3` is `0`

Notice the pattern? Whenever some number `n` is divisible by `3`, that's equivalent to saying
`n / 3` has no remainder left over, so `n % 3` is `0`.


So to determine whether a number is even, you just need to check whether it is divisbile by `2`, or in other words,
whether `n % 2` is `0`. 

If `n % 2` is not equal to `0`, then you have an odd number (remember how to say "not equal to" in code?). 
