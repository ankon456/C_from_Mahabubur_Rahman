/*
Determining whether a number is even or odd
find_even_odd.c
practice11.c
*/ 

#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    if ((n %2)==0)
    printf("The number %d is even ", n);
    else
    printf("The number %d is odd", n );

    return 0;
}
