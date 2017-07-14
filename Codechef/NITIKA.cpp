#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    string s, tmp;
    vector <string> split;
    cin >> t;
    cin.ignore();
    while(t--){
        tmp = "";
        getline(cin, s);
        s.insert(s.end(), 1, ' ');
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ' '){
                split.push_back(tmp);
                tmp = "";
            }
            else tmp = tmp + s[i];
        }
        for(int i = 0; i < split.size() - 1; i++){
            tmp = split[i];
            cout << (char)toupper(tmp[0]) << '.' << " ";
        }
        tmp = split.back();
        for(int i = 0; i < tmp.size(); i++){
            if(i == 0) cout << (char)toupper(tmp[i]);
            else cout << (char)tolower(tmp[i]);
        }
        cout << "\n";
        split.clear();
    }
    return 0;
}
