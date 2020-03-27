#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, p, q;
    cin >> N;
	
    vector<int> a(N), b(N), per(N);
    for(int i=0; i<N; i++){
	cin >> a[i] ;
    }
    for(int i=0; i<N; i++){
	cin >> b[i] ;
    }

    for(int i=0; i<N; i++){
	per[i]=i+1;
    }
    int i=0;
    do {

	if(a==per)
	    p=i;
	if(b==per)
	    q=i;
	
	i++;
    }while (next_permutation(per.begin(), per.end()));

    cout << abs(p-q) << endl;
}




