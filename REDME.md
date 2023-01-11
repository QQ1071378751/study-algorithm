# 一级标题
## 二级标题
### 三级标题

* 列表1
* 列表2
* 列表3

<center><h1>XXX</h1> </center>

# 这是一个《啊哈算法》的练习项目

## 算法模板
```c
#include<stdio.h>

int main(){

    return 0;
}
```
## 2022年12月12日 完成了第一个练习：桶排序 tongpaixv.cpp
```c
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
```

## 2022年12月12日 完成了第二个练习：冒泡排序 maopao.c
```c
#include <stdio.h>

int main()
{

    int a[100], i, j, t, n;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
        scanf("%d", &a[i]);

    // 冒泡排序核心部分

    for (i = 1; i <= n - 1; i++)
        for (j = 1; j <= n - i; j++)
        {
            if (a[j] < a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }

    for (i = 1; i <= n; i++)
        printf("%d ", a[i]);

    return 0;
}
```
## 快速排序
```c
#include <stdio.h>
int a[101], n;

void quicksort(int left, int right)
{
    int i, j, t, temp;
    if (left > right)
        return;

    temp = a[left];

    i = left;
    j = right;

    while (i != j)
    {
        // 顺序很重要，要先从右往左找
        while (a[j] >= temp && i < j)
        {
            j--;
        }
        while (a[i] <= temp && i < j)
        {
            i++;
        }

        if (i < j)
        {
            t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
    }

    a[left] = a[i];
    a[i] = temp;

    quicksort(left, i - i);
    quicksort(i + 1, right);
}

int main()
{
    int i, j, t;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }

    quicksort(1, n);

    for (i = 1; i <= n; i++)
        printf("%d ", a[i]);

    return 0;
}
```
## 解题：小哼买书
```c
#include <stdio.h>

int main()
{

    //2022年12月12日21:55:18
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
```
## 队列
```c
#include <stdio.h>

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

    return 0;
}
```
## 结构体
```c
/**
 * 只允许在队首出队，在队尾入队
*/
struct queue
{
    int data[100]; // 主体
    int head;      // 队首指针
    int tail;      // 队尾
};

```
## 使用了结构体
```c
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
```
## 栈 回文的判断
```c
#include <stdio.h>
#include <string.h>

int main()
{
    char a[101], s[101];
    int i, len, mid, next, top;

    gets(a);
    len = strlen(a);
    mid = len / 2 - 1;

    top = 0;
    for (i = 0; i <= mid; i++)
    {
        s[++top] = a[i];
    }
    if (len % 2 == 0)
        next = mid + 1;
    else
        next = mid + 2;
    for (i = next; i <= len - 1; i++)
    {
        if (a[i] != s[top])
            break;
        top--;
    }

    if (top == 0)
        printf("Yes");
    else
        printf("No");

    return 0;
}
```
## 小猫钓鱼
```java
public class App {
    public static void main(String[] args) {
        App app = new App();
        app.xmdnyv();
    }

    void chupa(Queue<Integer> queue, Stack<Integer> stack, Integer[] book) {
        int t = queue.poll();
        if (book[t] == 0) {
            stack.add(t);
            book[t] = 1;
        } else {
            queue.add(t);
            while (!stack.isEmpty() && stack.peek() != t) {
                book[stack.peek()] = 0;
                queue.add(stack.pop());
            }
        }
    }

    void printWin(Queue<Integer> queue, Stack<Integer> stack, String name) {
        System.out.println(name + "赢了！手牌是：");
        while (!queue.isEmpty()) {
            System.out.print(queue.remove() + " ");
        }
        System.out.println();
        if (stack == null)
            return;
        System.out.println("桌上的牌是：");
        while (!stack.isEmpty()) {
            System.out.print(stack.pop() + " ");
        }

    }

    void xmdnyv() {
        Integer heng[] = { 2, 4, 1, 2, 5, 6 };
        Integer ha[] = { 3, 1, 3, 5, 6, 4 };

        Queue<Integer> xiaoheng = new LinkedList<>();
        Queue<Integer> xiaoha = new LinkedList<>();
        List<Integer> asList = Arrays.asList(heng);
        xiaoheng.addAll(asList);
        asList = Arrays.asList(ha);
        xiaoha.addAll(asList);
        Stack<Integer> stack = new Stack<>();
        Integer arr[] = new Integer[10];
        Arrays.fill(arr, 0);
        while (!xiaoha.isEmpty() && !xiaoheng.isEmpty()) {
            chupa(xiaoheng, stack, arr);
            chupa(xiaoha, stack, arr);
        }
        if (!xiaoha.isEmpty()) {
            printWin(xiaoha, stack, "小哈");
        } else {
            printWin(xiaoheng, stack, "小哼");
        }
    }
}
```

