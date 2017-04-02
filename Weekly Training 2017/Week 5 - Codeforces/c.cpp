#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll n, m, ans, x;

vector<ll> a;

int main() {
	cin >> n >> x;

	bool isPresent = 0;
	for(int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		a.push_back(temp);
		if(temp == x) isPresent = 1;
	}
	a.push_back(0);

	if(!isPresent) {
		a.push_back(x);
		n++;
		ans++;
	}

	sort(a.begin(), a.end());

	ll index = -1;
	for(ll i = 1; i <= n; i++) {
		if(a[i]==x && (abs((n+1)/2-i)<abs((n+1)/2-index))) {
			index = i;
		}
	}
	if(index < (n+1)/2) {
		while(index!=(n+1)/2) {
			a.push_back(0);
			sort(a.begin(), a.end());
			n++;
			index++;
			ans++;
		}
	} else {
		while(index!=(n+1)/2) {
			a.push_back(100005);
			sort(a.begin(), a.end());
			n++;
			index;
			ans++;
		}
	}

	cout << ans << endl;

}