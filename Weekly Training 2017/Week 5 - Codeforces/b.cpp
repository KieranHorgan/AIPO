#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll n, m, ans, mi, ma;

vector<ll> a;
vector<ll> b;

int main() {
	cin >> n >> m;

	for(int i = 0; i < m; i++) {
		ll x;
		cin >> x;
		a.push_back(x);
		b.push_back(x);
	}

	ll r = n;
	sort(b.begin(), b.end());
	for(int i = 0; r; i++) {
		int c = b[i];
		if(c < r) {
			mi += ((c)*(c+1))/2;
			r-=c;
		} else {
			for(int i = 0; i < r; i++) {
				mi+=c-i;
			}
			r = 0;
		}
	}

	r = n;
	priority_queue<ll> pq;
	for(int i = 0; i < m; i++) {
		pq.push(a[i]);
	}

	while(r) {
		int c = pq.top();
		pq.pop();
		ma += c;
		pq.push(c-1);
		r--;
	}


	cout << ma << " " << mi << endl;

}

// This isn't wrong ffs