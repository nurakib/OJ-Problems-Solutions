#include <bits/stdc++.h>
using namespace std;
int main(){
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    map <string, string> mp;
    int t, q;
    string a, b, tmp;
    cin >> t;
    cin.ignore();
    while(t--){
        getline(cin, a);
        getline(cin, b);
        mp.insert(pair<string, string>(a, b));
    }
    cin >> q;
    cin.ignore();
    while(q--){
        getline(cin, tmp);
        map <string, string> :: iterator it;
        for(it = mp.begin(); it != mp.end(); it++){
            if(it->first == tmp)
                cout << it->second << "\n";
        }
    }
    return 0;
}
