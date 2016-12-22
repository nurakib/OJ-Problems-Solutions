#include <bits/stdc++.h>
using namespace std;
int main(){
    int caseno = 1, n, q, t, ans, num[10000];
    while(scanf("%d %d", &n, &q) == 2 && n && q){
        printf("CASE# %d:\n", caseno++);
        for(int i = 0; i < n; i++)
            scanf("%d", &num[i]);
        sort(num, num + n);
        while(q--){
            scanf("%d", &t);
            int ans = lower_bound(num, num + n, t) - num;
            if(num[ans] == t)
                printf("%d found at %d\n", t, ans + 1);
            else
                printf("%d not found\n", t);
        }
    }
    return 0;
}
