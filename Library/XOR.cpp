#include<bits/stdc++.h>
using namespace std;

long long calc(long long A) {
	long long cnt1 = (A + 1) / 2;
	long long ans = cnt1 % 2;
	if (A % 2 == 0) ans ^= A;
	return ans;
}

long long calc2(long long A) {
 
	if (A <= 0) return 0;
 
	A++; 
	long long ans = 0;
	for (int i = 0; i < 50; i++)
	{
		long long loop = (1LL << (i + 1));
		long long cnt = (A / loop) * (loop / 2);
		cnt += max(0LL, (A % loop) - (loop / 2));
 
		if (cnt % 2 == 1) {
			ans += 1LL << i;
		}
	} 
	return ans;
}
 
 
int main() {
	long long A, B;
	cin >> A >> B;
	long long ans = calc(B) ^ calc(A - 1);
	cout << ans << endl;
}
