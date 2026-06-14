# GDB Memory Inspection

## Print Values

```gdb
p variable
print variable
```

---

## Examine Memory

```gdb
x/FMT ADDRESS
```

* `x` = examine memory
* `FMT` = format

General form:

```gdb
x/<count><format><size> ADDRESS
```

Example:

```gdb
x/10xw ptr
```

Read as:

```text
10 = show 10 items
x  = hexadecimal
w  = word (4 bytes)
```

---

## Useful Formats

```gdb
x/s ptr
```

Treat memory as a null-terminated C string.

Example output:

```text
0x5555...: "README.md"
```

---

```gdb
x/x ptr
```

Show memory in hexadecimal.

---

```gdb
x/d ptr
```

Show memory as decimal integers.

---

```gdb
x/c ptr
```

Show memory as characters.

---

## Useful Sizes

```text
b = byte   (1 byte)
h = half   (2 bytes)
w = word   (4 bytes)
g = giant  (8 bytes)
```

Examples:

```gdb
x/16xb ptr   # 16 bytes in hex
x/8xw ptr    # 8 words in hex
x/4xg ptr    # 4 giant words in hex
```

---

## Conclusion

```text
p value  ->  what's the value of this variable?
x/... addr  ->  what's stored at this memory address?
```
