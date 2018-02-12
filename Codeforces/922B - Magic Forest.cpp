#include <bits/stdc++.h>
using namespace std;
bool valid(int a, int b, int c){
    if(a + b > c && a + c > b && b + c > a) return true;
    return false;
}
int main(){
    int n, tmp, cnt = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            tmp = (i ^ j);
            if(tmp <= n && valid(i, j, tmp)){
                cnt++;
            }
        }
    }
    cout << cnt / 6 << "\n"; //possible combination with 3 numbers is 3! = 6
    return 0;
}
