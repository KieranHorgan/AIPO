#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll n, m, q, ans;
ll a[1005][1005];
string s;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;

	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			cin >> a[i][j];

	cin >> q;

	for(int x = 0; x < q; x++) {
		vector<ll> p;
		ans = 0;
		for(int i = 0; i < m; i++) {
			int y;
			cin >> y;
			p.push_back(y);
		}

		for(int i = 0; i < n; i++) {
			bool is = true;
			for(int j = 0; j < m; j++) {
				if(p[j] == -1) continue;
				if(p[j] != a[i][j]) {
					is = false;
					break;
				}
			}
			if(is) ans++;
		}
		cout << ans << "\n";
	}
}