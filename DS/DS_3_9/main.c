#include <stdio.h>
/**
 * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
 *
 *
 * @param originalStr string字符串 原始字符串
 * @return string字符串
 */
char* ConvertString(char* originalStr ) {
    // write code here

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
}