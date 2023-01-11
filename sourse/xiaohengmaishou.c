#include <stdio.h>

int main()
{

    int a[1001], i, n, f = 0, t;

    scanf("%d", &n);

    for (i = 1; i <= 1000; i++)
    {
        a[i] = 0;
    }

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &t);
        a[t] = 1;
    }

    for (i = 1; i <= 1000; i++)
    {
        if (a[i] != 0)
            f++;
    }
    printf("%d\n", f);
    for (i = 1; i <= 1000; i++)
    {
        if (a[i] != 0)
            printf("%d ", i);
    }

    return 0;
}