#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s = "ROYG";
    cin >> n;
    for(int i = 0; i < n - 3; i++) cout << s[i % 4];
    cout << "BIV\n";
    return 0;
}
