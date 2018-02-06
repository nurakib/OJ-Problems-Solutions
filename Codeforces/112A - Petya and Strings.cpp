#include <bits/stdc++.h>
using namespace std;
int main(){
    string a, b;
    cin >> a >> b;
    for(int i = 0; i < a.size(); i++){
        if(a[i] >= 65 && a[i] <= 90) a[i] += 32;
        if(b[i] >= 65 && b[i] <= 90) b[i] += 32;
        if((int)a[i] > (int)b[i]){
            cout << 1 << "\n";
            return 0;
        }
        if((int)a[i] < (int)b[i]){
            cout << -1 << "\n";
            return 0;
        }
    }
    cout << 0 << "\n";
    return 0;
}
