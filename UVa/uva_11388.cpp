#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, a, b;
    scanf("%d", &t);
    while(t--){
        scanf("%d %d", &a, &b);
        if(b % a == 0) printf("%d %d\n", a, b);
        else printf("-1\n");
    }
    return 0;
}
