#include<bits/stdc++.h>
using namespace std;
template <std::uint_fast64_t Modulus> class modint {
    using u64 = std::uint_fast64_t;

public:
    u64 a;

    constexpr modint(const u64 x = 0) noexcept : a(x % Modulus) {}
    constexpr u64 &value() noexcept { return a; }
    constexpr const u64 &value() const noexcept { return a; }
    constexpr modint operator+(const modint rhs) const noexcept {
	return modint(*this) += rhs;
    }
    constexpr modint operator-(const modint rhs) const noexcept {
	return modint(*this) -= rhs;
    }
    constexpr modint operator*(const modint rhs) const noexcept {
	return modint(*this) *= rhs;
    }
    constexpr modint operator/(const modint rhs) const noexcept {
	return modint(*this) /= rhs;
    }
    constexpr modint &operator+=(const modint rhs) noexcept {
	a += rhs.a;
	if (a >= Modulus) {
	    a -= Modulus;
	}
	return *this;
    }
    constexpr modint &operator-=(const modint rhs) noexcept {
	if (a < rhs.a) {
	    a += Modulus;
	}
	a -= rhs.a;
	return *this;
    }
    constexpr modint &operator*=(const modint rhs) noexcept {
	a = a * rhs.a % Modulus;
	return *this;
    }
    constexpr modint &operator/=(modint rhs) noexcept {
	u64 exp = Modulus - 2;
	while (exp) {
	    if (exp % 2) {
		*this *= rhs;
	    }
	    rhs *= rhs;
	    exp /= 2;
	}
	return *this;
    }
};

#include <utility>

template <class T, class U> constexpr T power(T x, U exp) {
    T ret = static_cast<T>(1);
    while (exp) {
	if (exp % static_cast<U>(2) == static_cast<U>(1))
	    ret *= x;
	exp /= static_cast<U>(2);
	x *= x;
    }
    return ::std::move(ret);
}

int main() {
    using mint = modint<1000000007>;
    int N;
    mint K=0, ans=0, tmp=0, tmp2=0;
    cin >> N >> K.a;
    vector<int> a(N);
    for(int i=0; i<N; i++){
    	cin >> a[i];
    }
 
    for(int i=0; i<N; i++){
    	for(int j=i; j<N; j++){
    	    if(a[i]>a[j])
    		tmp+=1;
    	}
    	for(int j=0; j<N; j++){
    	    if(a[i]>a[j])
    		tmp2+=1;		
    	}
    }
    ans = tmp*K + (K-1)*K/2*tmp2;
    cout << ans.a << endl;
}
