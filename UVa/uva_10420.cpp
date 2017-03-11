#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    string s1, s2;
    map <string, int> mp;
    cin >> t;
    cin.ignore();
    for(int i = 0; i < t; i++){
        cin >> s1;
        getline(cin, s2);
        mp[s1]++;
    }
    map<string, int>::iterator it;
    for(it = mp.begin(); it != mp.end(); it++){
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}
