#include <iostream>
#include <algorithm>

// day con K phan tu co tong bang S

int count_array(int a[], int k, int s, int idex){
	if(k == 0){
		if(s == 0) return 1;
		else return 0;
	}
	int res = 0;
	for(int i = idex; i >= 0 && a[i] * k >= s; i--){
		if(a[i] <= s){
			res += count_array(a, k - 1, s - a[i], i - 1);
		}
	}
	return res;
}

int main(){
	int test;
	std::cin >> test;
	while(test--){
		int N, K, S;
		std::cin >> N >> K >> S;
		int a[N];
		for(int i = 0; i < N; i++) std::cin >> a[i];
		std::sort(a, a + N);
		std::cout << count_array(a, K, S, N - 1) << std::endl;
	}
	return 0;
}