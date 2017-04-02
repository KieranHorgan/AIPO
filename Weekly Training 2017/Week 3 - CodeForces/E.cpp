#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll n, m, q, k, ans;
string s;

vector<pair<string, string>> teams;
map<string, int> a;
map<string, int> b;
int isB[1005];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;

	for(int i = 0; i < n; i++) {
		string s, t;
		cin >> s >> t;
		s = s.substr(0, 3);
		t = s.substr(0, 2) + t.substr(0, 1);
		teams.push_back({s,t});
		a[s]++;
	}

	bool isOk = false;
	while(!isOk) {
		isOk = 1;
		for(int i = 0; i < n; i++) {
			if(!isB[i] && a[teams[i].first] > 1) {
				isOk = 0;
				isB[i] = 1;
				b[teams[i].second]++;
			} else if(!isB[i] && b[teams[i].first]) {
				isOk = 0;
				isB[i] = 1;
				b[teams[i].second]++;
			} else if(isB[i] && b[teams[i].second]>1) {
				cout << "NO" << endl;
				return 0;
			}
		}
	}

	cout << "YES" << endl;
	for(int i = 0; i < n; i++) {
		if(isB[i]) {
			cout << teams[i].second << endl;
		} else {
			cout << teams[i].first << endl;
		}
	}

}