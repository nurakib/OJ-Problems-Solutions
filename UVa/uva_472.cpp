#include <bits/stdc++.h>
using namespace std;
int main(){
    string a, b;
    while(getline(cin, a) && getline(cin, b)){
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        for(int i = 0, j = 0; i < a.size() && j < b.size();){
            if(a[i] == b[j]){
                cout << a[i];
                i++; j++;
            }
            if(a[i] > b[j]) j++;
            if(a[i] < b[j]) i++;
        }
        cout << "\n";
    }
    return 0;
}
