#include <bits/stdc++.h>
using namespace std;
int main(){
    long long i, n, m;
    while(cin >> m){
        n = 1;
        for(i = 1; ; i++){
            if(i % 2 == 0) n *= 2;
            else n *= 9;
            if(n >= m) break;
        }
        if(i % 2) cout << "Stan wins." << endl;
        else cout << "Ollie wins." << endl;
    }
    return 0;
}
