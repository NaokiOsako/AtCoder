#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    double sx, sy, gx, gy, t, v, n;
    bool flag=false;
    cin >> sx >> sy >> gx >> gy >> t >>v;
    cin >> n;
    vector<double> x(n), y(n);

    for(int i=0; i<n; i++){
	cin >> x[i] >> y[i];
    }
    double a, b, c, d;
    for(int i=0; i<n; i++){
	a=x[i]-sx;
	b=y[i]-sy;
	c=x[i]-gx;
	d=y[i]-gy;
	if(sqrtf(a*a+b*b)+sqrtf(c*c+d*d) <= t*v)
	    flag=true;

    }

    cout << (flag? "YES": "NO") << endl;
} 


