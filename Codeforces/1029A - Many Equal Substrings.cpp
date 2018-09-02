#include <bits/stdc++.h>
using namespace std;
int main(){
    int i, n, k;
    string s, tmp;
    cin >> n >> k >> s;
    for(i = n - 1; i > 0; i--)
        if(s.substr(0, i) == s.substr(n - i)) break;
    cout << s;
    tmp = s.substr(i);
    while(--k)
       cout << tmp;
    return 0;
}
