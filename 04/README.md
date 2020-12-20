# printf and Manpages
The C standard library is documented fairly well in Manpages.  If you're not sure the parameters a function takes, look at its manpage.  If you're not sure what header files you need to include, look at the manpages.  If you're not sure how to use manpages, look at the manpages!

`man man` - get manual pages for the man utility
`man 1 XXXX` - user commands
`man 2 XXXX` - system calls
`man 3 XXXX` - library calls
`man 7 XXXX` - misc

## printf
`man 3 printf` - to ensure you get the manpage for the library call

### format strings
* `%d` - signed integer
* `%l` - signed long
* `%ul` - unsigned long
* `%f` - float or double
* `%c` - character representation of unsigned char
* `%s` - string (null terminated)
* `%x` - unsigned hexidecimal notation
* `%p` - void * pointer in hexidecimal

## Character Constants
* `\0` - The NULL character. You’ll often see this as terminating a character array.
* `\n` - New line.
* `\r` - Carriage return.
* `\t` - Horizontal tab.
* `\v` - Vertical tab.
* `\o` - Octal values. This will look something like \o456 where we are referring to octal value 456 which is 302 in decimal.
* `\x` - Hexidecimal values. This will look something like \x456 where we are referring to hexadecimal 456 which is 1110 in decimal.
* `\u` - Unicode values.
