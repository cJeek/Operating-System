#include "head.h"

void draw_shape(const struct shape* s)
{
    s->sops->draw(s);
}
 
int main(void)
{
    struct triangle t;
    struct circle c;
    struct square s;
 
    triangle_constructor(&t, 5, 5, 5);
    draw_shape(&t.base);
    circle_constructor(&c, 5);
    draw_shape(&c.base);
    square_constructor(&s, 3);
    draw_shape(&s.base);
 
    return 0;
}
