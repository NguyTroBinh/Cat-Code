#include <iostream>
#include <cmath>

// sinh xau tu dien

typedef long long ll;

ll kchusodautien(ll n, ll m, ll k){
	ll res;
	float x = (float)(m * log10(n * 1.0));
	x = x - (ll)x;
	float y = pow(10.0, x);
	res = (ll)(y * pow(10, k - 1));
	return res;
}

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int test;
	std::cin >> test;
	while(test--){
		ll n, m, k;
		std::cin >> n >> m >> k;
		std::cout << kchusodautien(n, m, k) << std::endl;
	}
	return 0;
}