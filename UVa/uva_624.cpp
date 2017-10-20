#include <bits/stdc++.h>
using namespace std;
int n, t, maxsum;
vector <int> track, container, ans;
void all_posible(int pos, int sum){
    if(sum > maxsum){
        ans = container;
        maxsum = sum;
    }
    for(int i = pos; i < t; i++){
        if(track[i] + sum <= n){
            sum += track[i];
            container.push_back(track[i]);
//            cout << "zacchi" << endl;
//                        for(int j = 0; j < container.size(); j++)
//                            cout << container[j] << " ";
//                        cout << endl;
            all_posible(i + 1, sum);
            sum -= track[i];
            container.pop_back();
//            cout << "firchi" << endl;
//                       for(int j = 0; j < container.size(); j++)
//                            cout << container[j] << " ";
//                        cout << endl;
        }
    }
}
int main(){
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
    int tmp;
    while(cin >> n >> t){
        track.clear(); container.clear(); ans.clear();
        for(int i = 0; i < t; i++){
            cin >> tmp;
            track.push_back(tmp);
        }
        maxsum = 0;
        all_posible(0, 0);
        for(int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";
        cout << "sum:" << maxsum << "\n";
    }
    return 0;
}
