#include <bits/stdc++.h>
using namespace std;
int gcdExtended(int a, int b, int *x, int *y){
    if(a == 0){
        *x = 0;
        *y = 1;
        return b;
    }
    int x1, y1;
    int gcd = gcdExtended(b % a, a, &x1, &y1);
    *x = y1 - (b / a) * x1;
    *y = x1;
    return gcd;
}
int main(){
    int x, y, a, b, g;
    while(scanf("%d %d", &a, &b) == 2){
        g = gcdExtended(a, b, &x, &y);
        if(a == b) printf("%d %d %d\n", min(x, y), max(x, y), g);
        else printf("%d %d %d\n", x, y, g);
    }
    return 0;
}
