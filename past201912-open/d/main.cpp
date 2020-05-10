#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int N, ans=0, before=-1, after=-1;
    cin >> N;
    vector<int> a(N);
    for(int i=0; i<N; i++){
	cin >> a[i];
    }
    sort(a.begin(), a.end());

    for(int i=0; i<N; i++){
	if(a[i]==a[i+1]){
	    after=a[i];
	    break;
	}
    }
    int cnt=0;
    for(int i=0; i<N; i++){
	if(cnt==0 && a[i]==after)
	    cnt--;
	
	if(a[i]!=i+1+cnt && a[i]!=after){
	    before=a[i]-1;
	    break;
	}
    }


    if(after == -1){
	cout << "Correct" << endl;
	return 0;
    }





    cout << after << " " << before<< endl;
} 


