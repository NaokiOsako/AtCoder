#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int N, ans=0;
    string s, t;
    bool flag=true;
    cin >> s;
    cin >> t;

    for(int i=0; i<s.size(); i++){
	if(s[i]!=t[i])
	    flag=false;
	
    }

    cout << (flag ? "Yes": "No") << endl;
} 


