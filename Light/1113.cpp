#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, pos;
    string s, tmp;
    vector <string> url;
    cin >> t;
    for(int caseno = 1; caseno <= t; caseno++){
        cout << "Case " << caseno << ":" << "\n";
        pos = 0;
        url.push_back("http://www.lightoj.com/");
        while(cin >> s && s != "QUIT"){
            if(s == "VISIT"){
                pos++;
                cin >> tmp;
                url.insert(url.begin() + pos, tmp);
                if(url.size() > pos) url.resize(pos + 1);
                cout << tmp << "\n";
            }
            else if(s == "BACK"){
                pos--;
                if(pos < 0){
                    cout << "Ignored" << "\n";
                    pos = 0;
                }
                else cout << url[pos] << "\n";
            }
            else if(s == "FORWARD"){
                pos++;
                if(pos > url.size() - 1){
                    cout << "Ignored" << "\n";
                    pos--;
                }
                else cout << url[pos] << "\n";
            }
        }
        url.clear();
    }
    return 0;
}
