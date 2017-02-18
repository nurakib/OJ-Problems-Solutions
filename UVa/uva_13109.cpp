#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, n, w, tmp, cnt, e[100005];
    scanf("%d", &t);
    while(t--){
        tmp = cnt = 0;
        scanf("%d %d", &n, &w);
        for(int i = 0; i < n; i++)
            scanf("%d", &e[i]);
        sort(e, e + n);
        for(int i = 0; i < n; i++){
            tmp += e[i];
            cnt++;
            if(tmp > w){
                cnt--;
                break;
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}
