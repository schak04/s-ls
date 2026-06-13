# Strings in C

A C string = chars ending with `'\0'`; there is no built-in `string` type.

```c
char str[100];   // writable storage
char *str;       // pointer only, no storage allocated
```

```c
char *s = "hello";   // points to read-only literal
char s[] = "hello";  // writable copy
```

`strcat(dest, src)` appends `src` to `dest`, and for that `src` must be writeable.

