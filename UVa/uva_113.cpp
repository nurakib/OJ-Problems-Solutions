#include <bits/stdc++.h>
using namespace std;
int main(){
    int ans;
    double n, p;
    while(scanf("%lf %lf", &n, &p) == 2){
        ans = pow(p, 1 / n) + 0.5;
        printf("%d\n", ans);
    }
    return 0;
}
