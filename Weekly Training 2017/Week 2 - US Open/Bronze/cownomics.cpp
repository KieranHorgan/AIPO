#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define endl "\n"

ll n, m, q, ans;
string s;
vector<string> a, b;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	ifstream fin;
	fin.open("cownomics.in");
	ofstream fout;
	fout.open("cownomics.out");

	fin >> n >> m;

	for(int i = 0; i < n; i++) {
		string s;
		fin >> s;
		a.push_back(s);
	}
	for(int i = 0; i < n; i++) {
		string s;
		fin >> s;
		b.push_back(s);
	}

	for(int i = 0; i < m; i++) {
		map<char, bool> x;
		bool is = 1;
		for(int j = 0; j < n; j++) {
			x[a[j][i]] = 1;
		}
		for(int j = 0; j < n; j++) {
			if(x[b[j][i]]) {
				is = 0;
			}
		}
		if(is) ans++;


	}

	

	fout << ans << endl;
}