#include <bits/stdc++.h>
using namespace std;
int main(){
    set <char> st;
    string s;
    int n, sz;
    cin >> s >> n;
    for(int i = 0; i < s.size(); i++) st.insert(s[i]);
    sz = st.size();
    if(s.size() < n) cout << "impossible" << "\n";
    else{
        if(n - sz < 0) cout << 0 << "\n";
        else cout << n - sz << "\n";
    }
    return 0;
}
