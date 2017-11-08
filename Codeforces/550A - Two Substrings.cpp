#include <bits/stdc++.h>
using namespace std;
int main(){
    char s[100005], *pos;
    cin >> s;
    if((pos = strstr(s, "AB")) && strstr(pos + 2, "BA"))
        cout << "YES\n";
    else if((pos = strstr(s, "BA")) && strstr(pos + 2, "AB"))
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
