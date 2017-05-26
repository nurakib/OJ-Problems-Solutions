#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, mod, div, sum = 0;
    scanf("%d %d", &a, &b);
    sum = a;
    while(a >= b){
        div = a / b;
        sum += div;
        mod = a % b;
        a = div + mod;
    }
    printf("%d\n", sum);
    return 0;
}
