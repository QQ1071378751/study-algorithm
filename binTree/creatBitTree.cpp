#include <stdio.h>
#include<iostream>
using namespace std;
struct bitnode
{
    char data;
    struct bitnode *l, *r;
};
typedef struct BiTNode
{
    char data;
    struct BiTNode *l, *r;
} BitNode, *BiTree;
void preorder(BiTree t, int *m)
{
    int i;
    if (t)
    {
        printf("%c--", t->data);
        if ((t->l))
            ++(*m);
        preorder(t->l, m);
        if (t->r)
        {
            printf("\n");
            for (i = 1; i < (*m); i++)
                printf(" ");
        }
        preorder(t->r, m);
        if (t->r)
            ++(*m);
    }
    else
        return;
}

void InOrder(BiTree T, int m)
{
    if (!T)
        return;
    printf("--%c", T->data);
    if (T->l)
    {
        m++;
        printf("\n");
        for (int i = 1; i < m; i++)
        {
            printf(" ");
        }
    }

    InOrder(T->l, m);
    InOrder(T->r, m);
}
void createTree(BiTree T)
{
    char c;
    scanf(" %c", &c);
    // cin>>c;
    if (c != '#')
    {
        T = new BiTNode;
        T->data = c;
        // printf("请输入%c的左子树:\n", c);
        createTree(T->l);
        // printf("请输入%c的右子树:\n", c);
        createTree(T->r);
    }
    else
    {
        T = NULL;
        return;
    }
}
int main()
{
    BiTree T, p, t;
    createTree(T);
    // preorder(T, &m);
    return 0;
}