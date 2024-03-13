#include <iostream>

// quan tuong

int main(){
	int test;
	std::cin >> test;
	while(test--){
		long long N;
		std::cin >> N;
		std::cout << 2 * N - 2 << std::endl;
	}
	return 0;
}