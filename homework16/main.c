#define _CRT_SECURE_NO_WARINGS 1
#include <stdio.h>
/*
写一个函数打印arr数组的内容，不使用数组下标，使用指针。
arr是一个整形一维数组。*/
//
//int main() {
//	int arr[5] = { 1,2,3,4,5 };
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", (*arr) + i);
//	}
//}




//打印水仙花数
/*
#include <math.h>

int main() {
	for (int i = 0; i <= 10000; i++)
	{

		int j = 0,sum = 0;
		int temp = i;
		int num = 0;
		while (temp)
		{
			temp /= 10;
			j++;
		}
		temp = i;
		for (int n = 0; n < j; n++)
		{
			num = temp % 10;
			int num1 = num;
			temp /= 10;
			for (int m = 1; m < j; m++) {
				num *= num1;
			}
			sum = sum + num;
		}
		if (sum == i)
		{
			printf("%d ", sum);
		}
	}

}*/



//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
//例如：2+22+222+2222+22222

/*
int main() {
	int a = 0;
	int sum = 0;
	scanf_s("%d", &a);
	for (int i = 0; i < 5; i++)
	{
		for (int j = i; j < 5; j++)
		{
			sum = sum + a;
		}
		a *= 10;
	}
	printf("%d", sum);
}
*/


//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水（编程实现）。



int main() {
    int money = 20;
    int total = money;
    int empty = total;
    while (empty >= 2)
    {
        total += empty / 2;
        empty = empty / 2 + empty % 2;
    }
    if (empty == 1)
    {
        total++;
    }
    printf("可以喝%d瓶汽水", total);
}