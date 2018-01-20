#include <bits/stdc++.h>
using namespace std;
int main(){
    int x, y, h, m, cnt = 0;
    cin >> x >> h >> m;
    while(1){
        if(h == 7 || h == 17 || m == 7 || m == 17 || m == 27 || m == 37 || m == 47 || m == 57) break;
        m -= x;
        cnt++;
        if(m < 0){
            m = m + 60;
            h--;
            if(h < 0) h = h + 24;
        }
    }
    cout << cnt << "\n";
    return 0;
}
