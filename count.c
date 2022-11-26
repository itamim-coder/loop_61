#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int positive = 0;
    int negative = 0;

    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);

        if (a < 0)
        {
            negative = negative + 1;
        }
        else
        {
            positive = positive + 1;
        }
    }
    printf("Positive: %d\nNegative: %d\n", positive, negative);
}