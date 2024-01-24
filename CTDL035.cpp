#include <iostream>
#include <cmath>

// luy thua 001

typedef long long ll;

int main(){
	int test;
	std::cin >> test;
	while(test--){
		ll L, R;
		std::cin >> L >> R;
		for(int k = 40; k >= 1; k--){
			ll left = 0, right = (ll)(pow(R, 1.0 / k) + 10);
			while(left < right){
				ll mid = (left + right) >> 1;
				ll tmp = 1;
				for(int i = 0; i < k; i++){
					tmp *= mid;
					if(tmp >= L) break;
				}
				if(tmp >= L) right = mid;
				else left = mid + 1;
			}
			ll tmp = 1;
			for(int i = 0; i < k; i++){
				tmp *= left;
				if(tmp > R) break;
			}
			if(tmp >= L && tmp <= R){
				std::cout << k << std::endl;
				break;
			}
		}
	}
	return 0;
}