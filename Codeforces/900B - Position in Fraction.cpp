#include <bits/stdc++.h>
using namespace std;
#define MAX 1e5
int main(){
    int a, b, c, tmp, cnt = 1;
    cin >> a >> b >> c;
    while(cnt != MAX){
        if(a < b) a *= 10;
        if(a < b) tmp = 0;
        else tmp = a / b;
        a = a % b;
        if(tmp == c) {
            cout << cnt << "\n";
            return 0;
        }
        cnt++;
    }
    cout << -1 << "\n";
    return 0;
}
