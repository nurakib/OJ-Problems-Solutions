#include <bits/stdc++.h>
using namespace std;
int main(){
    char str1[300], str2[300];
    while(scanf("%s %s", str1, str2) == 2){
        int pos, num1[300] = {0}, num2[300] = {0}, ans[1000] = {0};
        int len1 = strlen(str1);
        int len2 = strlen(str2);
        for(int i = len1 - 1, j = 0; i >= 0; i--, j++) num1[j] = str1[i] - '0';
        for(int i = len2 - 1, j = 0; i >= 0; i--, j++) num2[j] = str2[i] - '0';
        for(int i = 0; i < len1; i++){
            for(int j = 0; j < len2; j++){
                ans[i + j] += num1[i] * num2[j];
                ans[i + j + 1] += ans[i + j] / 10;
                ans[i + j] %= 10;
            }
        }
        for(pos = len1 + len2 - 1; ans[pos] == 0 && pos > 0; pos--);
        for(int i = pos; i >= 0; i--) printf("%d", ans[i]);
        printf("\n");
    }
    return 0;
}
