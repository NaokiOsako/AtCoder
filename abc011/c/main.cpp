#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<int> ng(3);

bool NG(int a){
    for(int i=0; i<3; i++){
	if(ng[i] == a)
	    return false;
    }
    return true;
}

int main() {
    int N, ans=0;
    cin >> N;
    cin >> ng[0] >> ng[1] >> ng[2];
    bool flag=true;
    sort(ng.begin(), ng.end());
    
    flag = NG(N);    
    ans = N;
    for(int i=0; i<100; i++){
	for(int j=3; j>0; j--){
	    if(NG(ans-j)){
		ans -= j;
		break;
	    }
	}
	if(ans <=  0)
	    break;
    }
    if(ans > 0)
	flag =false;


    cout << (flag? "YES": "NO") << endl;
} 


