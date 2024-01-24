#include <iostream>

// tim kiem nhi phan

std::string binary_search(int a[], int left, int right, int K){
	while(left <= right){
		int mid = (left + right) >> 1;
		if(a[mid] == K) return std::to_string(mid);
		else if(a[mid] > K) right = mid - 1;
		else left = mid + 1;
	}
	return "NO";
}

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int test;
	std::cin >> test;
	while(test--){
		int N, K;
		std::cin >> N >> K;
		int a[N + 1];
		for(int i = 1; i <= N; i++){
			std::cin >> a[i];
		}
		std::cout << binary_search(a, 1, N, K) << std::endl;
	}
	return 0;
}