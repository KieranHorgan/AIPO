#include <bits/stdc++.h>

#define ll long long

using namespace std;

double n, m, ans;
vector<ll> a;
string s;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;

	for(int i = 3; i < sqrt(n)*2; i+=2) {
		if(n/i == (ll)(n/i)) {
			
			if(n/i - (i-1)/2>0) {
				cout << n/i - (i-1)/2 << " " << n/i + (i-1)/2 << "\n";
			}
		}
	}
	for(int i = 2; i < sqrt(n)*2; i+=2) {
		if(n/i-0.5 == (ll)(n/i)) {
			if((n/i+0.5)-i/2>0) {
				cout << (n/i+0.5)-i/2 << " " << (n/i-0.5)+i/2 << "\n";
			}
		}
	}
}