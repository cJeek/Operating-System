#ifndef __HEAD_H__
#define __HEAD_H__
#include <stdio.h>

struct shape {
    const char* name;
    struct shape_operations* sops;
};
 
struct shape_operations {
    void (*draw)(const struct shape*);
};

struct triangle {
    int a, b, c;
    struct shape base;
};

struct circle {
    int r;
    struct shape base;
};

struct square {
    int e;
    struct shape base;
};

#define offset_of(type, member) \
    ((unsigned long)(&(((type*)0)->member)))
 
#define container_of(ptr, type, member) \
    ((type*)((unsigned long)(ptr) - offset_of(type, member)))

#endif 
