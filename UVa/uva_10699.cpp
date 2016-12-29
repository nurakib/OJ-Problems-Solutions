#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, tmp;
    while(cin >> n, n){
        tmp = n;
        set <int> ans;
        while(n % 2 == 0){
        ans.insert(2);
        n /= 2;
        }
        for(int i = 3; i * i <= n; i += 2){
            while(n % i == 0){
                ans.insert(i);
                n /= i;
            }
        }
        if(n > 2)
            ans.insert(n);
        cout << tmp << " : " << ans.size() << endl;

    }
    return 0;
}
