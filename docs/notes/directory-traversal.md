# Directory Traversal

- `opendir()` opens a directory, returns `DIR*` -> param: `const char *name`
- `readdir()` reads a directory, returns `struct dirent*` (and `NULL` when there are no more entries) -> param: `DIR *dirp`
- `dirent->d_name` contains the file name
- `closedir()` closes a directory -> param: `DIR *dirp`
- `dirent.h` provides `DIR` which is a type representing a directory stream

## References

- Library Functions Manual (man 1)
- POSIX Programmer's Manual (man 0p)
> man pages for `opendir`, `readdir`, `closedir` and `dirent.h`, basically.
