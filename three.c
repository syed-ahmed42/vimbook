#include <stdlib.h>
#include <stdio.h>

void say_hello(int n);

int main(void)
{
    say_hello(7);	
    return 0;
}

//Say hello n times
void say_hello(int n)
{
    for(;n;n--)
    {
        printf("Hello World!\n");
    }
}
