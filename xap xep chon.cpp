#include <iostream>

// sap xep chon

int main(){
	int test;
	std::cin >> test;
	while(test--){
		int n;
		std::cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			std::cin >> a[i];
		}
		int count = 0;
		for(int i = 0; i < n - 1; i++){
			int idex = i, check = 0;
			for(int j = i + 1; j < n; j++){
				if(a[j] < a[idex]){
					idex = j;
					check = 1;
				}
			}
			if(check == 1){
				std::swap(a[idex], a[i]);
				count++;
				std::cout << "Buoc " << count << ": ";
				for(int i = 0; i < n; i++) std::cout << a[i] << " ";
				std::cout << std::endl;
			}
		}
	}
	return 0;
}