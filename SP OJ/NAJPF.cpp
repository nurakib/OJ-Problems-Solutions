#include <bits/stdc++.h>
using namespace std;
void computeLPSArray(string pat, int M, int lps[]);
void KMPsearch(string pat, string txt);

int main(){
    int tcase;
    string pat, txt;
    cin >> tcase;
    while(tcase--){
        cin >> txt >> pat;
        KMPsearch(pat, txt);
    }
    return 0;
}

void KMPsearch(string pat, string txt){
    int flag = 1, cnt = 0;
    int M = pat.size();
    int N = txt.size();
    int lps[M];
    vector <int> pos;
    computeLPSArray(pat, M, lps);
    int i = 0, j = 0;
    while(i < N){
        if(pat[j] == txt[i]){
            i++; j++;
        }
        if(j == M){
            pos.push_back(i - j);
            j = lps[j - 1];
            cnt++;
            flag = 0;
        }
        else if(i < N && pat[j] != txt[i]){
            if(j != 0) j = lps[j - 1];
            else i++;
        }
    }
    if(flag) cout << "Not Found\n";
    else{
        cout << cnt << "\n";
        for(int p = 0; p < pos.size(); p++)
            cout << pos[p] + 1 << " ";
    }
    cout << "\n";
}

void computeLPSArray(string pat, int M, int lps[]){
    int len = 0;
    lps[0] = 0;
    int i = 1;
    while(i < M){
        if(pat[i] == pat[len]){
            len++;
            lps[i] = len;
            i++;
        }
        else{
            if(len != 0)
                len = lps[len - 1];
            else{
                lps[i] = 0;
                i++;
            }
        }
    }
}
