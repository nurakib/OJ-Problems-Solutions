#include <bits/stdc++.h>
using namespace std;
vector <long long> num;
long long maxSubArraySum(vector <long long> a){
    long long max_so_far = a[0], max_ending_here = a[0];
    for(int i = 1; i < a.size(); i++){
        max_ending_here = max(a[i], max_ending_here + a[i]);
        max_so_far = max(max_so_far, max_ending_here);
    }
    return max_so_far;
}
 
int main(){
    int t, n, k;
    cin >> t;
    while(t--){
        long long ans, tmp, check = 0, max_forward = 0, max_reverse = 0;
        cin >> n >> k;
        for(int i = 0; i < n; i++){
            cin >> tmp;
            check += tmp;
            num.push_back(tmp);
        }
        tmp = 0;
        for(int i = 0; i < n; i++){
            tmp += num[i];
            max_forward = max(tmp, max_forward);
        }
        tmp = 0;
        for(int i = n - 1; i >= 0; i--){
            tmp += num[i];
            max_reverse = max(tmp, max_reverse);
        }
        if(check > 0 && k > 2){
            ans = check * (k - 2) + max_forward + max_reverse;
        }
        else{
            if(k != 1) num.insert(num.end(), num.begin(), num.end());
            ans = maxSubArraySum(num);
        }
        cout << ans << "\n";
        num.clear();
    }
    return 0;
}
