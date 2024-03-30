#include <iostream>

// sap xep quan hau 1

// mang ket qua
int res[10] = {1, 0, 0, 2, 10, 4, 40, 92, 352, 724};

int main(){
	int test;
	std::cin >> test;
	while(test--){
		int n;
		std::cin >> n;
		std::cout << res[n - 1] << std::endl;
	}
	return 0;
}