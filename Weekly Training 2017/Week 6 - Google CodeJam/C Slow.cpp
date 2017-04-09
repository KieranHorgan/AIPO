#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll n, m, t, k, ans, most, least;

int main() {
	cin >> t;

	for(int x = 1; x <= t; x++) {
		cin >> n >> k;
		least = n;

		priority_queue<ll> pq;
		pq.push(n);
		for(int i = 0; i < k; i++) {
			ll c = pq.top();
//			cout << c << " ";
			pq.pop();
			ll l = 0, r = 0;
			if(c%2==0) {
				l=c/2-1;
				r=c/2;
			} else {
				r=c/2;
				l=c/2;
			}
//			cout << l << " " << r << "| ";
			least = min(l, r);
			most = max(l, r);
			pq.push(l);
			pq.push(r);
		}

		cout << "Case #" << x << ": " << most << " " << least << endl;
	}
}