#include <stdio.h>

int add (int,int); /* prototype */

int main()
{
    printf("%d\n",add(2,3));
    return 0;
    
}

int add(int i, int j)
{
    return i+j;
}

