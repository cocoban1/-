#define _CRT_SECURE_NO_WARINGS 1
#include <stdio.h>
/*
дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
arr��һ������һά���顣*/
//
//int main() {
//	int arr[5] = { 1,2,3,4,5 };
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", (*arr) + i);
//	}
//}




//��ӡˮ�ɻ���
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



//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2+22+222+2222+22222

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


//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Ժȶ�����ˮ�����ʵ�֣���



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
    printf("���Ժ�%dƿ��ˮ", total);
}