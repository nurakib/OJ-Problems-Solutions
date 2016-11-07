#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, n, a, b, d, w;
    string s;
    cin >> t;
    for(int i = 1; i <= t; i++){
        a = b = w = d = 0;
        cin >> n;
        cin >> s;
        for(int j = 0; j < n; j++){
            if(s[j] == 'B') b++;
            else if(s[j] == 'W') w++;
            else if(s[j] == 'T') d++;
            else a++;
        }
        if(a == n && d == 0)
            cout << "Case " << i << ": " << "ABANDONED" << endl;
        else if(b == n || b == n - a)
            cout << "Case " << i << ": " << "BANGLAWASH" << endl;
        else if(w == n || w == n - a)
            cout << "Case " << i << ": " << "WHITEWASH" << endl;
        else if(b > w)
            cout  << "Case " << i << ": " << "BANGLADESH" << " " << b  << " - " << w << endl;
        else if(b < w)
            cout  << "Case " << i << ": " << "WWW" << " " << w  << " - " << b << endl;
        else if(b == w)
            cout << "Case " << i << ": " << "DRAW" << " " << b << " " << d << endl;
    }
    return 0;
}
