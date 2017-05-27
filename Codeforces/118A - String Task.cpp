#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin >> str;
    for(int i = 0; i < str.size(); i++){
        if(str[i] == 'A' || str[i] == 'O' || str[i] == 'Y' || str[i] == 'E' || str[i] == 'U' || str[i] == 'I' ||
           str[i] == 'a' || str[i] == 'o' || str[i] == 'y' || str[i] == 'e' || str[i] == 'u' || str[i] == 'i'){
            str.erase(str.begin() + i);
            i--;
        }
    }
    for(int i = 0; i < str.size(); i++)
        printf(".%c", tolower(str[i]));
    printf("\n");
    return 0;
}
