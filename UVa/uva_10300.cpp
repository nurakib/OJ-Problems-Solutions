#include <iostream>
using namespace std;
int main(){
    int t, n, a, b, c, result;
    cin >> t;
    while(t--){
        result = 0;
        cin >> n;
        while(n--){
            cin >> a >> b >> c;
            result = result + a * c;
        }
        cout << result << endl;
    }
    return 0;
}
