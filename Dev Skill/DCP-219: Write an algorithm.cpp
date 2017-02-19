#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    string tmp, che;
    vector <string> s;
    while(scanf("%d", &t) == 1){
        for(int i = 0; i < t; i++){
            int fl = 0;
            cin >> tmp;
            che = tmp;
            if(tmp[1] != '-' && tmp[1] != '/') 
                reverse(che.begin(), che.end());
            s.push_back(tmp);
            printf("Instruction %d: ", i + 1);
            if(i > 0){
                for(int j = 0; j < s.size() - 1; j++){
                    if(s[j] == tmp || s[j] == che){
                        s.pop_back();
                        printf("repeat step %d\n", j + 1);
                        fl = 1;
                        break;
                    }
                }
            }
            if(fl == 1) continue;
            if(tmp[1] == '+')
                printf("add %c to %c\n", tmp[0], tmp[2]);
            else if(tmp[1] == '-')
                printf("subtract %c from %c\n", tmp[2], tmp[0]);
            else if(tmp[1] == '*')
                printf("multiply %c with %c\n", tmp[0], tmp[2]);
            else if(tmp[1] == '/')
                printf("divide %c by %c\n", tmp[0], tmp[2]);
        }
        s.clear();
    }
    return 0;
}

