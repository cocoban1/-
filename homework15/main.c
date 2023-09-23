#define _CRT_SECURE_NO_WARINGS 1
#include <stdio.h>
/*
输入两个升序排列的序列，将两个序列合并为一个有序序列并输出。
输入描述：
输入包含三行，
第一行包含两个正整数n, m，用空格分隔。n表示第二行第一个升序序列中数字的个数，m表示第三行第二个升序序列中数字的个数。
第二行包含n个整数，用空格分隔。
第三行包含m个整数，用空格分隔。
输出描述：
输出为一行，输出长度为n + m的升序序列，即长度为n的升序序列和长度为m的升序序列中的元素重新进行升序序列排列合并。*/



int main() {
    int m, n;
    scanf_s("%d %d", &n, &m);
    int i, j;
    int arr1[1000] = { 0 };
    int arr2[1000] = { 0 };
    for (i = 0; i < n; i++) {
        scanf_s("%d", &arr1[i]);
    }
    for (i = 0; i < m; i++) {
        scanf_s("%d", &arr2[i]);
    }
    i = 0; j = 0;
    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            printf("%d ", arr1[i++]);
        }
        else {
            printf("%d ", arr2[j++]);
        }
    }

    if (i == n && j < m) {
        while (j < m) {
            printf("%d ", arr2[j]);
            j++;
        }
    }
    else {
        while (i < n) {
            printf("%d ", arr1[i]);
            i++;
        }
        return 0;
    }
}



