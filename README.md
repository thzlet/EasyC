# EasyC 𓆉

EasyC is a lightweight **C framework** that provides **utilities and common data structures** for learning and rapid development.  
It is designed for students and developers to **easily use lists, stacks, queues, binary trees, dynamic memory handling, file I/O, and utility functions**.

---

## Features

- Dynamic memory allocation helpers;
- Singly linked lists;
- Stacks;
- Queues;
- Binary search trees;
- File reading and writing;
- General utility functions (swap, min/max, print array);

---
## 1. Installation

Clone the repository and navigate to the project folder:

```bash
git clone https://github.com/thzlet/EasyC.git
cd EasyC
```

## 2. How to Use
Include the main header in your C files:
```bash
#include "EasyC.h"
#include <stdio.h>

int main() {
    // Linked list example
    Node* list = NULL;
    append_node(&list, 10);
    append_node(&list, 20);
    print_list(list);
    delete_list(&list);

    // Stack example
    StackNode* stack = NULL;
    push(&stack, 5);
    printf("Top of stack: %d\n", peek(stack));
    delete_stack(&stack);

    return 0;
}
```
This example shows how to use the linked list and stack utilities from EasyC.

## 3. Compile and Run
Compile the main example:
```bash
make          # Compiles main.c and other source files
./main        # Run the main program
```
Run tests:
```bash
make test     # Compiles the test executable
./test        # Run the tests
```
Clean compiled files:
```bash
make clean    # Remove object files and executables
```

### Contributing

Feel free to fork the repository and contribute with new features or improvements.
Please open an issue if you find bugs or want to suggest enhancements.
