#include <stdio.h>
/**
 * 只允许在队首出队，在队尾入队
 */
struct queue
{
    int data[100]; // 主体
    int head;      // 队首指针
    int tail;      // 队尾
};

int main()
{

    int q[102] = {0, 6, 3, 1, 7, 5, 8, 9, 2, 4}, head, tail;

    int i;

    // 初始化队列
    head = 1;
    tail = 10;

    while (head < tail)
    {
        printf("%d ", q[head]);
        head++;

        q[tail] = q[head];
        tail++;

        head++;
        /* code */
    }

    printf("\n***\n");
    struct queue queue;

    // 初始化队列
    queue.head = 1;
    queue.tail = 1;

    for (i = 1; i <= 9; i++)
    {
        queue.data[queue.tail++] = q[i];
    }

    while (queue.head < queue.tail)
    {
        printf("%d ",queue.data[queue.head]);
        queue.head++;

        queue.data[queue.tail] = queue.data[queue.head];
        queue.tail++;

        queue.head++;
    }
    
    return 0;
}