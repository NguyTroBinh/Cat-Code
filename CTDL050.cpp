#include <iostream>

typedef long long ll;
const ll mod = 123456789;

// dem day: ket qua tra ve 2 ^ (n - 1)

// ham tinh luy thua nhi phan
ll count(ll n, ll k){
	if(k == 0) return 1;
	if(k == 1) return n % mod;
	ll tmp = count(n, k / 2);
	if(k % 2 == 0) return tmp * tmp % mod;
	else return tmp * tmp % mod * n % mod;
}

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int test;
	std::cin >> test;
	while(test--){
		ll n;
		std::cin >> n;
		std::cout << count(2, n - 1) << std::endl;
	}
	return 0;
}