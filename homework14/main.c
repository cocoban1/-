#define _CRT_SECURE_NO_WARINGS 1
//交换两个变量（不创建临时变量）
#include<stdio.h>
//int main() {
//	int a = 3, b = 4;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d \n",a,b);
//}
/*
*/


////写一个函数返回参数二进制中 1 的个数。
//
//
//int main() {
//	int n = 0,count = 0;
//	scanf_s("%d", &n);
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	printf("%d", count);
//
// }
//
//

//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//
//int main() {
//	int n = 0, odd = 0, even = 0;
//	scanf_s("%d", &n);
//	for (int i = 30; i >= 0; i -= 2)
//	{
//		even = n >> i;
//		printf("%d ", (even & 1));
//	}
//	printf("\n");
//
//	for (int i = 31; i >= 1; i -= 2)
//	{
//			odd = n >> i;
//			printf("%d ", (odd & 1));
//	}
//}



/*编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
输入例子 :
1999 2299*/
//int num_of_1(int n) {
//	int count = 0;
//	while (n)
//	{
//			n = n & (n - 1);
//			count++;
//	}
//	return count;
//}
//int main() {
//	int a = 0, b = 0;
//	scanf_s("%d %d", &a, &b);
//	int num = num_of_1(a ^ b);
//	printf("%d", num);
//
//}