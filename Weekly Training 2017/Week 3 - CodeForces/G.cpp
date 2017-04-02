#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll n, m, q, k, ans;
vector<int> a;
string s;
priority_queue<int> pq;
map<int, bool> used;

int shrink(int x) {
	if(x%2) x--;
	if(x==0) return -1;
	x/=2;
	if(used[x]) return shrink(x);
	else return x;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;

	for(int i = 0; i < n; i++) {
		int x;
		cin >> x;
		used[x]=1;
		pq.push(x);
	}

	while(true) {
		int x = pq.top();
		pq.pop();
		int y = shrink(x);
		if(y==-1) {
			pq.push(x);
			break;
		}
		used[y]=1;
		pq.push(y);
	}

	while(!pq.empty()) {
		cout << pq.top() << " ";
		pq.pop();
	}
	cout << endl;
}