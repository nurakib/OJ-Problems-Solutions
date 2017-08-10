#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, sum, fl, num[105][3];
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            cin >> num[i][j];
        }
    }
//    for(int i = 0; i < 3; i++){
//        for(int j = 0; j < n; j++){
//            cout << num[j][i] << " ";
//        }
//        cout << "\n";
//    }
    for(int i = 0; i < 3; i++){
        sum = fl = 0;
        for(int j = 0; j < n; j++){
            sum += num[j][i];
            //cout << i << " " << j << endl;
        }
        //cout << sum << endl;
        if(sum != 0){
            fl = 1;
            break;
        }
    }
    if(fl) cout << "NO\n";
    else cout << "YES\n";
    return 0;
}
