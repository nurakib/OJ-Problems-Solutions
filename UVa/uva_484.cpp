#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    map <int, int> num;
    vector <int> ans;
    while(cin >> n){
        if(num[n] == 0){
            num[n]++;
            ans.push_back(n);
        }
        else
            num[n]++;
    }
    for(int i = 0; i < ans.size(); i++)
        cout << ans[i] << " " << num[ans[i]] << endl;
    return 0;
}
