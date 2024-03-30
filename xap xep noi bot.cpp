#include <iostream>

// sap xep noi bot

int main(){
	int test;
	std::cin >> test;
	while(test--){
		int n;
		std::cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) std::cin >> a[i];
		int stop = 1, count = 0;
		while(stop != 0){
			int check = 0, i = 0;
			while(i < n - 1){
				if(a[i] > a[i + 1]){
					std::swap(a[i], a[i + 1]);
					check = 1;
				}
				i++;
			}
			if(check == 1){
				count++;
			}
			else break;
			std::cout << "Buoc " << count << ": ";
			for(int i = 0; i < n; i++) std::cout << a[i] << " ";
			std::cout << std::endl;
		}
	}
	return 0;
}