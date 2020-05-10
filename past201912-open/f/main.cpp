#include<bits/stdc++.h>
using namespace std;
#define ll long long int


string func(string s){
    string ret=s;
    for(int i=0; i<ret.size(); i++){
	if('a'<=ret[i] && ret[i]<='z')
	    ret[i] -= 0x20;
    }
    return ret;
}

int main() {
    string s, tmp="";    
    cin >> s;
    vector<string> ans;
    vector<pair<string, int>> sortans;
    bool flag=true;
    pair<string, int> p;

    for(int i=0; i<s.size(); i++){
	tmp+=s[i];
	if('A'<=s[i] && s[i]<='Z')
	    flag = !flag;
	if(flag){
	    p.first = func(tmp);
	    p.second = ans.size();
	    sortans.push_back(p);
	    
	    ans.push_back(tmp);
	    tmp="";
	}
    }

    sort(sortans.begin(), sortans.end());
    for(auto i : sortans){
	cout << ans[i.second];
    }
    cout << endl;


    


} 


