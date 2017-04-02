#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll n, m, q, k, ans;
vector<int> a;
string s;

int a1, a2, b1, b2, c1, c2;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;

	int area = a1*a2 + b1*b2 + c1*c2;
	if(floor(sqrt((double)area)) != sqrt((double)area)) {
		cout << -1 << endl;
		return 0;
	}
	if(!(a1==sqrt(area) || a2==sqrt(area) || b1==sqrt(area) || b2==sqrt(area) || c1==sqrt(area) || c2==sqrt(area))) {
		cout << -1 << endl;
		return 0;
	}

	int x = sqrt(area);

	cout << x << endl;

	if(a1 == x) {
		for(int i = 0; i < a2; i++) {
			for(int j = 0; j < x; j++) {
				cout << 'A';
			}
			cout << endl;
		}


		if(b1+c1 == x) {
			for(int i = 0; i < b2; i++) {
				for(int j = 0; j < b1; j++) {
					cout << "B";
				}
				for(int j = 0; j < c1; j++) {
					cout << "C";
				}
				cout << endl;
			}
		} else if(b1+c2 == x) {
			for(int i = 0; i < b2; i++) {
				for(int j = 0; j < b1; j++) {
					cout << "B";
				}
				for(int j = 0; j < c2; j++) {
					cout << "C";
				}
				cout << endl;
			}
		} else if(b2+c1 == x) {
			for(int i = 0; i < b1; i++) {
				for(int j = 0; j < b2; j++) {
					cout << "B";
				}
				for(int j = 0; j < c1; j++) {
					cout << "C";
				}
				cout << endl;
			}
		} else if(b2+c2 == x) {
			for(int i = 0; i < b1; i++) {
				for(int j = 0; j < b2; j++) {
					cout << "B";
				}
				for(int j = 0; j < c2; j++) {
					cout << "C";
				}
				cout << endl;
			}
		}

//------------------------------------------------------
		if(b1 == x) {
			for(int i = 0; i < b2; i++) {
				for(int j = 0; j < x; j++) {
					cout << 'B';
				}
				cout << endl;
			}

			if(c1 == x) {
				for(int i = 0; i < c2; i++) {
					for(int j = 0; j < x; j++) {
						cout << 'C';
					}
					cout << endl;
				}
				return 0;
			} else if(c2 == x) {
				for(int i = 0; i < c1; i++) {
					for(int j = 0; j < x; j++) {
						cout << 'C';
					}
					cout << endl;
				}
				return 0;
			}

		} else if(b2 == x) {
			for(int i = 0; i < b1; i++) {
				for(int j = 0; j < x; j++) {
					cout << 'B';
				}
				cout << endl;
			}

			if(c1 == x) {
				for(int i = 0; i < c2; i++) {
					for(int j = 0; j < x; j++) {
						cout << 'C';
					}
					cout << endl;
				}
				return 0;
			} else if(c2 == x) {
				for(int i = 0; i < c1; i++) {
					for(int j = 0; j < x; j++) {
						cout << 'C';
					}
					cout << endl;
				}
				return 0;
			}

		}
//------------------------------------------------------

	} else if(a2 == x) {
		for(int i = 0; i < a1; i++) {
			for(int j = 0; j < x; j++) {
				cout << 'A';
			}
			cout << endl;
		}


		if(b1+c1 == x) {
			for(int i = 0; i < b2; i++) {
				for(int j = 0; j < b1; j++) {
					cout << "B";
				}
				for(int j = 0; j < c1; j++) {
					cout << "C";
				}
				cout << endl;
			}
		} else if(b1+c2 == x) {
			for(int i = 0; i < b2; i++) {
				for(int j = 0; j < b1; j++) {
					cout << "B";
				}
				for(int j = 0; j < c2; j++) {
					cout << "C";
				}
				cout << endl;
			}
		} else if(b2+c1 == x) {
			for(int i = 0; i < b1; i++) {
				for(int j = 0; j < b2; j++) {
					cout << "B";
				}
				for(int j = 0; j < c1; j++) {
					cout << "C";
				}
				cout << endl;
			}
		} else if(b2+c2 == x) {
			for(int i = 0; i < b1; i++) {
				for(int j = 0; j < b2; j++) {
					cout << "B";
				}
				for(int j = 0; j < c2; j++) {
					cout << "C";
				}
				cout << endl;
			}
		}

//------------------------------------------------------
		if(b1 == x) {
			for(int i = 0; i < b2; i++) {
				for(int j = 0; j < x; j++) {
					cout << 'B';
				}
				cout << endl;
			}

			if(c1 == x) {
				for(int i = 0; i < c2; i++) {
					for(int j = 0; j < x; j++) {
						cout << 'C';
					}
					cout << endl;
				}
				return 0;
			} else if(c2 == x) {
				for(int i = 0; i < c1; i++) {
					for(int j = 0; j < x; j++) {
						cout << 'C';
					}
					cout << endl;
				}
				return 0;
			}

		} else if(b2 == x) {
			for(int i = 0; i < b1; i++) {
				for(int j = 0; j < x; j++) {
					cout << 'B';
				}
				cout << endl;
			}

			if(c1 == x) {
				for(int i = 0; i < c2; i++) {
					for(int j = 0; j < x; j++) {
						cout << 'C';
					}
					cout << endl;
				}
				return 0;
			} else if(c2 == x) {
				for(int i = 0; i < c1; i++) {
					for(int j = 0; j < x; j++) {
						cout << 'C';
					}
					cout << endl;
				}
				return 0;
			}

		}
//------------------------------------------------------
	} else if(b1 == x) {
		for(int i = 0; i < b2; i++) {
			for(int j = 0; j < x; j++) {
				cout << 'B';
			}
			cout << endl;
		}


		if(a1+c1 == x) {
			for(int i = 0; i < a2; i++) {
				for(int j = 0; j < a1; j++) {
					cout << "A";
				}
				for(int j = 0; j < c1; j++) {
					cout << "C";
				}
				cout << endl;
			}
		} else if(a1+c2 == x) {
			for(int i = 0; i < a2; i++) {
				for(int j = 0; j < a1; j++) {
					cout << "A";
				}
				for(int j = 0; j < c2; j++) {
					cout << "C";
				}
				cout << endl;
			}
		} else if(a2+c1 == x) {
			for(int i = 0; i < a1; i++) {
				for(int j = 0; j < a2; j++) {
					cout << "A";
				}
				for(int j = 0; j < c1; j++) {
					cout << "C";
				}
				cout << endl;
			}
		} else if(a2+c2 == x) {
			for(int i = 0; i < a1; i++) {
				for(int j = 0; j < a2; j++) {
					cout << "A";
				}
				for(int j = 0; j < c2; j++) {
					cout << "C";
				}
				cout << endl;
			}
		}

	} else if(b2 == x) {
		for(int i = 0; i < b1; i++) {
			for(int j = 0; j < x; j++) {
				cout << 'B';
			}
			cout << endl;
		}


		if(a1+c1 == x) {
			for(int i = 0; i < a2; i++) {
				for(int j = 0; j < a1; j++) {
					cout << "A";
				}
				for(int j = 0; j < c1; j++) {
					cout << "C";
				}
				cout << endl;
			}
		} else if(a1+c2 == x) {
			for(int i = 0; i < a2; i++) {
				for(int j = 0; j < a1; j++) {
					cout << "A";
				}
				for(int j = 0; j < c2; j++) {
					cout << "C";
				}
				cout << endl;
			}
		} else if(a2+c1 == x) {
			for(int i = 0; i < a1; i++) {
				for(int j = 0; j < a2; j++) {
					cout << "A";
				}
				for(int j = 0; j < c1; j++) {
					cout << "C";
				}
				cout << endl;
			}
		} else if(a2+c2 == x) {
			for(int i = 0; i < a1; i++) {
				for(int j = 0; j < a2; j++) {
					cout << "A";
				}
				for(int j = 0; j < c2; j++) {
					cout << "C";
				}
				cout << endl;
			}
		}

	} else if(c1 == x) {
		for(int i = 0; i < c2; i++) {
			for(int j = 0; j < x; j++) {
				cout << 'C';
			}
			cout << endl;
		}


		if(a1+b1 == x) {
			for(int i = 0; i < a2; i++) {
				for(int j = 0; j < a1; j++) {
					cout << "A";
				}
				for(int j = 0; j < b1; j++) {
					cout << "B";
				}
				cout << endl;
			}
		} else if(a1+b2 == x) {
			for(int i = 0; i < a2; i++) {
				for(int j = 0; j < a1; j++) {
					cout << "A";
				}
				for(int j = 0; j < b2; j++) {
					cout << "B";
				}
				cout << endl;
			}
		} else if(a2+b1 == x) {
			for(int i = 0; i < a1; i++) {
				for(int j = 0; j < a2; j++) {
					cout << "A";
				}
				for(int j = 0; j < b1; j++) {
					cout << "B";
				}
				cout << endl;
			}
		} else if(a2+b2 == x) {
			for(int i = 0; i < a1; i++) {
				for(int j = 0; j < a2; j++) {
					cout << "A";
				}
				for(int j = 0; j < b2; j++) {
					cout << "B";
				}
				cout << endl;
			}
		}

	} else if(c2 == x) {
		for(int i = 0; i < c1; i++) {
			for(int j = 0; j < x; j++) {
				cout << 'C';
			}
			cout << endl;
		}


		if(a1+b1 == x) {
			for(int i = 0; i < a2; i++) {
				for(int j = 0; j < a1; j++) {
					cout << "A";
				}
				for(int j = 0; j < b1; j++) {
					cout << "B";
				}
				cout << endl;
			}
		} else if(a1+b2 == x) {
			for(int i = 0; i < a2; i++) {
				for(int j = 0; j < a1; j++) {
					cout << "A";
				}
				for(int j = 0; j < b2; j++) {
					cout << "B";
				}
				cout << endl;
			}
		} else if(a2+b1 == x) {
			for(int i = 0; i < a1; i++) {
				for(int j = 0; j < a2; j++) {
					cout << "A";
				}
				for(int j = 0; j < b1; j++) {
					cout << "B";
				}
				cout << endl;
			}
		} else if(a2+b2 == x) {
			for(int i = 0; i < a1; i++) {
				for(int j = 0; j < a2; j++) {
					cout << "A";
				}
				for(int j = 0; j < b2; j++) {
					cout << "B";
				}
				cout << endl;
			}
		}
	}
}