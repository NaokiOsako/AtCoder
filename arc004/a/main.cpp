#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int N;
    double ans=0;
    cin >> N;
    vector<double> x(N), y(N);    
    for(int i=0; i<N; i++){
	cin >> x[i] >> y[i];
    }

    for(int i=0; i<N; i++){
	for(int j=0; j<N; j++){
	    double tmp = pow(x[i]-x[j], 2)+pow(y[i]-y[j], 2);
	    ans = (ans<tmp? tmp: ans);
	}
    }
    ans = sqrt(ans);
    printf("%.10f\n", ans);

} 
