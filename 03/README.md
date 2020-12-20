# Basic Data Types
[tutorialspoint.com](https://www.tutorialspoint.com/cprogramming/c_data_types.htm)
* int
    * char
* float

`sizeof` - Macro for getting the size of something

## Integers
* signed or unsigned - [dev.to](https://dev.to/aidiri/signed-vs-unsigned-bit-integers-what-does-it-mean-and-what-s-the-difference-41a3)
* 32 or 64 bit

### 32-bit or 64-bit
`uname -a` - all system information

`sudo apt install gcc-multilib` - if needed to compile for 32-bit

## Floating Point
[yale.edu](http://www.cs.yale.edu/homes/aspnes/pinewiki/C(2f)FloatingPoint.html)
* float
* double
* long double

## Standard Library
* stddef.h
* stdbool.h
* stdint.h

## size_t / ssize_t
[GeeksforGeeks](https://www.geeksforgeeks.org/size_t-data-type-c-language/)
> guaranteed to be big enough to contain the size of the biggest object the host system can handle
