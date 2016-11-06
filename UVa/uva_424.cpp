#include <bits//stdc++.h>
using namespace std;
string add(string a, string b){
    int i, j, carry, k, t1, t2;
    char res[1010];
    int len1 = a.length();
    int len2 = b.length();
    carry = k = 0;
    for(i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0; i--, j--){
        t1 = t2 = 0;
        if(i >= 0) t1 = a[i] - '0';
        if(j >= 0) t2 = b[j] - '0';
        res[k++] = ((t1 + t2 + carry)%10) + '0';
        carry = (t1 + t2 + carry) / 10;
    }
    while(carry != 0){
        res[k++] = (carry % 10) + '0';
        carry /= 10;
    }
    res[k] = '\0';
    reverse(&res[0], &res[k]);
    return res;
}
int main(){
    string n, res;
    cin >> res;
    while(cin >> n && n[0] != '0')
        res = add(res, n);
    cout << res << endl;
    return 0;
}
