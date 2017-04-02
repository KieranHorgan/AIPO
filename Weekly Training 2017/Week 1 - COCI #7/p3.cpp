#include <bits/stdc++.h>

#define ll long long

using namespace std;

int n, m, ans;
ll runs = 0;
int l[3];
string s;

int lft[5005][3];

string solve(string prev, int a, int b, int c) {
//	cout << prev << " " << a << " " << b << " " << c << " " << a+b+c << endl;
	if(prev.length() == n) return prev;
	int i = prev.length();
	if(i>0) {
		if(lft[i][0]>b+c || lft[i][1]>a+c || lft[i][2]>a+b) return "";
	}
	runs++;

	if('a' != s[i] && a) {
		string x = solve(prev+'a', a-1, b, c);
		if(x != "") return x;
	}
	if('b' != s[i] && b) {
		string x = solve(prev+'b', a, b-1, c);
		if(x != "") return x;
	}
	if('c' != s[i] && c) {
		string x = solve(prev+'c', a, b, c-1);
		if(x != "") return x;
	}
	return "";
}

int main() {
	cin >> n;

	for(int i = 0; i < n; i++) {
		char x;
		cin >> x;
		l[x-'a']++;
	}

	cin >> s;
	for(int i = n-1; i >= 0; i--) {
		lft[i][0] = lft[i+1][0];
		lft[i][1] = lft[i+1][1];
		lft[i][2] = lft[i+1][2];

		lft[i][(int)s[i]-'a']++;
	}


	cout << solve("", l[0], l[1], l[2]) << endl;


}