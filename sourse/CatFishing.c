#include <stdio.h>
typedef struct stack
{
    int data[10];
    int top;
    /* data */
} stack;

typedef struct
{
    int data[1000];
    int head;
    int tail;
    /* data */
} queue;

int main()
{
    int i,t;
    // 模拟小哼和小哈手中的牌
    queue q1, q2;
    // 模拟桌子上的牌
    stack s;
    // 初始化
    q1.head = 1;
    q1.tail = 1;
    q2.tail = 1;
    q2.head = 1;
    s.top = 0;
    for (i = 0; i < 6; i++)
    {
        scanf("%d",&q1.data[q1.tail]);
        q1.tail++;
        /* code */
    }
     for (i = 0; i < 6; i++)
    {
        scanf("%d",&q2.data[q2.tail]);
        q2.tail++;
        /* code */
    }

    t = q1.data[q1.head];
    
    return 0;
}