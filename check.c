// Online C compiler to run C program online
#include <stdio.h>

void we(void)
{
    int *ptr;
    printf("%d\n", *ptr);
    {
        int x = 8;
        ptr = &x;
        printf("%d\n", *ptr);
    }
    printf("%d\n", *ptr);
    *ptr = 3;
    printf("%d\n", *ptr);
}
void main()
{
    we();
}
