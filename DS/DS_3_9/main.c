
/**
 * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
 *
 *
 * @param originalStr string字符串 原始字符串
 * @return string字符串
 */
#include <stdio.h>
/*
char* ConvertString(char* originalStr )
//     write code here
{
    int i = 0;
    int n = 0;
    int dst = 0;
    while (originalStr[i] != '\0') {
        if (originalStr[i] == '(') {
            n++;
            i++;
            dst++;
            continue;
        } else if (originalStr[i] == ')') {
            n--;
            dst++;
        }
        if (n > 0 && i == dst ) {
            originalStr[i] = '*';
            i++;
            continue;
        }else if (n>0 && i != dst) {
            int src = i;
            while (originalStr[src]) {
                originalStr[src] = originalStr[src+1];
                src++;
            }
            continue;
        }
        i++;
        dst++;
    }
    return originalStr;

}
int main(){
    char *a = "(happy)(year)";
    char* s = ConvertString(a);
    int i = 0;
    printf("%s",a);
}*/



 
/*
//给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素，并返回移除后数组的新长度。
//
//不要使用额外的数组空间，你必须仅使用 O(1) 额外空间并 原地 修改输入数组。
//
//元素的顺序可以改变。你不需要考虑数组中超出新长度后面的元素。
int changeArr(int arr[],int val,int len){

    int pos = 0;
    int src = 0;
    for (int i = 0;i<len;i++) {
        if (arr[i] != val) {
            arr[pos++] = arr[src++];
        }else{
            src++;
        }
    }
    return pos;

}
int main(){
    int nums[] = {1,1,2,3,3,5};
    int val = 3;
    int len = sizeof(nums)/sizeof(nums[0]);
    int res = changeArr(nums,val,len);
    printf("%d\n",res);
    for (int i = 0; i < res; ++i) {
        printf("%d ",nums[i]);
    }

}*/
/*

//给你一个 非严格递增排列 的数组 nums ，
// 请你 原地 删除重复出现的元素，使每个元素 只出现一次 ，返回删除后数组的新长度。
// 元素的相对顺序应该保持一致 。然后返回 nums 中唯一元素的个数。
//考虑 nums 的唯一元素的数量为 k ，你需要做以下事情确保你的题解可以被通过：
// 更改数组 nums ，使 nums 的前 k 个元素包含唯一元素，并按照它们最初在 nums 中出现的顺序排列。nums 的其余元素与 nums 的大小不重要。
//返回 k 。
int changeArr(int arr[],int len){
    int pos =0;
    int src = 0;
    for (src = 0; src < len; ++src) {
        if (arr[pos] != arr[src]) {
            arr[++pos] = arr[src];
        }
    }
    return pos+1;
}

int main(){
    int nums[] = {1,2,2,3,3,5,5};
    int len = sizeof(nums)/sizeof (nums[0]);
    int res = changeArr(nums,len);
    printf("%d\n",res);
    for (int i = 0;i<res;++i) {
        printf("%d ",nums[i]);
    }
}

*/


//给你两个按非递减顺序排列的整数数组nums1 和 nums2，另有两个整数 m 和 n
//分别表示 nums1 和 nums2 中的元素数目。
//合并 nums2 到 nums1 中，使合并后的数组同样按 非递减顺序 排列。

int mergeArr(int nums1[], int m, int nums2[], int n) {
    int i = m-1;
    int j = n-1;
    for(int k = m+n-1; k>= 0;k--){
        if(j<0){
            break;
        }
        if(i<0){
            nums1[k] = nums2[j];
            j--;
            continue;
        }
        if(nums1[i]>nums2[j]){
            nums1[k] = nums1[i];
            i--;
        }else{
            nums1[k] = nums2[j];
            j--;
        }
    }
}

int main(){
    int nums1[] = {1,2,3,0 ,0};
    int nums2[] = {2,5};
    int m = sizeof(nums1)/sizeof(nums1[0])-2;
    int n = sizeof(nums2)/sizeof(nums2[0]);
    mergeArr(nums1,m,nums2,n);
    for (int i = 0;i<m+n;++i) {
        printf("%d ",nums1[i]);
    }
}