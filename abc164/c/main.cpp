#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int N, ans=0;
    string tmp;
    cin >> N;
    // vector<string> s(N);
    set<string> s;

    for(int i=0; i<N; i++){
	cin >> tmp;
	s.insert(tmp);
    }
    
    cout << s.size() << endl;
} 


