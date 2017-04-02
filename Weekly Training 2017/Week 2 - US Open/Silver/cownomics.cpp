#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define endl "\n"

ll n, m, q, ans;
string s;
vector<string> a, b;

int spotty[505][55];
int plain[505][55];

map<int, bool> x[55][55][55];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	ifstream fin;
	fin.open("cownomics.in");
	ofstream fout;
	fout.open("cownomics.out");

	fin >> n >> m;

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			char c;
			fin >> c;
			if(c=='A') {
				spotty[i][j] |= 8;
			}
			if(c=='C') {
				spotty[i][j] |= 4;
			}
			if(c=='G') {
				spotty[i][j] |= 2;
			}
			if(c=='T') {
				spotty[i][j] |= 1;
			}
		}
	}


	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			char c;
			fin >> c;
			if(c=='A') {
				plain[i][j] |= 8;
			}
			if(c=='C') {
				plain[i][j] |= 4;
			}
			if(c=='G') {
				plain[i][j] |= 2;
			}
			if(c=='T') {
				plain[i][j] |= 1;
			}
		}
	}

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cout << plain[i][j] << " ";
		}
		cout << endl;
	}

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cout << spotty[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl;

	for(int i = 0; i < m; i++) {
		for(int j = i+1; j < m; j++) {
			for(int k = j+1; k < m; k++) {
				for(int l = 0; l < n; l++) {
					x[i][j][k][spotty[l][i] + (spotty[l][j]<<4) + (spotty[l][k]<<8)]=1;
				}

				bool is = 1;

				for(int l = 0; l < n; l++) {
					if(x[i][j][k][plain[l][i] + (plain[l][j]<<4) + (plain[l][k]<<8)]) {
						is=0;
						break;
					}
				}
				if(is) ans++;
			}
		}
	}

	

	fout << ans << endl;
}