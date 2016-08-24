#include <iostream>
#include <cctype>
#include <cstdio>
using namespace std;
char ch, temp;
bool isvowel(char ch){
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
       ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        return true;
    return false;
}
int main(){
    while(scanf("%c", &ch) == 1){
        if(isalpha(ch)){
            if(isvowel(ch)){
                while(isalpha(ch)){
                    cout << ch;
                    scanf("%c", &ch);
                }
                cout << "ay";
            }
            else{
                temp = ch;
                ch = getchar();
                while(isalpha(ch)){
                    cout << ch;
                    scanf("%c", &ch);
                }
                cout << temp << "ay";
            }
        }
        cout << ch;
    }
    return 0;
}
