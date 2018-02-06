#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, tmp, val1 = 0, val2 = 0, cnt = 0;
    deque <int> num;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> tmp;
        num.push_back(tmp);
    }
    while(num.size() != 1){
        int a = num.front(), b = num.back();
        if(cnt % 2 == 0){
            if(a > b) {val1 += a; num.pop_front();}
            else {val1 += b; num.pop_back();}
        }
        else{
            if(a > b) {val2 += a; num.pop_front();}
            else {val2 += b; num.pop_back();}
        }
        cnt++;
    }
    if(n % 2 == 0) val2 += num.front();
    else val1 += num.front();
    cout << val1 << " " << val2 << "\n";
    return 0;
}
