#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, l, r, x, cnt, num[10005];
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++)
        scanf("%d", &num[i]);
    for(int i = 0; i < m; i++){
        cnt = 0;
        scanf("%d %d %d", &l, &r, &x);
        for(int j = l - 1; j < r; j++){
            if(num[j] < num[x - 1])
                cnt++;
        }
        if(l + cnt == x) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
