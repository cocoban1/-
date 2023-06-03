#include <stdio.h>


//交换数组
/*
int main() {
   int arr1[] = { 1,2 ,3};
   int arr2[] = { 4, 5, 6};
   int n = 0;
    int len =sizeof(arr1)/ sizeof (arr1[0]);
    for (int i = 0; i < len ; i++) {
        n = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = n;
    }
    printf("%d %d %d\n" , arr1[0], arr1[1],arr1[2]);
    printf("%d %d %d\n" , arr2[0], arr2[1],arr2[2]);
}
*/

//创建一个整形数组，完成对数组的操作
//
//1.实现函数init() 初始化数组为全0
//2.实现print()  打印数组的每个元素
//3.实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。
/*
void reverse(int* arr , int len){
    int n = 0;
    int i = 0;
    while (i < len-i-1){
        n = arr[i];
        arr[i] = arr[len-1-i];
        arr[len -1-i] = n;
        i++;
    }
}
void print(int* arr , int len){
    for (int i = 0; i < len; ++i) {
        printf("%d " ,arr[i]);
    }
    printf("\n");
}
void init(int* arr,int len){
    for (int i = 0; i < len; ++i)
        arr[i] = 0;
}
int main(){
    int arr[] = {1,2,3,4,5,6};
    int len = sizeof(arr)/ sizeof(arr[0]);
    print(arr,len);
    reverse(arr,len);
    print(arr , len);
    init(arr, len);
    print(arr,len);
}
*/
/*
//实现一个对整形数组的冒泡排序
void maoPao(int* arr , int len){
    int t= 0;
    for (int i = 0; i < len-1; ++i) {
        for(int j = 0; j < len -i- 1; j++){
            if(arr[j] > arr[j+1]){
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j +1] = t;
            }
        }
    }
}
void print(int* arr , int len){
    for (int i = 0; i < len; ++i) {
        printf("%d " ,arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[] = {6,5,4,2,3,1};
    int len = sizeof(arr) / sizeof (arr[0]);
    maoPao(arr , len);
    print(arr, len);
}*/