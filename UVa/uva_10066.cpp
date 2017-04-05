#include <bits/stdc++.h>
using namespace std;
#define MAX 1005
int dp[MAX][MAX];
int t1[105], t2[105];
int lcslenght(int a[], int b[], int m, int n){
	for(int i = 0; i <= m; i++)
		dp[i][0] = 0;
	for(int j = 0; j <= n; j++)
		dp[0][j] = 0;
	for(int i = 1; i <= m; i++){
		for(int j = 1; j <= n; j++){
			if(a[i - 1] == b[j - 1])
				dp[i][j] = dp[i - 1][j - 1] + 1;
			else 
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
		}
	}
	return dp[m][n];
}
int main(){
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	int m, n, ans, caseno = 0;
	while(cin >> m >> n){
		if(m == 0 && n == 0) break;
		for(int i = 0; i < m; i++) cin >> t1[i];
		for(int i = 0; i < n; i++) cin >> t2[i];
		ans = lcslenght(t1, t2, m, n);
		cout << "Twin Towers #" << ++caseno << "\n";
		cout << "Number of Tiles : " << ans << "\n\n";
	}
	return 0;
}
