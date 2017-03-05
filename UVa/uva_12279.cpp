#include <bits/stdc++.h>
using namespace std;
int main(){
    int caseno = 0, n, x, tmp, cnt;
    while(scanf("%d", &n) == 1 && n){
        x = n;
        cnt = 0;
        while(n--){
            scanf("%d", &tmp);
            if(tmp == 0)
                cnt++;
        }
        printf("Case %d: %d\n", ++caseno, x - 2 * cnt);
    }
    return 0;
}
