#include <iostream>
#include <algorithm>

// tong nho nhat

int main(){
	int t;
	std::cin >> t;
	while(t--){
		int n;
		std::cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			std::cin >> a[i];
		}
		std::sort(a, a + n);
		int num1 = 0, num2 = 0;
		for(int i = 0; i < n; i += 2){
			num1 = num1 * 10 + a[i];
		}
		for(int j = 1; j < n; j += 2){
			num2 = num2 * 10 + a[j];
		}
		int res = num1 + num2;
		std::cout << res << std::endl;
	}
	return 0;
}