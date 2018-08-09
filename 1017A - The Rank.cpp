#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b, c, d, tmp, check, ans;
    vector <int> num;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a >> b >> c >> d;
        if(i == 0) check = a + b + c + d;
        tmp = a + b + c + d;
        num.push_back(tmp);
    }
    sort(num.rbegin(), num.rend());
    for(int i = 0; i < n; i++){
        if(num[i] == check){
            ans = i + 1;
            break;
        }
    }
    cout <<ans << "\n";
    return 0;
}
