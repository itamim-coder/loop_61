#include <stdio.h>

int main()
{
    int water_a, water_b, water_c;

    scanf("%d %d %d", &water_a, &water_b, &water_c);

    if (water_a > water_c && water_a > water_b)
    {
        printf("%d", water_b + water_c);
    }
    else if (water_b > water_c && water_b > water_a)
    {
        printf("%d", water_c + water_a);
    }
    else
    {
        printf("%d", water_a + water_b);
    }
}
