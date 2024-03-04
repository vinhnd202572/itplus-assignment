#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <string.h>

void information(char c[])
{

    if (strcmp(c, "int") == 0)
    {
        printf("Size of int: %lu bytes\n", sizeof(int));
        printf("Value range of int: %d to %d\n", INT_MIN, INT_MAX);
    }
    else if (strcmp(c, "float") == 0)
    {
        printf("Size of float: %lu bytes\n", sizeof(float));
        printf("Value range of float: %e to %e\n", FLT_MIN, FLT_MAX);
    }
    else
    {
        // other datatypes are either
    }
}
int main()
{
    char c[100];

    printf("Enter your type of data : \n");

    scanf("%s", c);

    information(c);
}