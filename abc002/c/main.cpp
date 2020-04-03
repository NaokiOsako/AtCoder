#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int a, b, c, d, e, f;
    double ans;
    cin >> a >> b >> c >> d >> e >> f;
    c-=a; d-=b;
    e-=a; f-=b;
    
    ans = (double)(c*f-d*e)/2;    
    printf("%.1f\n", abs(ans));
} 


