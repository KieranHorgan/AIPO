#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define endl "\n"

ll n, m, q, ans;
string s;

int grid[1000][1000];
bool possible[1000];

//        lef  rig        top  bot
pair<pair<int, int>, pair<int, int>> squares[1000];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	ifstream fin;
	fin.open("art.in");
	ofstream fout;
	fout.open("art.out");

	fin >> n;


	for(int i = 1; i < 10; i++) possible[i] = 1;

	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++) {
			char c;
			fin >> c;
			grid[i][j] = (int)c-(int)'0';
		}

	for(int i = 0; i < 10; i++) {
		squares[i].first.first = 100000000;
		squares[i].first.second = -1;

		squares[i].second.first = 100000000;
		squares[i].second.second = -1;
	}

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			possible[grid[i][j]] = true;

			squares[grid[i][j]].first.first = min(squares[grid[i][j]].first.first, j);
			squares[grid[i][j]].first.second = max(squares[grid[i][j]].first.second, j);

			squares[grid[i][j]].second.first = min(squares[grid[i][j]].second.first, i);
			squares[grid[i][j]].second.second = max(squares[grid[i][j]].second.second, i);

		}
	}

	for(int i = 1; i < 10; i++) {
		if(squares[i].first.first > 100) {
			possible[i] = 0;
			continue;
		}
		int lef = squares[i].first.first,
			rig = squares[i].first.second,
			top = squares[i].second.first,
			bot = squares[i].second.second;


		for(int a = top; a <= bot; a++) {
			for(int b = lef; b <= rig; b++) {
				if(grid[a][b] != i) possible[grid[a][b]] = 0;
			}
		}
	}

	for(int i = 1; i < 10; i++) if(possible[i]) ans++;




	

	fout << ans << endl; 
