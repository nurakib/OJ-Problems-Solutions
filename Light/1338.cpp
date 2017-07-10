#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    string a, b;
    multiset <char> foo, var;
    cin >> t;
    cin.ignore();
    for(int caseno = 1; caseno <= t; caseno++){
        getline(cin, a);
        getline(cin, b);
        for(int i = 0; i < a.size(); i++)
            if(a[i] != ' ') foo.insert(tolower(a[i]));
        for(int i = 0; i < b.size(); i++)
            if(b[i] != ' ') var.insert(tolower(b[i]));
        if(foo == var) cout << "Case " << caseno << ": " << "Yes" << "\n";
        else cout << "Case " << caseno << ": " << "No" << "\n";
        foo.clear(); var.clear();
    }
    return 0;
}
