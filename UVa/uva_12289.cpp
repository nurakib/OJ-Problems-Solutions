#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(s.size() == 3){
            if((s[0] == 'o' && s[1] == 'n') || (s[0] == 'o' && s[2] == 'e') || (s[1] == 'n' && s[2] == 'e'))
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
        else
            cout << 3 << endl;
    }
    return 0;
}
