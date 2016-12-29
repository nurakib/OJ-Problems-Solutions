#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int a[4] = {10, 100, 1000, 10000};
    while(cin >> n){
        for(int i = 0; i < a[n / 2 - 1]; i++){
            for(int j = 0; j < a[n / 2 - 1]; j++){
                if((i + j) * (j + i) == a[n / 2 - 1] * i + j)
                    cout << setfill('0') << setw(n / 2) << i << setfill('0') << setw(n / 2) << j << endl;
            }
        }
    }
    return 0;
}
