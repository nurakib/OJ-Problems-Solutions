#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, sz, cm, tmp;
    string s;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cin >> sz >> cm;
        deque <int> dq;
        cout << "Case " << i << ":\n";
        while(cm--){
            cin >> s;
            if(s == "pushLeft"){
                cin >> tmp;
                if(dq.size() < sz){
                    dq.push_front(tmp);
                    cout << "Pushed in left: " << tmp << "\n";
                }
                else
                    cout << "The queue is full" << "\n";
            }
            else if(s == "pushRight"){
                cin >> tmp;
                if(dq.size() < sz){
                    dq.push_back(tmp);
                    cout << "Pushed in right: " << tmp << "\n";
                }
                else
                    cout << "The queue is full" << "\n";
            }
            else if(s == "popLeft"){
                if(!dq.empty()){
                    tmp = dq.front();
                    dq.pop_front();
                    cout << "Popped from left: " << tmp << "\n";
                }
                else
                    cout << "The queue is empty" << "\n";
            }
            else if(s == "popRight"){
                if(!dq.empty()){
                    tmp = dq.back();
                    dq.pop_back();
                    cout << "Popped from right: " << tmp << "\n";
                }
                else
                    cout << "The queue is empty" << "\n";
            }
        }
    }
    return 0;
}
