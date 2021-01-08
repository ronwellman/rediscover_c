# Structures
The grouping of one or more variables that do not have to be of the same type.

## Why do we use them
* organize / group related variables
* build custom data types
* etc

## How do we declare them
```c
struct coordinate {
	unsigned int x;
	unsigned int y;
};

struct coordinate coord1 = { 500, 125 };

printf("X: %d\n", coord1.x);
printf("Y: %d\n", coord1.y);
```

## Pointer to a struct
```c
struct coordinate *pcoord1 = &coord1;

printf("X: %d\n", pcoord1->x);
printf("Y: %d\n", pcoord1->y);
```

## Typedef
Create a new data type name

```c
typedef struct coordinate coord;

coord coord2 = { 100, 200 };
```
