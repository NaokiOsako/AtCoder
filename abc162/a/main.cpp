#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int N, ans=0;
    string s;
    cin >> s;
    bool flag=false;

    if(s[0]=='7' || s[1]=='7' || s[2]=='7')
	flag=true;
    

    cout << (flag ? "Yes": "No") << endl;
} 


