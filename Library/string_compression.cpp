#include <bits/stdc++.h>
using namespace std;

int main() {
    int len;
    string s, t;
    cin >> s;
    
    for (int i = 0; i < s.size(); i++) {
        len = 0;
        for (int j = i; j < s.size(); j++) {
            if(s[i] == s[j])
		len++;
            else
		break;
        }
	t += s[i]+to_string(len);
        i += len - 1;
    }
    cout << t<<endl;
    return 0;
}

