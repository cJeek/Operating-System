#include "head.h"
static void draw_triangle(const struct shape* s)
{
    struct triangle* this = container_of(s, struct triangle, base);
    printf("draw a %s: %d\t%d\t%d\n", s->name, this->a, this->b, this->c);
}
 
static struct shape_operations triangle_operations = {
    .draw = draw_triangle,
};
 
void triangle_constructor(struct triangle* t, int a, int b, int c)
{
    t->a = (a > 0) ? a : 1;
    t->b = (b > 0) ? b : 1;
    t->c = (c > 0) ? c : 1;
    t->base.name = "triangle";
    t->base.sops = &triangle_operations;
}
