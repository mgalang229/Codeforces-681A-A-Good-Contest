#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ar array

typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	bool ok=0;
	for(int i=0; i<n; ++i) {
		string s;
		int a, b;
		cin >> s >> a >> b;
		if(a>=2400&&b>a)
			ok=1;
	}
	cout << (ok?"YES":"NO") << "\n";
}
