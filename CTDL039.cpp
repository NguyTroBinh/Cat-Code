#include <iostream>
#include <algorithm>

// tim max

int mod = 1e9 + 7;

int main(){
	int t;
	std::cin >> t;
	while(t--){
		int n;
		std::cin >> n;
		int a[n];
		for(int i = 0; i <= n - 1; i++){
			std::cin >> a[i];
		}
		std::sort(a, a + n);
		int sum = 0;
		for(int i = 0; i <= n - 1; i++){
			sum += a[i] * i;
			sum %= mod;
		}
		std::cout << sum << std::endl;
	}
	return 0;
}