package com.example;

import java.util.Arrays;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;
import java.util.Stack;

/**
 * Hello world!
 *
 */
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
