#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, a1, a2, b1, b2, dif1, dif2, ans;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cin >> a1 >> a2 >> b1 >> b2;
        dif1 = abs(a1 - b1);
        dif2 = abs(a2 - b2);
        if(dif1 == dif2)
            cout << "Case " << i << ": " << 1 << "\n";
        else if((dif1 % 2 == 0 && dif2 % 2 == 0) || (dif1 % 2 != 0 && dif2 % 2 != 0))
            cout << "Case " << i << ": " << 2 << "\n";
        else
            cout << "Case " << i << ": " << "impossible" << "\n";
    }
    return 0;
}
