#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll n, m, ans, x;
string s;
vector<ll> a;

ll toTheLeft[1000005];
ll toTheRight[1000005];

int main() {
	cin >> n >> s;

	if(n==0) {
		ll c, i;
		for(i = 0, c = 0; i < s.size(); i++) {
			if(s[i]=='0') {
				c++;
				continue;
			}

			ans += c*(c+1)/2;
			c = 0;
		}
			ans += c*(c+1)/2;
		cout << ans << endl;
		return 0;
	}

	for(ll i = 0; i < s.size()-1; i++) {
		if(s[i]=='0') {
			toTheLeft[i+1] = toTheLeft[i]+1;
		} else {
			toTheLeft[i+1] = 0;
		}
	}
	for(ll i = s.size()-1; i > 0; i--) {
		if(s[i]=='0') {
			toTheRight[i-1] = toTheRight[i]+1;
		} else {
			toTheRight[i-1] = 0;
		}
	}

	for(ll l = 0, r = 0, cnt = s[0]-'0'; l < s.size(); l++) {
		if(s[l]!='1') continue;
		while(cnt!=n) {
			r++;
			if(r==s.size()) {
				cout << ans << endl;
				return 0;
			}
			if(s[r]=='1') cnt++;
		}

//		cout << l << " " << r << endl;
		ans+=(toTheLeft[l]+1)*(toTheRight[r]+1);
		cnt--;
	}
	cout << ans << endl;
	return 0;
}