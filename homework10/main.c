//递归和非递归分别实现求第n个斐波那契数


//递归
/*
#include <stdio.h>
int fib(int n);

int main() {
    int n = 0;
    scanf("%d" , &n);
    int m = fib(n);
    printf("%d" , m);
    return 0;
}
int fib(int n){
    if(n == 1 || n == 2){
        return 1;
    }else{
        return fib(n-2)+ fib(n-1);
    }
    return 0;
}*/


//非递归
/*
#include <stdio.h>
int swap(int* a , int* b){
    int c = *a ;
    *a = *b;
    *b = c;
}
int fib(int n){
    int i = 0;
    int a = 1 , b = 1;
    if(n == 1 || n == 2)
        return 1;
    else{
        for (int j = 0; j < n-2; ++j) {
            a = a + b;
            swap(&a,&b);
        }
        printf("%d" , b);
    }
}
int main(){
    int n;
    scanf("%d" , &n);
    fib(n);
}
*/


//编写一个函数实现n的k次方，使用递归实现。
/*
#include <stdio.h>
int square(int n , int k);
int main(){
    int n = 0;
    int k = 0;
    scanf("%d %d" ,&n , &k);
    int num = square(n , k);
    printf("%d" , num);
}
int square(int n , int k){
    if(k <= 0){
        return 1;
    } else{
        return n * square(n , k-1);
    }
}*/

/*
//计算一个数的每位之和（递归实现）

#include <stdio.h>

int sum(int n );
int main(){
    int n;
    scanf("%d" , &n);
    int i = sum(n);
    printf("%d" , i);
}
int sum(int n ){
    int i = n%10;
    n = n / 10;
    if(i >= 1){
        return i + sum(n);
    } else{
        return i;
    }
}
*/



// 编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//要求：不能使用C函数库中的字符串操作函数。
//比如:
//char arr[] = "abcdef";
//逆序之后数组的内容变成：fedcba

#include <stdio.h>
#include <string.h>

void reverse_string(char* p){
    int len = strlen(p);
    char tmp = *p;
    *p = *(p + len - 1);
    *(p + len - 1) = '/0';
    if(strlen(p + 1) >= 2)
        reverse_string(p++);
    *t
}

int main (){
    char arr[]= "abcdef";
    int len = (sizeof(arr) / sizeof (arr[0])) - 1 ;

}








