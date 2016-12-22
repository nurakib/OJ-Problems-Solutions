#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, l;
    cin >> n;
    string str;
    while(n--){
        cin >> str;
        l = str.size();
        if(str == "1" || str == "4" || str == "78")
            cout << "+" << endl;
        else if(str[l - 1] == '5' && str[l - 2] == '3')
            cout << "-" << endl;
        else if(str[0] == '9' && str[l - 1] == '4')
            cout << "*" << endl;
        else
            cout << "?" << endl;
    }
    return 0;
}
