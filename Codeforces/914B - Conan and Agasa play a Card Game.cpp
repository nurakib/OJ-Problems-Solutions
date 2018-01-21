#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, tmp, fl = 0;
    map <int, int> num;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        num[tmp]++;
    }
    for(auto it = num.begin(); it != num.end(); it++){
        if(it->second % 2) {
            fl = 1;
            break;
        }
    }
    if(fl % 2 == 0) cout << "Agasa\n";
    else cout << "Conan\n";
    return 0;
}
