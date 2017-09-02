#include <bits/stdc++.h>
using namespace std;
bool check(string a, string b){
    if(a.size() > b.size()) return false;
    else{
        for(int i = 0; i < a.size(); i++)
            if(a[i] != b[i]) return false;
        return true;
    }
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int caseno = 1;
    string tmp;
    vector <string> v;
    while(cin >> tmp){
        if(tmp == "9"){
            bool valid = true;
            for(int i = 0; i < v.size() && valid; i++){
                for(int j = 0; j < v.size() && valid; j++){
                    if(i == j) continue;
                    if(check(v[i], v[j])) valid = false;
                }
            }
            if(valid) cout << "Set " << caseno++ << " is immediately decodable" << "\n";
            else cout << "Set " << caseno++ << " is not immediately decodable" << "\n";
            v.clear();
        }
        else
            v.push_back(tmp);
    }
    return 0;
}
