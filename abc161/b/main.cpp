#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    double N, M, ans=0, sum=0;
    cin >> N >>M;
    vector<double> a(N);

    for(int i=0; i<N; i++){
	cin >> a[i];
	sum += a[i];
    }
    double tmp = sum/(4*M);

    sort(a.begin(), a.end(), greater<double>());

    bool flag = true;
    for(int i=0; i<M; i++){
	if(a[i]<tmp)
	    flag=false;
    }


    


    cout << (flag ? "Yes": "No") << endl;
} 


