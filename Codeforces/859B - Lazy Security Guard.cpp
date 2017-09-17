#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    double tmp = sqrt(n);
    double tmp2 = tmp - (int)tmp;
    if(tmp == (int)tmp) cout << 4 * tmp << "\n";
    else if(tmp2 >= .5000) cout << 2 * (int)tmp + 2 * ((int)tmp + 1) + 2 << "\n";
    else cout << 2 * (int)tmp + 2 * ((int)tmp + 1) << "\n";
    return 0;
}
