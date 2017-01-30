#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    list <int> cards;
    while(cin >> n, n){
        for(int i = 1; i <= n; i++)
            cards.push_back(i);
        cout << "Discarded cards:";
        while(cards.size() > 1){
            cout << " " << cards.front();
            if(cards.size() > 2) cout << ",";
            cards.pop_front();
            cards.push_back(cards.front());
            cards.pop_front();
        }
        cout << "\nRemaining card: " << cards.front() << endl;
        cards.clear();
    }
    return 0;
}
