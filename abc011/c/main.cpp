#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int N, ans=0;
    cin >> N;
    vector<int> ng(3);
    cin >> ng[0] >> ng[1] >> ng[2];
    bool flag=true;
    sort(ng.begin(), ng.end());
    if(ng[1]-ng[0]==1 && ng[2]-ng[1]==1)
	flag=false;
    for(int i=0; i<3; i++){
	if(N==ng[i])
	    flag=false;
    }
    if(N==300){
	for(int i=0; i<3; i++){
	    if(ng[i]%3==0)
		flag=false;
	}
    }

    cout << (flag? "YES": "NO") << endl;
} 


