# EasyC 𓆉

EasyC is a lightweight **C framework** that provides **utilities and common data structures** for learning and rapid development.  
It is designed for students and developers to **easily use lists, stacks, queues, binary trees, dynamic memory handling, file I/O, and utility functions**.

---

## Features

- Dynamic memory allocation helpers
- Singly linked lists
- Stacks
- Queues
- Binary search trees
- File reading and writing
- General utility functions (swap, min/max, print array)

---

## Getting Started

### 1. Clone the repository

```bash
git clone https://github.com/thzlet/EasyC.git
cd EasyC

2. Compile the main example
make
./main

3. Run tests
make test
./test

4. Clean compiled files
make clean
```

### 2. How to use
```bash
Include the main header in your C files:

#include "EasyC.h"

Example Usage
#include "EasyC.h"

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
### Contributing

Feel free to fork the repository and contribute with new features or improvements.
Please open an issue if you find bugs or want to suggest enhancements.
