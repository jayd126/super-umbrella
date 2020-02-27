#include <stdio.h>
#include <stdlib.h>

int main() //needs to start with int to return type %d formats an integer
{
    float x;
    float y;
    printf("Enter a number: ");
    scanf("%f", &x);
    y = x/1-x;
    printf("y: %f\n", y);
    return 0;
}
