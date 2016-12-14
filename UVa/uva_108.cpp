#include <bits/stdc++.h>
using namespace std;
int n, num[105][105];
int kadane(int ara[], int n){
    int ans = ara[0], check = ara[0];
    for(int i = 1; i < n; i++){
        check = max(ara[i], check + ara[i]);
        ans = max(ans, check);
    }
    return ans;
}
void findMaxSum(){
    int maxSum = 0;
    for(int left = 0; left < n; left++){
        int temp[n] = {0};
        for(int right = left; right < n; right++){
            for(int i = 0; i < n; i++)
                temp[i] += num[i][right];
            int sum = kadane(temp, n);
            if(sum > maxSum)
                maxSum = sum;
        }
    }
    cout << maxSum << endl;
}
int main(){
    cin >> n;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> num[i][j];
    findMaxSum();
    return 0;
}
