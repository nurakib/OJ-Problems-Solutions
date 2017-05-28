#include <bits/stdc++.h>
using namespace std;
int main(){
    int r, b, y, g, cnt;
    int fl_r, fl_b, fl_g, fl_y;
    string str;
    cin >> str;
    r = b = y = g = 0;
    for(int i = 0; i < 4; i++){
        if(str[i] == 'R'){
            for(int j = i + 4; j < str.size(); j += 4){
                if(str[j] == '!') r++;
            }
        }
        if(str[i] == 'B'){
            for(int j = i + 4; j < str.size(); j += 4){
                if(str[j] == '!') b++;
            }
        }
        if(str[i] == 'G'){
            for(int j = i + 4; j < str.size(); j += 4){
                if(str[j] == '!') g++;
            }
        }
        if(str[i] == 'Y'){
            for(int j = i + 4; j < str.size(); j += 4){
                if(str[j] == '!') y++;
            }
        }
        if(str[i] == '!'){
            cnt = 1;
            fl_r = fl_b = fl_g = fl_y = 0;
            for(int j = i + 4; j < str.size(); j += 4){
                if(str[j] == '!') cnt++;
                if(str[j] == 'R') fl_r = 1;
                if(str[j] == 'B') fl_b = 1;
                if(str[j] == 'G') fl_g = 1;
                if(str[j] == 'Y') fl_y = 1;
            }
            if(fl_r == 1) r = cnt;
            if(fl_b == 1) b = cnt;
            if(fl_g == 1) g = cnt;
            if(fl_y == 1) y = cnt;
        }
    }
    cout << r << " " << b << " " << y << " " << g << "\n";
    return 0;
}

