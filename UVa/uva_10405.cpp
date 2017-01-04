#include <bits/stdc++.h>
using namespace std;
#define MAX 1005
int dp[MAX][MAX];
int main(){
    int len1, len2;
    string str1, str2;
    while(getline(cin, str1)){
        getline(cin, str2);
        len1 = str1.size();
        len2 = str2.size();
        for(int i = 1; i <= len1; i++){
            for(int j = 1; j <= len2; j++){
                if(str1[i - 1] == str2[j - 1])
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
        cout << dp[len1][len2] << endl;
    }
    return 0;
}
