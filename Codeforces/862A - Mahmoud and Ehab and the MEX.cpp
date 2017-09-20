#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, x, cnt = 0, num[105], check[105] = {0};
    cin >> n >> x;
    for(int i = 0; i < n; i++){
        cin >> num[i];
        check[num[i]] = 1;
    }
    if(check[x] == 1) cnt = 1;
    for(int i = 0; i < x; i++){
        if(check[i] == 0)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}
