int preorder(BiTree t, int *m)
// {
//     int i;
//     if (t)
//     {
//         printf("%c--", t->data);
//         if ((t->l))
//             ++(*m);
//         preorder(t->l, m);
//         if (t->r)
//         {
//             printf("\n");
//             for (i = 1; i < (*m); i++)
//                 printf(" ");
//         }
//         preorder(t->r, m);
//         if (t->r)
//             ++(*m);
//     }
//     else
//         return 0;
// }