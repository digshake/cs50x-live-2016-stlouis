##### Module 2

[Back to Class 2 Prep](../../class1-prep)

# Resource: More for-loops

Here, I want to briefly clear up something that you might find confusing.

When iterating over `strings`, a lot of CS50 examples use a `for-loop` like this:

```
for (int i = 0, n = strlen(my_string); i < n; i++) 
{
    char c = my_string[i];
    // and then do stuff with c
}
```

What makes this different from most "normal" `for-loops` you've seen? In this case, we initialize
**two** variables rather than just one, namely:
* an `int` called `i` gets set to `0`
* an `int` called `n` gets set to `strlen(my_string)`

We could have achieved the same outcome with this code:
```
for (int i = 0, i < strlen(my_string); i++) 
{
    char c = my_string[i];
    // and then do stuff with c
}
```

in which we initialize just one variable, `i`, and embed `strlen(my_str)` directly into the condition of the `for-loop` (the middle section of the three semicolons), rather than storing it in a variable `n` first, and then using `n` inside the condition.

But the second way is "worse", because it is less efficient. Do you remember why? The reason is that the code inside the condition gets executed every time around, and so we end up calling the `strlen` function a bunch of times, while the first `for-loop` only needs to call `strlen` once.

This explanation probably makes sense in a vague way, but nevertheless, you might still feel a little hazy on the details, because even normal `for-loop` syntax is very dense and cryptic, and when you saw the two variables declared, if youre like me, you said "Wait, what is this? That looks wrong. Can you do that?"

In fact, using fancy `for-loop` tricks is not even necessary to solve this problem. We can still loop over a string without having to call `strlen` multiple times, in a much more straitforward way:
```
int n = strlen(my_string);
for (int i = 0; i < n; i++) 
{
    char c = my_string[i];
}
```

Here we have a "normal" loop, immediately preceeded by a typical, every-day variable declaration.

So hopefully the unfamiliarity of that fancy `for-loop` no longer seems as scary.

But the fancy version provides a nice example of how to take advantage of the extremely flexible nature of `for-loops` and break out of the box of `for(int i = 0; i < something; i++)`. The `for-loop` construct gives us a lot of options:
* You can initialize one variable, or more than one, or none. 
* Your condition can be anything, so long as it evaluates to `true` or `false`.
* The modification step can be anything, not just `i++`.

For example:

```
// loop backwards from 10 to 1
for (int i = 10; i != 0; i--)
{
    // do stuff
}
```

```
// count up by 3s
for (int i = 0; i < 100; i += 3)
{
    printf("%i is a multiple of 3\n", i);
}
```

```
// i goes up, j goes down (twice as fast), until they meet
for (int i = 0, j = 100; i <= j; i++, j -= 2)
{
    int distance = j - i;
    printf("The distance between the two things is %i\n", distance);
}
```