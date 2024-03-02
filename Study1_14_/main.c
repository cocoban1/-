/*
#include <stdio.h>
//拷贝文件
int main() {
    FILE *pfRead = fopen("data1.txt","r");
    if(pfRead == NULL){
        perror("open file for read\n");
        return 1;
    }
    FILE *pf = fopen("data.txt","w");
    if(pf == NULL){
        perror("open file for write\n");
        fclose(pfRead);
        pfRead = NULL;
        return 1;
    }
    //读写文件
    int ch = 0;
    while ((ch = fgetc(pfRead))!= EOF){
        fputc(ch,pf);
    }
//关闭文件
    fclose(pf);
    fclose(pfRead);
    pf = NULL;
    pfRead = NULL;
    return 0;
}
*/
/*
int main()
{
    int aa[2][5] = {10,9,8,7,6,5,4,3,2,1};
    int *ptr1 = (int *)(&aa + 1);
    int *ptr2 = (int *)(*(aa + 1));
    printf( "%d,%d", *(ptr1 - 1), *(ptr2 - 1));
    return 0;
}*/

//寻找单身狗1.0
//一个数组中有两个数字是相同的，其他数字都是不同的，找出这两个相同的数字
//使用异或解决
#include <stdio.h>
/*

void find_single_dog(const int *arr, int sz){
    int num = 0;
    for (int i = 0; i <sz ; ++i) {
        num ^= arr[i];
    }
    printf("单身狗是%d",num);
}

int main(){
    int arr[] = {1,2,3,4,1,2,3,4,6};
    int sz = sizeof(arr)/sizeof(int);
    printf("数组大小是%d\n",sz);
    find_single_dog(arr,sz);
}
*/

//寻找单身狗2.0
//一个数组中有两个数字是相同的，其他数字都是不同的，找出这两个相同的数字
//使用异或解决
/*
#include <stdio.h>
#include <stdlib.h>

void find_single_dog2(int *arr, int sz){

}

int main(){
    int arr[] = {1,2,3,4,5,1,2,3,4,6};
    int sz = sizeof(arr)/sizeof(int);
    find_single_dog2(arr,sz);
}*/

/*
//qsort模拟实现
int cmp(const void *a, const void *b) {
    return *(int *) a - *(int *) b;
}

//交换位置
void _swap(void *a, void *b,int size) {
    for (int i = 0; i < size; ++i) {
        char tmp = *((char*)a + i);
        *((char *)a +i) = *((char*)b + i);
        *((char *)b + i) = tmp;
    }
}

//模拟qsort
void my_qsort(int *arr, int count, int size, int(*cmp)(const void *, const void *)) {
    int *p = arr;
    for (int i = 0; i < count - 1; ++i) {
        for (int j = 0; j < count - i - 1; ++j) {
            if (cmp((char *) arr + j* size , (char *) arr + (j+1)*size) > 0) {
                //交换
                _swap((char *) arr + j* size , (char *) arr + (j+1)*size,size);
            }
        }
    }
}

int main() {
    int arr[] = {1, 5, 3, 4};
    int sz = sizeof(arr) / sizeof(int);
    my_qsort (arr, sz, sizeof(int), cmp);
    for(int i = 0;i <sz;++i){
        printf("%d ",arr[i]);
    }
}*/


