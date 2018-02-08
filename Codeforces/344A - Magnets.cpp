#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, cnt = 0, num[100005];
    cin >> n;
    for(int i = 0; i < n; i++) cin >> num[i];
    for(int i = 1; i < n; i++){
        if(num[i - 1] != num[i]) cnt++;
    }
    cout << cnt + 1 << "\n";
    return 0;
}
