#include <bits//stdc++.h>
using namespace std;
int main(){
    int t, l;
    string s;
    cin >> t;
    while(t--){
        cin >> s;
        l = s.length();
        if(l > 10)
            cout << s[0] << l - 2 << s[l - 1] << endl;
        else
            cout << s << endl;
    }
    return 0;
}
