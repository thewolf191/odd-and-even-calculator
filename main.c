#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter Num\t");
    scanf("&d" ,&n);
    if(n%2 == 0)
    {
       printf("even");
    }
    else
    {
       printf("odd");
    }
}

