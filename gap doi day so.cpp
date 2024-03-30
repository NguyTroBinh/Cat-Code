#include <iostream>
#include <cmath>

// gap doi day so

typedef long long ll;

ll result(int n, ll k){
	ll find = pow(2, n - 1);
	if(k == find) return n;
	else if(k < find) return result(n - 1, k);
	else return result(n - 1, k - find);
}

int main(){
	int test;
	std::cin >> test;
	while(test--){
		int n;
		ll k;
		std::cin >> n >> k;
		std::cout << result(n, k) << std::endl;
	}
	return 0;
}