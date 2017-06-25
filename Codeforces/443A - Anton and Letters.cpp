#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int main(){
    IOS;
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    set <char> ans;
    char ch;
    while(cin >> ch){
        if(isalpha(ch)) ans.insert(ch);
    }
    cout << ans.size() << "\n";
    return 0;
}
