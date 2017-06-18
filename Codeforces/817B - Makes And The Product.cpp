#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define MAX 100005
#define ll long long
int main(){
    IOS;
    int n;
    ll cnt = 0, num[MAX];
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> num[i];
    sort(num, num + n);
    for(int i = 0; i < n; i++){
        if(num[i] == num[2])
            cnt++;
    }
    if(num[1] != num[2])
        cout << cnt << "\n";
    else if(num[0] != num[2])
        cout << cnt * (cnt - 1) / 2 << "\n";
    else
        cout << cnt * (cnt - 1) * (cnt - 2) / 6 << "\n";
    return 0;
}
