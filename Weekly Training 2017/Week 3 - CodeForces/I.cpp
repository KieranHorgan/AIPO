#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll n, m, l, ans;
vector<int> a;
string s;
bool visited[11][11][11];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> l >> n >> m;

	for(int i = 0; i < l; i++) {
		for(int j = 0; j < n; j++) {
			for(int k = 0; k < m; k++) {
				char c;
				cin >> c;
				if(c=='#') visited[i][j][k] = 1;
			}
		}
	}

	int t1, t2;
	cin >> t1 >> t2;
	t1--;
	t2--;

	queue<pair<int,pair<int,int>>> q;
	q.push({0,{t1,t2}});

	while(!q.empty()) {
		pair<int, pair<int, int>> u = q.front();
		q.pop();

		int x = u.second.first;
		int y = u.second.second;
		int z = u.first;
//		cout << z << " " << x << " " << y << endl;

		if(x<0||x>=n || y<0||y>=m || z<0||z>=l || visited[z][x][y]) {
			continue;
		}
		visited[z][x][y] = 1;
		ans++;
		q.push({z+1,{x,y}});
		q.push({z-1,{x,y}});
		q.push({z,{x+1,y}});
		q.push({z,{x-1,y}});
		q.push({z,{x,y+1}});
		q.push({z,{x,y-1}});


	}


	cout << ans << endl;
}