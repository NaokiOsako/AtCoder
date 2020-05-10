#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int N, ans=0;
    string s;
    cin >> s;
    bool a='0'<=s[0]&&s[0]<='9', b='0'<=s[1]&&s[1]<='9', c='0'<=s[2]&&s[2]<='9'; 
    if(a&&b&&c)
	cout << stoi(s)*2 << endl;
    else
	cout << "error" << endl;
} 


