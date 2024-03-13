#include <iostream>

// xau nhi phan co do dai n

#define mod 1000000000

int res[1111111], n, k;

void solve(){
	std::cin >> n >> k;
	res[0] = res[1] = 2;
	for(int i = 2; i <= n; i++){
	    if(i <= k){
	    	res[i] = (res[i - 1] * 2) % mod;
		}
		else{
			res[i] = (res[i - 1] * 2 - res[i - k - 1]) % mod;
		}
		if(res[i] < 0) res[i] += mod;
	}
	std::cout << res[n] << std::endl;
}

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int test;
	std::cin >> test;
	while(test--){
		solve();
	}
	return 0;
}