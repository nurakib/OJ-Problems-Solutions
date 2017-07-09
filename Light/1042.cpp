#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, n;
    long long ans;
    vector <int> num;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        ans = 0;
        scanf("%d", &n);
        while(n){
            num.push_back(n % 2);
            n /= 2;
        }
        num.push_back(0);
        reverse(num.begin(), num.end());
        next_permutation(num.begin(), num.end());
        for(int j = num.size() - 1, k = 0; j >= 0; j--, k++)
            ans += num[j] * 1 << k;
        printf("Case %d: %d\n", i, ans);
        num.clear();
    }
    return 0;
}
