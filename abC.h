#include <stdio.h>
#include <stdlib.h>
#ifndef ABC_ABC_H
#define ABC_ABC_H

// data types
#define number int
#define decimal float

// functions
#define print(x) printf(_Generic((x), int: "%d", double: "%f", float: "%f", char*:"%s", char: "%c"), x)
#define array(type, size) (type*)malloc(sizeof(type)*size)

// syntax macros & helpers
#define start int main(){
#define end }
#define if(condition) if(condition) {
#define endif }
#define then
#define is ==
#define is_not !=
#define and &&
#define or ||

#endif