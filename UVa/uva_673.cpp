#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    string s;
    cin >> t;
    cin.ignore();
    while(t--){
        stack <char> st;
        getline(cin, s);
        for(int i = 0; i < s.size(); i++){
            if(!st.empty() && s[i] == ')' && st.top() == '(') st.pop();
            else if(!st.empty() && s[i] == ']' && st.top() == '[') st.pop();
            else st.push(s[i]);
        }
        if(st.empty()) cout << "Yes" << "\n";
        else cout << "No" << "\n";
    }
    return 0;
}
