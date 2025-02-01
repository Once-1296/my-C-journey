#include <stdio.h>
int aw(int i, float f)
{
    printf("hello from aw %d and %f\n", i, f);
    return 0;
}

int main()
{
    aw(1, 5.0);
    aw(10, 4.3);
    aw(100, 3.14);
    return 0;
}
