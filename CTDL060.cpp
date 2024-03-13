#include <iostream>

// dem so 0

int main(){
	int test;
	std::cin >> test;
	while(test--){
		int N;
		std::cin >> N;
		int a[N];
		for(int i = 0; i < N; i++){
			std::cin >> a[i];
		}
		int M = N / 2, count;
		if(a[M] == 1){
			count = 0;
			for(int i = 0; i < M; i++){
				if(a[i] == 0) count++;
			}
		}
		else{
			count = M;
			for(int i = M; i < N; i++){
				if(a[i] == 0) count++;
			}
		}
		std::cout << count << std::endl;
	}
	return 0;
}