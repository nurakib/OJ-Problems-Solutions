#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, l;
    vector <int> num;
    while(cin >> n){
        num.push_back(n);
        l = num.size();
        for(int i = 0; i < num.size(); i++)
            if(num[i] > n) swap(num[i], num[l - 1]);
        if(l % 2 == 0)
            cout << (num[l / 2 - 1] + num[l / 2]) / 2 << endl;
        else
            cout << num[l / 2] << endl;
    }
    return 0;
}
