#include <bits/stdc++.h>
using namespace std;
int main(){
    string str1, str2, str, tmp;
    cin >> str1 >> str2 >> str;
    tmp = str1 + str2;
    sort(tmp.begin(), tmp.end());
    sort(str.begin(), str.end());
    if(tmp == str) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
