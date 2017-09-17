#include <bits/stdc++.h>
using namespace std;
int main(){
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios::sync_with_stdio(false);
    string s;
    set <string> words;
    while(getline(cin, s)){
        for(int i = 0; i < s.size(); i++){
            if(isalpha(s[i])) s[i] = tolower(s[i]);
            else s[i] = ' ';
        }
        istringstream ss(s);
        string tmp;
        while(ss >> tmp){
            words.insert(tmp);
        }
    }
    for(string w: words) cout << w << "\n";
    return 0;
}
