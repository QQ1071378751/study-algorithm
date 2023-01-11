package aahasrfa.binTree;

import java.util.Scanner;

class BinTree {
    int data;
    BinTree left;
    BinTree right;
    int ceng;
}

class Queue {
    BinTree[] data = new BinTree[1000];
    int head, tail;

    Queue() {
        this.head = this.tail = 1;
    }
}

public class BitTree {
    static BinTree tree = null;

    public static void main(String[] args) {
        tree = create();
        System.out.println("");
        printTree(tree);
        System.out.println("");
        printCeng(tree);
    }

    /**
     * 创建一颗二叉树
     * 
     * @return
     */
    static BinTree create() {
        BinTree p = null;
        Scanner scanner = new Scanner(System.in);
        int data = scanner.nextInt();
        if (data != 0) {
            p = new BinTree();
            p.data = data;
            System.out.println("请输入" + data + "的左子树：");
            p.left = create();
            System.out.println("请输入" + data + "的右子树：");
            p.right = create();
            return p;
        } else {
            return null;
        }

    }

    /**
     * 前序打印二叉树
     * 
     * @param tree
     */
    static void printTree(BinTree tree) {
        if (tree != null) {
            System.out.print(tree.data + " ");
            printTree(tree.left);
            printTree(tree.right);
        }
    }

    /**
     * 二叉树的按层遍历
     * 
     * @param binTree
     */
    static void printCeng(BinTree binTree) {
        if (binTree == null)
            return;
        Queue queue = new Queue();
        binTree.ceng = 1;
        queue.data[queue.tail] = binTree;
        queue.tail++;
        int ceng = 1;
        while (queue.head != queue.tail) {
            BinTree t = queue.data[queue.head];
            if (t.ceng > ceng) {
                System.out.println();
                ceng = t.ceng;
            }
            System.out.print(t.data + " ");
            queue.head++;
            if (t.left == null)
                continue;
            t.left.ceng = t.ceng + 1;
            queue.data[queue.tail] = t.left;

            queue.tail++;
            if (t.right == null)
                continue;
            t.right.ceng = t.ceng + 1;
            queue.data[queue.tail] = t.right;
            queue.tail++;
        }
    }
}