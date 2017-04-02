#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define endl "\n"

ll n, m, q, ans;
string s;
vector<string> a, b;
char c;

char grid[22][22];
bool colors[27];
int numberOfColors;


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	ifstream fin;
	fin.open("where.in");
	ofstream fout;
	fout.open("where.out");



	fin >> n;

	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++){
			fin >> c;
			if(!colors[c-'A']) {
				colors[c-'A'] = 1;
				numberOfColors++;
			}
		}
	fout << numberOfColors-1 << endl;
}