#include "head.h" 
static void draw_circle(const struct shape* s)
{
    struct circle* this = container_of(s, struct circle, base);
    printf("draw a %s: r = %d\n", s->name, this->r);
}
 
static struct shape_operations circle_operations = {
    .draw = draw_circle,
};
 
void circle_constructor(struct circle* c, int r)
{
    c->r = (r > 0) ? r : 1;
    c->base.name = "circle";
    c->base.sops = &circle_operations;
}
