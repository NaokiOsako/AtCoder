#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int N, ans=0;
    cin >> N;
    set<int> s;
    for(int i=0; i<N; i++){
	int tmp;
	cin >> tmp;
	s.insert(tmp);
    }
    cout << s.size() << endl;

} 


