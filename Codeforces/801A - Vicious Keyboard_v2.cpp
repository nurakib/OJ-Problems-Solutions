#include<bits/stdc++.h>
using namespace std;
int main(){
    int ans = 0, ext = 0;
    string s;
    cin >> s;
    while(s.find("VK") != -1){
        ans++;
        s.replace(s.find("VK"), 2, "AA");
    }
    cout << ((s.find("VV") !=-1 || s.find("KK")!=-1) ? ++ans : ans) << "\n";
    return 0;
}
