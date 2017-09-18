#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, jit, har;
    string s;
    vector <int> invalid, barca, real;
    cin >> t;
    for(int cs = 1; cs <= t; cs++){
        cin >> s;
        int b = 0, r = 0, sz = s.size();
        for(int i = 0; i < sz; i++){
            if(s[i] == 'B') barca.push_back(i);
            else real.push_back(i);
        }
        invalid.push_back(0);
        int x, y, z;
        x = 0, y = 1, z = x + y;
        while(z <= sz){
            z = x + y;
            x = y;
            y = z;
            if(z > sz) break;
            invalid.push_back(z);
        }
        for(int i = 0; i < barca.size(); i++){
            for(int j = 0; j < invalid.size(); j++){
                if(barca[i] == invalid[j])
                    b++;
            }
        }
        for(int i = 0; i < real.size(); i++){
            for(int j = 0; j < invalid.size(); j++){
                if(real[i] == invalid[j])
                    r++;
            }
        }
        jit = barca.size() - b;
        har = real.size() - r;
        if(jit > har) cout << "Case #" << cs << ": Aaj Kemon Bodh Korcho" << "\n";
        else if(jit < har) cout << "Case #" << cs << ": Hala Madrid" << "\n";
        else printf("Case #%d: Meh :\\\n", cs);
        invalid.clear(); barca.clear(), real.clear();
    }
    return 0;
}
