#include <bits//stdc++.h>
using namespace std;
int main(){
    int num, res_size, temp, carry, res[10000];
    while(cin >> num){
        cout << num << "!" << endl;
        res[0] = res_size = 1;
        carry = 0;
        for(int i = 1; i <= num; i++){
            for(int j = 0; j < res_size; j++){
                temp = res[j] * i + carry;
                res[j] = temp % 10;
                carry = temp / 10;
            }
            while(carry){
                res[res_size] = carry % 10;
                carry = carry / 10;
                res_size++;
            }
        }
        res[res_size] = '\0';
        for(int k = res_size - 1; k >= 0; k--)
            cout << res[k];
        cout << endl;
    }
    return 0;
}
