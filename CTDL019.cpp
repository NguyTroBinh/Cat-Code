#include <iostream>
#include <algorithm>

// hoan vi ke tiep

int main(){
	int test;
	std::cin >> test;
	while(test--){
		int n;
		std::cin >> n;
		int hv[n];
		for(int i = 0; i < n; i++){
			std::cin >> hv[i];
		}
		std::next_permutation(hv, hv + n);
		for(int i = 0; i < n; i++){
			std::cout << hv[i] << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}