#include <iostream>
#include <algorithm>

// BRT

int main(){
	int test;
	std::cin >> test;
	while(test--){
		int n;
		std::cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) std::cin >> a[i];
		std::sort(a, a + n);
		int count, Min = 1e9 + 7;
		for(int i = 1; i < n; i++){
			if(a[i] - a[i - 1] < Min){
				Min = a[i] - a[i - 1];
				count = 0;
			}
			else if(a[i] - a[i - 1] == Min) count++;
		}
		std::cout << Min << " " << count << std::endl;
	}
	return 0;
}