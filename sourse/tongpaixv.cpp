#include <stdio.h>
/**
 * 桶排序
 */
int main()
{
    // 测试用例：5 3 5 2 8
    int a[11], i, t, j;
    for (i = 0; i <= 10; i++)
        a[i] = 0;

    for (i = 1; i <= 5; i++)
    {
        scanf("%d", &t);
        a[t]++;
    }
    for (i = 10; i >= 0; i--)
        for (j = 1; j <= a[i]; j++)
            printf("%d ", i);

    return 0;
}