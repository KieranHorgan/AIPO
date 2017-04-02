#include <bits/stdc++.h>

using namespace std;

int n, m, q, k, ans;
string s;

bool toHead;

int main() {
	cin >> n >> m >> k;

	cin >> s >> s;
	if(s[0] == 'h') toHead = 1;

	cin >> s;

	if(m<k) m=1;
	else m=n;

	for(int i = 0; i < s.size(); i++) {
		if(k==m) {
			cout << "Controller " << i << endl;
			return 0;
		}
		if(k==1) toHead=0;
		else if(k==n) toHead = 1;

		if(s[i]=='1') {
			if(toHead) k--;
			else k++;

			if(k==1 || toHead) m=n;
			else m=1;

			continue;
		}

		if(toHead) k--;
		else k++;
	}

	cout << "Stowaway\n";
}