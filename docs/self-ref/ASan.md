# AddressSanitizer

Compile:

```
gcc -fsanitize=address -g ...
```

**Purpose:** detect memory errors at runtime.

#### Common bugs caught:
- buffer overflows
- use-after-free
- invalid reads/writes
- dangling pointers

Especially useful when a program compiles successfully but crashes with a segmentation fault.
