#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, n, ans;
    double tmp;
    scanf("%d", &t);
    for(int caseno = 1; caseno <= t; caseno++){
        ans = 0;
        tmp = 1.0;
        scanf("%d", &n);
        while(tmp > 0.5){
            tmp = tmp * (n - ans) / n;
            ans++;
        }
        printf("Case %d: %d\n", caseno, ans - 1);
    }
    return 0;
}
