#include <iostream>
#include <algorithm>

// hoan vi nguoc

int main(){
	int test;
	std::cin >> test;
	while(test--){
		int n;
		std::cin >> n;
		int hv[n];
		// khoi tao hoan vi dau tien
		for(int i = 0; i < n; i++){
			hv[i] = n - i;
		}
		do{
			for(int i = 0; i < n; i++){
				std::cout << hv[i];
			}
			std::cout << " ";
		}while(std::prev_permutation(hv, hv + n));
		std::cout << std::endl;
	}
	return 0;
}