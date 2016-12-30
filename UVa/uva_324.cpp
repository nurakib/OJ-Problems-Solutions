#include <bits//stdc++.h>
using namespace std;
int main(){
    int num, res_size, temp, carry, res[10000];
    while(scanf("%d", &num) == 1 && num){
        int ans[10] = {0};
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
            ans[res[k]]++;
        printf("%d! --\n", num);
        for(int i = 0; i < 10; i++){
            printf("(%d)%5d  ", i, ans[i]);
            if(i == 4)
                printf("\n");
        }
        printf("\n");
    }
    return 0;
}
