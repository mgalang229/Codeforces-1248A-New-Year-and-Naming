#include <bits/stdc++.h>

using namespace std;

void solve(){	
	int n, m;
	cin >> n >> m;
	string s[n], t[m];
	for(int i = 0; i < n; i++) cin >> s[i];
	for(int i = 0; i < m; i++) cin >> t[i];
	int q;
	cin >> q;
	while(q--){
		int x;
		cin >> x;
		x--;
		cout << s[x%n] + t[x%m] << "\n";
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	solve();
	return 0;
}