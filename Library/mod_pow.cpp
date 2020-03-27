#include<bits/stdc++.h>
using namespace std;

long long mod = 1e9+7;
long long fact[200005];

long long mod_pow(long long x, long long y){
    long long res = 1;
    while (y > 0){
	    if (y & 1){
		res = res*x%mod;
	    }
	    x = x*x%mod;
	    y >>= 1;
    }
    return res;
}

long long inv(long long a){
    return mod_pow(a, mod-2);
}


long long factorial(int a){
    if (a == 0) return fact[a] = 1;
    if (fact[a] != -1) return fact[a];
    return fact[a] = factorial(a-1) * a % mod;
}
 
long long comb(int n, int r){
    if (n <= 200000) return factorial(n)* inv(factorial(n-r)) % mod * inv(factorial(r)) % mod;
    long long ans = 1;
    for (int i = n; i > n-r; i--){
        ans = (ans * i) % mod;
    }
    for (int i=1; i <= r; i++){
        ans = (ans * inv(i)) % mod;
    }
    return ans;
}
 
int main(){
    long long  n, a, b;
    cin >> n >> a >> b;
    memset(fact, -1, sizeof(fact));
    factorial(min(n, 200000LL));
    
    long long ans;
    ans = mod_pow(2, n)-comb(n, a)-comb(n, b)-1;
    while (ans<0)
	ans += mod;
    cout << ans << endl;  
}
