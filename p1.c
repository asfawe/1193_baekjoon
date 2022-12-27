#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    int d, n;
    int line = 1;
    int sum = 0;

    scanf("%d", &a);

    while (1)
    {
        sum += line;
        if (a <= sum)
        {
            break;
        }
        line++;
    }

    if (line % 2 == 0)
    {
        d = line;
        n = 1;
        while (1)
        {
            if (a == sum)
            {
                printf("%d/%d", d, n);
                break;
            }
            sum--;
            d--;
            n++;
        }
    }

    else
    {
        d = 1;
        n = line;
        while (1)
        {
            if (a == sum)
            {
                printf("%d/%d", d, n);
                break;
            }
            sum--;
            d++;
            n--;
        }
    }

    return 0;
}
