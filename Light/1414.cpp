#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    char ch;
    long long d1, d2, y1, y2, ans;
    string m1, m2;
    cin >> t;
    for(int caseno = 1; caseno <= t; caseno++){
        cin >> m1 >> d1 >> ch >> y1;
        cin >> m2 >> d2 >> ch >> y2;
        if(m1 != "January" && m1 != "February") y1++;
        if(m2 == "January" || (m2 == "February" && d2 < 29)) y2--;
        ans = (y2/4 - y2/100 + y2/400) - ((y1 - 1)/4 - (y1 - 1)/100 + (y1 - 1)/400);
        cout << "Case " << caseno << ": " << ans << "\n";
    }
    return 0;
}
