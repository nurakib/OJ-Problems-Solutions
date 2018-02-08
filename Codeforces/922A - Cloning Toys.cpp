#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, tmp;
    cin >> a >> b;
    tmp = a - b + 1;
    if(tmp == 0 || (tmp % 2 == 0 && tmp >= 0 && a > 0 && b > 1))
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}
