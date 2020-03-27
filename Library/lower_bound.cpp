#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
	int N; cin >> N;
	vector<int> a(N);
	for (int i=0; i<N; i++)
	    cin >> a[i];		
	deque<int> d;
	
	for (int i=0; i<N; i++) {
		int p = lower_bound(d.begin(), d.end(), a[i])-d.begin();
		cout << *d.begin() <<endl;
		if (p==0)
		    d.push_front(a[i]);
		else
		    d[p - 1] = a[i];
	}

	// for (int i=0; i<d.size(); i++) {
	//     cout << d[i]<<endl;
	// }
		

	
 
	// int ans = d.size();
	// cout << ans << endl;
}


