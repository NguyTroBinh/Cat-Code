#include <iostream>

// sap xep chen

int main(){
	int test;
	std::cin >> test;
	while(test--){
		int n;
		std::cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) std::cin >> a[i];
		for(int i = 0; i < n; i++){
			int key = a[i], j = i - 1;
			while(j >= 0 && a[j] > key){
				a[j + 1] = a[j];
				j--;
			}
			std::cout << "Buoc " << i + 1 << ": ";
			a[j + 1] = key;
			for(int i = 0; i < n; i++) std::cout << a[i] << " ";
			std::cout << std::endl;
		}
	}
	return 0;
}