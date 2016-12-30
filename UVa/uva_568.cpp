#include <bits//stdc++.h>
using namespace std;
int main(){
    int num, res_size, temp, carry, ans, res[100000];
    while(cin >> num){
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
        for(int k = 0; k < res_size; k++){
            if(res[k] != 0){
                ans = res[k];
                break;
            }
        }
        printf("%5d -> %d\n", num, ans);
    }
    return 0;
}
