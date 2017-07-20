#include <bits/stdc++.h>
using namespace std;
map <string, int> mp;
int main(){
    int n;
    string tmp;
    cin >> n;
    while(n--){
        cin >> tmp;
        if(mp.count(tmp) == 0){
            cout << "OK" << "\n";
            mp[tmp] = 1;
        }
        else{
            cout << tmp << mp[tmp] << "\n";
            mp[tmp]++;
        }
    }
    return 0;
}
