#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define endl "\n"

ll n, m, q, ans, x, y;
string s;
vector<ll> a;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	ifstream fin;
	fin.open("lostcow.in");
	
	ofstream fout;
	fout.open("lostcow.out");

	fin >> x >> y;

	ll plus = 1;
	bool isPlus = true;

	while(true) {
		ll current = x;
		
		if(plus>1)
			ans+=plus*1.5;
		else
			ans++;

		if(isPlus) {
			current+=plus;
			if(current>=y && y>x) {
				ans -= current-y;
				break;
			}
		} else {
			current-=plus;
			if(current<=y && y<x) {
				ans -= y-current;
				break;
			}
		}
		plus*=2;
		isPlus = !isPlus;
	}


	fout << ans << endl;
}