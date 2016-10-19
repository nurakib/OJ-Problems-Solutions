#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, tmp, num[1010], m1, m2, cnt = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> num[i];
        if(i == 0)
            m1 = m2 = num[i];
        if(num[i] > m1 || num[i] < m2){
            cnt++;
            m1 = max(m1, num[i]);
            m2 = min(m2, num[i]);
        }
    }
    cout << cnt << endl;
    return 0;
}
