# Dangling Pointer Bug in C

This repository demonstrates a common but often overlooked bug in C programming: the dangling pointer.  A dangling pointer occurs when a pointer points to memory that has been freed or is no longer valid. This can lead to unpredictable behavior, crashes, or security vulnerabilities.

The `bug.c` file contains code exhibiting this issue. The `bugSolution.c` provides a corrected version. The key is to ensure that pointers always point to valid, allocated memory.