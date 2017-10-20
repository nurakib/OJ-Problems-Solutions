#include <bits/stdc++.h>
using namespace std;
int main(){
    int r, a, cs = 0;
    double tmp;
    while(cin >> r >> a){
        if(r == 0 && a == 0) break;
        cout << "Case " << ++cs << ": ";
        tmp = r - a;
        tmp /= (double)a;
        if(tmp < 0) cout << 0 << "\n";
        else if((int)tmp == tmp && tmp <= 26) cout << tmp << "\n";
        else if((int)tmp != tmp && ceil(tmp) <= 26) cout << ceil(tmp) << "\n";
        else cout << "impossible" << "\n";
    }
    return 0;
}
