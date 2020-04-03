#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, ans=0, maxNum=0;
    cin >> N;
    map<string, int> mp;
    string s;
    for(int i=0; i<N; i++){
	cin >> s;
	mp[s]++;
	maxNum = max(maxNum, mp[s]);
    }

    for(auto itr = mp.begin(); itr != mp.end(); ++itr) {
	if(maxNum == itr->second){
	    cout << itr->first << endl;
	    return 0;
	}
    }

}

