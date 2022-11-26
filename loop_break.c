#include <stdio.h>

int main()
{
    int n;

    while (n != 1999)
    {
        scanf("%d", &n);
        if (n != 1999)
        {
            printf("wrong\n");
        }
        else
        {
            printf("Correct\n");
        }
    }
}