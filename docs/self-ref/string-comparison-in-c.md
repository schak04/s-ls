# Char and String comparison in C

## When it comes to characters

We can simply do `char1 == char2` for comparing their contents.

## BUT
## When it comes to strings

Wrong: `str1 == str2` -> as this compares addresses

Right: `strcmp(str1, str2) == 0` -> compares contents
    if the result == 0 that means the strings are equal
    otherwise if < 0 -> str1 < str2
        and if > 0 -> str1 > str2

## Why?

Because, obviously, since C does not have strings as a built-in data type,
when we make a string (char array) in C, and then compare it with another using `==`,
the arrays decay to pointers. So, `==` compares the pointer addresses, not the string contents.
