#include <bits/stdc++.h>
using namespace std;
#define MAX 100005
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0);
    int a, b, n, num[MAX];
    cin >> n;
    for(int i = 0; i < n; i++) cin >> num[i];
    for(int i = 0; i < n; i++){
        if(i - 1 < 0) a = abs(num[i] - num[i + 1]);
        else if(i + 1 == n) a = abs(num[i - 1] - num[i]);
        else a = min(abs(num[i - 1] - num[i]), abs(num[i] - num[i + 1]));
        b = max(abs(num[i] - num[0]), abs(num[i] - num[n - 1]));
        cout << a << " " << b << "\n";
    }
    return 0;
}
