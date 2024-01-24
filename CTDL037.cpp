#include <iostream>

// doi tien

int money[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};

int count_money(int N){
	int cnt = 0, idex = 9;
	while(N > 0){
		if(N >= money[idex]){
			cnt += N / money[idex];
			N %= money[idex];
		}
		idex--;
	}
	return cnt;
}

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int test;
	std::cin >> test;
	while(test--){
		int N;
		std::cin >> N;
		std::cout << count_money(N) << std::endl;
	}
	return 0;
}