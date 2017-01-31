#include <bits//stdc++.h>
using namespace std;
string add(char a[], char b[]){
    int i, j, carry, k, t1, t2;
    char res[1010];
    int len1 = strlen(a);
    int len2 = strlen(b);
    carry = k = 0;
    for(i = 0, j = 0; i < len1 || j < len2; i++, j++){
        t1 = t2 = 0;
        if(i < len1) t1 = a[i] - '0';
        if(j < len2) t2 = b[j] - '0';
        res[k++] = ((t1 + t2 + carry)%10) + '0';
        carry = (t1 + t2 + carry) / 10;
    }
    while(carry != 0){
        res[k++] = (carry % 10) + '0';
        carry /= 10;
    }
    res[k] = '\0';
    return res;
}
int main(){
    int t, fl;
    string res;
    char a[1000], b[1000];
    cin >> t;
    while(t--){
        fl = 0;
        scanf("%s %s", a, b);
        res = add(a, b);
        for(int i = 0; res[i] != '\0'; i++){
            if(fl == 0 && res[i] == '0')
                continue;
            else{
                cout << res[i];
                fl = 1;
            }
        }
        cout << endl;
    }
    return 0;
}
