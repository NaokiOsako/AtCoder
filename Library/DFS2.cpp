#include<bits/stdc++.h>
using namespace std;

int N, ans = 0;

void DFS(string s) {
    if(s.size()==10){
	return;
    }
    int tmp = stoi(s);
    if(tmp <= N){
	bool three=false, five=false, seven=false;
	for(int i=0; i<s.size(); i++){
	    if(s[i]=='3')
		three=true;
	    else if(s[i]=='5')
		five=true;
	    else if(s[i]=='7')
		seven=true;
	}
	if(three && five && seven)
	    ans++;
    }
    DFS(s+"3");
    DFS(s+"5");
    DFS(s+"7");
}

int main(){
    cin >> N;
    DFS("3");
    DFS("5");
    DFS("7");			    
    cout << ans << endl;
}


