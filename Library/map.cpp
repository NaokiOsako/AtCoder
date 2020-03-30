#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int N, M, ans=0;
    cin >> N;
    string s;
    map<string, int> mp;

    for(int i=0; i<N; i++){
	cin >> s;
	mp[s]++;
    }
    for( auto i = mp.begin(); i != mp.end(); i++ ){
      cout << i->first << " " << i->second << "\n";
  }
    cout << ans << endl;
} 

