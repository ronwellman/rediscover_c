# Strings
[tutorialspoint](https://www.tutorialspoint.com/cprogramming/c_strings.htm)
* may be constant depending upon how they are created
	* char array - fixed length but updatable
	* char pointer - fixed length and read only
* C strings must be NULL terminated ('\0')

### How did we tell if the string was readonly?
* **xxd** - `xxd strings | grep first`
	* record the memory address
* **readelf** - `readelf -S strings`
	* notice that memory address falls within *.rodata* (read only data)
* **objdump** - `objdump --disassemble=main -Mintel strings | less`
	* notice the long hex value getting loaded on the stack and copy it
* **python3**
	* ```python3
	import binascii
	val = b'7320646e6f636573'
	binascii.unhexlify(val)[::-1]
	```
	* We see this is our second string and know it is on our stack which is readable and writable.

## Common String Functions
`man 3 string`

*Usually* better to use the 'n' variant of the function
* **strnlen** vs **strlen** - get the length of a string
* **strncpy** vs **strcpy** - copy a string
* **strndup** vs **strdup** - duplicate a string (allocated on heap)
* **strncat** vs **strcat** - concatenate two strings
* **strncmp** vs **strcmp** - compare two strings
* **strncasecmp** vs **strcasecmp** - compare two strings ignoring case

Other useful string functions
* **strtoll** - convert a string to a long integer (better than *atoi*)
* **strtok** - tokenize a string (break it up)

## Get input from User
* **never use gets** - `man gets`
* **fgets**
* **getline**
* **fgetc** or **getchar**
* **scanf** - Be careful with this as you can cause an overflow
