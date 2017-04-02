#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define endl "\n"

int n, m, q, ans, x, y;
vector<int> a;
vector<int> s;
vector<int> e;
vector<pair<int, int>> temp;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	ifstream fin;
	fin.open("pairup.in");
	ofstream fout;
	fout.open("pairup.out");

	fin >> n;


	for(int i = 0; i < n; i++) {
		int x, y;
		fin >> x >> y;
		m+=x;
		temp.push_back({y,x});
	}

	sort(temp.begin(), temp.end());

	a.push_back(temp[0].first);
	s.push_back(1);
	e.push_back(temp[0].second);
	for(int i = 1; i < n; i++) {
		a.push_back(temp[i].first);
		s.push_back(e[i-1]+1);
		e.push_back(temp[i].second+e[i-1]);
	}

	for(int i = 0; i < n; i++) {
	}


	for(int i = 0, j=n-1; e[j]>=m/2;) {
		if(e[i]<m-s[j]+1) {
			i++;
			continue;
		}
		ans = max(ans, a[i]+a[j]);
		j--;
	}



/*
	sort(a.begin(), a.end());
	for(int i = 0, j=n-1; i<=j; i++, j--) {
		ans = max(ans, a[i].first+a[j].first);
		a[i].second--;
		a[j].second--;

		if(a[i].second) i--;
		if(a[j].second) j++;
	}
*/

	fout << ans << endl;
}