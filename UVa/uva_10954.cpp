#include <bits/stdc++.h>
using namespace std;
#define pb push
int main(){
    int n, tmp;
    while(scanf("%d", &n) == 1 && n) {
        priority_queue< int, vector<int>, greater<int> >  v;
        for(int i = 0; i<n; i++){
            scanf("%d", &tmp);
            v.pb(tmp);
        }
        int sum = 0;
        while(v.size() > 1){
            int a = v.top();
            v.pop();
            int b = v.top();
            v.pop();
            sum += a+b;
            v.pb(a+b);
        }
        printf("%d\n", sum);
    }
    return 0;
}
