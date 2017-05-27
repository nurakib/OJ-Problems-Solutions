#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, a, b, c, ans = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d %d %d", &a, &b, &c);
        if((a == 1 && b == 1) || (b == 1 && c == 1) || (a == 1 && c == 1))
            ans++;
    }
    printf("%d\n", ans);
    return 0;
}
