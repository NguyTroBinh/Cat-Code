#include <iostream>

// sap xep doi cho truc tiep

int main(){
	int test;
	std::cin >> test;
	while(test--){
		int n;
		std::cin >> n;
		int a[n];
		for(int i = 0; i <n; i++) std::cin >> a[i];
		int check = 0, count = 0;  // dem so buoc
		for(int i = 0; i < n - 1; i++){
			for(int j = i + 1; j < n; j++){
				if(a[i] > a[j]){
					std::swap(a[i], a[j]);
					check = 1;
				}
			}
			if(check == 1){
				count++;
				std::cout << "Buoc " << count << ": ";
				for(int i = 0; i < n; i++) std::cout << a[i] << " ";
				std::cout << std::endl;
			}
		}
	}
	return 0;
}