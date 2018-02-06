#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, num[101];
    cin >> n;
    for(int i  = 0; i < n; i++) cin >> num[i];
    sort(num, num + n);
    for(int i = 0; i < n; i++) cout << num[i] << " ";
    return 0;
}
