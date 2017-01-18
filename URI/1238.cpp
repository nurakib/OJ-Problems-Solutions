#include <bits/stdc++.h>
using namespace std;
int main(){
    int i, t, tmp;
    string a, b;
    scanf("%d", &t);
    while(t--){
        cin >> a >> b;
        tmp = min(a.size(), b.size());
        for(i = 0; i < tmp; i++)
            cout << a[i] << b[i];
        if(i < a.size())
            cout << a.substr(i) << endl;
        else
            cout << b.substr(i) << endl;
    }
    return 0;
}
