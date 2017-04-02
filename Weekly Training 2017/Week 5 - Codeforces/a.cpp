#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll n, m, ans;
ll paper[1005][1005];
ll isBlack[1005][1005];
string s;

int rc[] = {1, 1,1,0,-1,-1,-1,0 , 0};
int rr[] = {-1,0,1,1, 1, 0,-1,-1, 0};

int main() {
	cin >> n >> m;

	for(int i = 1; i <= m; i++) {
		int a, b;
		cin >> a >> b;

		if(isBlack[a][b]) continue;
		isBlack[a][b]++;

		bool is = 1;
		for(int x = 0; x < 9; x++) {
			paper[a+rr[x]][b+rc[x]]++;
			if(paper[a+rr[x]][b+rc[x]] == 9 && a+rr[x]>1 && a+rr[x]<n && b+rc[x]>1 && b+rc[x]<n) {
				cout << i << endl;
				return 0;
			}

		}

	}
	cout << -1 << endl;

}