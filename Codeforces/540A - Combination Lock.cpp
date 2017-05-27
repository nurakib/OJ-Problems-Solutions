#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, tmp, res = 0;
    string a, b;
    scanf("%d", &n);
    cin >> a >> b;
    for(int i = 0; i < n; i++){
        tmp = abs((a[i] - 48) - (b[i] - 48));
        if(tmp > 5) res += (10 - tmp);
        else res += tmp;
    }
    printf("%d\n", res);
    return 0;
}
