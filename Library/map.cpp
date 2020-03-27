#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string, int> mp;
    mp["dog"] = 3;
    mp["cat"] = 1;
    mp["python"] = 4;

    for(auto itr=mp.begin(); itr!=mp.end(); itr++) {
        cout << "key = " << itr->first;      // キーを表示      
    	cout << ", val = " << itr->second << endl;    // 値を表示
    }
}
