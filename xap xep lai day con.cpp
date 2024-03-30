#include <iostream>
#include <algorithm>

// sap xep lai day con

// Kiem tra day da duoc sap xep hay chua
bool check_sort(int a[], int n){
	for(int i = 0; i < n - 1; i++){
		if(a[i] > a[i + 1]) return false;
	}
	return true;
}

int main(){
	int test;
	std::cin >> test;
	while(test--){
		int n;
		std::cin >> n;
		int a[n], b[n];
		for(int i = 0; i < n; i++){
			std::cin >> a[i];
			b[i] = a[i];
		}
		std::sort(b, b + n);
		int x = 0, y = 0;
		for(int i = 0; i < n; i++){
			if(a[i] == b[i]) x++;
			else break;
		}
		for(int i = n - 1; i >= 0; i--){
			if(a[i] == b[i]) y++;
			else break;
		}
		if(check_sort(a, n)) std::cout << "YES" << std::endl;
		else std::cout << n - (x + y) << std::endl;
	}
	return 0;
}