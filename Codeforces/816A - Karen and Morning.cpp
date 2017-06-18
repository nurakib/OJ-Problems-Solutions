#include <bits/stdc++.h>
using namespace std;
int main(){
    int h, m, ans = 0;
    scanf("%d:%d", &h, &m);
    while(h / 10 != m % 10 || h % 10 != m / 10){
        m++;
        if(m == 60) m = 0, h++;
        if(h == 24) h = 0;
        ans++;
    }
    printf("%d\n", ans);
    return 0;
}
