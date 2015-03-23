#include "head.h"
static void draw_square(const struct shape* s)
{
    struct square* this = container_of(s, struct square, base);
    printf("draw a %s: e = %d\n", s->name, this->e);
}
 
static struct shape_operations square_operations = {
    .draw = draw_square,
};
 
void square_constructor(struct square* s, int e)
{
    s->e = (e > 0) ? e : 1;
    s->base.name = "square";
    s->base.sops = &square_operations;
}
