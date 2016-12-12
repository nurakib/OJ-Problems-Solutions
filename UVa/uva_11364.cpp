#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, n, s[100];
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 0; i < n; i++)
            cin >> s[i];
        sort(s, s + n);
        cout << 2 * (s[n - 1] - s[0]) << endl;
    }
    return 0;
}
