#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll n, m, ans, x;
string s;
vector<ll> a;
ll h[5005];
ll dp[5005];
ll prefixSum[5005];

int main() {
	cin >> n;

	for (int i = 1; i <= n; i++){
		h[i] = 1000000000;
		dp[i] = 1000000000;

		cin >> x;
		prefixSum[i] += prefixSum[i-1] + x;
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= i; j++){
			if (prefixSum[i] - prefixSum[j] >= h[j] && dp[i] >= dp[j]+i-j-1) {
				dp[i] = dp[j]+i-j-1;
				if (h[i] > prefixSum[i]-prefixSum[j]) h[i] = prefixSum[i] - prefixSum[j];
			}
		}
	}

	cout << dp[n] << endl;
}