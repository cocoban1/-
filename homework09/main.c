//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9*9口诀表，输出12，输出12*12的乘法口诀表。

#include <stdio.h>

/*
void nineDemo(int n){
    for(int i = 1 ; i <= n ; i++){
        for (int a = 1 ; a <= n ; a++){
            if(a <= i){
                printf("%d*%d=%d" , i , a , i*a);
                if(i * a < 10 )
                    printf(" ");
                if( a < 10 )
                    printf(" ");
                if( i < 10 )
                    printf(" ");
                if(i * a < 100)
                    printf(" ");
            }
        }
        printf("\n");
    }
};
int main(){
    int n = 0;
    scanf("%d" , &n);
    nineDemo(n);
}*/

//实现一个函数来交换两个整数的内容
/*
void swap(int* pa , int* pb){
    int i = 0;
    i = *pa;
    *pa = *pb;
    *pb = i;
}

int main (){
    int a = 0, b = 0;
    scanf("%d %d" ,& a , &b);
    printf("%d %d\n" , a ,b);
    swap(&a , &b);
    printf("%d %d\n", a ,b );
}*/


//函数实现判断是不是闰年
/*
int leapYear(int year){
    if(year % 100 == 0){
        if(year % 400 == 0){
            return 1;
        } else{
            return 0;
        }
    } else if(year % 4 == 0){
        return 1;
    }
    return 0;
}

int main(){
    int year = 0;
    scanf("%d" , &year);
    int i = leapYear(year);
    if(i == 1){
        printf("是闰年");
    }else{
        printf("不是闰年");
    }
}*/




//实现一个函数，判断一个数是不是素数。
//利用上面实现的函数打印100到200之间的素数。



int primeNumber(int a){
    for(int i = 2 ; i < a ; i++){
        if(i % a == 0){
            return 0;
        }
    }
    return a;
}
int main(){
int a = 0;

    for (int i = 100; i <= 200; ++i) {
        int b = primeNumber(i);
        if(b != 0 ){
            printf("%d " , b);
        }
    }
}