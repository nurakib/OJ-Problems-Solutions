#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    double a, b, tmp, ans = 10000.0;
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++){
        scanf("%lf %lf", &a, &b);
        tmp = a / b * m;
        ans = min(ans, tmp);
    }
    printf("%.8f\n", ans);
    return 0;
}
