#include <bits/stdc++.h>
using namespace std;
int dp[105][105];
char str1[105], str2[105];
int main(){
    int caseno = 1, len1, len2;
    while(gets(str1) && str1[0] != '#'){
        gets(str2);
        len1 = strlen(str1);
        len2 = strlen(str2);
        for(int i = 1; i <= len1; i++){
            for(int j = 1; j <= len2; j++){
                if(str1[i - 1] == str2[j - 1])
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
        printf("Case #%d: you can visit at most %d cities.\n", caseno++, dp[len1][len2]);
    }
    return 0;
}
