#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n, r;
    while(cin >> n, n){
        r = sqrt(n);
        if(r * r == n)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}
