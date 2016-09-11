#include <bits//stdc++.h>
using namespace std;
int main(){
    int x = 0, t;
    cin >> t;
    string s;
    while(t--){
        cin >> s;
        if(s[1] == '+') x++;
        else x--;
    }
    cout << x << endl;
    return 0;
}
