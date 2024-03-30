#include <iostream>
#include <algorithm>

// may ATM

int main(){
	int test;
	std::cin >> test;
	while(test--){
		int n, s;
		std::cin >> n >> s;
		int money[n];
		for(int i = 0; i < n; i++) std::cin >> money[i];
		// sap xep menh gia tien theo thu tu tang dan
		std::sort(money, money + n);
		int count = 0, idex = n - 1;
		while(s > 0 && idex >= 0){
			if(s >= money[idex]){
				s -= money[idex];
				count++;
			}
			idex--;
		}
		std::cout << count << std::endl;
	}
	return 0;
}