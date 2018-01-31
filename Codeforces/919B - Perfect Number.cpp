#include <bits/stdc++.h>
using namespace std;
bool func(int num){
    int res = 0;
    while(num != 0){
        res += num % 10;
        num /= 10;
    }
    if(res == 10) return true;
    return false;
}
int main(){
    int n;
    vector <int> ans;
    cin >> n;
    for(int i = 1; i <= 11000000; i++)
        if(func(i)) ans.push_back(i);
    cout << ans[n - 1] << "\n";
    return 0;
}
