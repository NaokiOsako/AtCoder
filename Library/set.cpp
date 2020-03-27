#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    string S;
    cin >> S;
    cin >> N;
    set<string> ans;

    for(int i=0; i<(int)S.size()-N+1;i++){
	ans.insert(S.substr(i, N));
    }
    cout << ans.size() << endl;
}


