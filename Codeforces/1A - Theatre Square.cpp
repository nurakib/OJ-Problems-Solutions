#include <bits//stdc++.h>
using namespace std;
int main(){
    long double n, m, a;
    cin >> n >> m >> a;
    cout << setprecision(51) << ceil(n / a) * ceil(m / a) << endl;
    return 0;
}
