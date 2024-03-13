#include <iostream>
#include <algorithm>

// sorting 1

int main(){
	int test;
	std::cin >> test;
	while(test--){
		int N, M;
		std::cin >> N;
		int a[N + 1];
		for(int i = 1; i <= N; i++) std::cin >> a[i];
		std::sort(a, a + N + 1);
		if(N % 2 == 0) M = N / 2;
		else M = N / 2 + 1;
		for(int i = N; i >= M; i--){
			std::cout << a[i] << " " << a[N - i + 1] << " ";
		}
		
		std::cout << std::endl;
	}
	return 0;
}