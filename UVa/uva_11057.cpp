#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, tmp, sum, posA, posB;
    vector <int> num;
    while(cin >> n){
        for(int i = 0; i < n; i++){
            cin >> tmp;
            num.push_back(tmp);
        }
        cin >> sum;
        sort(num.begin(), num.end());
        int low = 0; int high = n - 1;
        while(low < high){
            if(num[low] + num[high] < sum)
                low++;
            else if(num[low] + num[high] == sum){
                posA = low;
                posB = high;
                low++; high--;
            }
            else
                high--;
        }
        cout << "Peter should buy books whose prices are " << num[posA] << " and " << num[posB] << ".\n\n";
        num.clear();
    }
    return 0;
}
