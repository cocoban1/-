#include<stdio.h>
//int main() {
//	int a = 0, b = 0;
//
//	for (a = 1; a <= 9; a++) {
//		for (b = 1; b <= 9; b++) {
//			printf("%d*%d=%d ", a, b, a * b);
//			//����˷���
//			if (a * b < 10) {
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}



//��10 �����������ֵ
//
//int main() {
//	int arr[10];
//	int i = 0;
//	int max = 0;
//	for (i = 0; i < 10; i++) {
//		scanf_s("%d", &arr[i]);
//	}
//	for ( i = 0; i < 10; i++)
//	{
//		if (arr[i] >= max) {
//			max = arr[i];
//		}
//	}
//	printf("%d" , max);
//}


//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����

//int main() {
//	double a = 1, b = 1;
//	int i = 1;
//	double sum = 0;
//	for (b = 1; b <= 100; b++,i++) {
//		if (i % 2 == 0) {
//			sum = sum - (a / b);
//		}
//		else {
//			sum = sum + (a / b);
//		}
//	}
//	printf("%.6f", sum);
//}






//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9

//int main() {
//	int a = 0, i = 0;
//	for ( i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9) {
//			a++;
//		}
//		if (i / 10 == 9) {
//			a++;
//		}
//	}
//	printf("%d" ,a);
//}




//��д������һ���������������в��Ҿ����ĳ����
//
//Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����
int find(int arr[], int length, int a) {
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == a) {
            return i;
        }
    }
    return -1;
}
int main() {
    int arr[] = { 1,5,3,8,7,9,4 };
    int a = 0;
    int length = sizeof(arr) / sizeof(int);
    scanf_s("%d", &a);
    int b = find(arr,length, a);
    if (b == -1) {
        printf("�Ҳ���");
    }else {
        printf("%d" ,b);
    }
    return 0;
}