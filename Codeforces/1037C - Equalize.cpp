#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false); cin.tie(0);
	string a, b;
	int n, ans = 0;
	cin>> n >> a >> b;
	for(int i = 0; i < n; i++)
	    if(a[i] != b[i]){
	    	if(i != n - 1 && a[i + 1] == b[i] && a[i] == b[i + 1])
            a[i + 1] = a[i];
	    	ans++;
		}
	cout<< ans << endl;
	return 0;
}
