# Dynamic Memory Allocation
Memory allocation is how a program is assigned memory from the system.  This is either determined during compilation or during runtime.  Dynamic allocation occurs during runtime.

## When to use
[stackoverflow.com](https://stackoverflow.com/questions/12161774/when-do-i-need-dynamic-memory)
* you need a lot of memory (stack is often restricted)
* you don't know at compile time how much memory you're going to need
* you need the memory to persist between functions
* you're building data structures

## How its done
[geeksforgeeks.org](https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/)
* **malloc** - allocate memory and return a pointer to it
* **calloc** - allocate memory, clear it, and return a pointer to it
* **realloc** - resize the memory a pointer points to
* **free** - release the memory the pointer points to

> It is important to always check to see if an allocation was successful

### Valgrind
**valgrind** can detect memory leaks and invalid uses of memory and pointers.  Use it!! 

## Stack vs Heap
[medium.com](https://medium.com/fhinkel/confused-about-stack-and-heap-2cf3e6adb771)
> ANSI C warns against using dynamically sized arrays *

## Free
Dynamically allocated memory needs to be free'd when you no longer need it.  Not doing so results in **memory leaks**.  The memory is automatically released when your program ends but its still a good habit to always free it yourself.  

> Note, **free** does not set a pointer to NULL so if you use it again, this can result in a *use after free* error that can introduce vulnerabilities into your program.  Additionally, attemting to free a pointer that has already been free'd results in a *double free* which is also a vulnerability.  **Its best to set a pointer to NULL after freeing it!**

### Use after free
[owasp.org](https://owasp.org/www-community/vulnerabilities/Using_freed_memory)

### Double free
[owasp.org](https://owasp.org/www-community/vulnerabilities/Doubly_freeing_memory)
