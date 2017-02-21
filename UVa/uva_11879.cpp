#include <iostream>
using namespace std;
int mod(string num, int m){
    int i, rem;
    for(i = 0, rem = 0; num[i]; i++)
        rem = (rem * 10 + (num[i] - '0')) % m;
    return rem;
}
int main(){
    string s;
    while(cin >> s && s != "0"){
        if(mod(s, 17)) cout << 0 << endl;
        else cout << 1 << endl;
    }
    return 0;
}
