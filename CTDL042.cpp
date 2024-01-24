#include <iostream>
#include <algorithm>

// gia tri nho nhat cua bieu thuc

typedef unsigned long long ull;

int main(){
	int t;
	std::cin >> t;
	while(t--){
		int n;
		std::cin >> n;
		ull A[n], B[n];
		for(int i = 0; i < n; i++) std::cin >> A[i];
		for(int i = 0; i < n; i++) std::cin >> B[i];
		std::sort(A, A + n, std::greater <ull> ());
		std::sort(B, B + n);
		ull res = 0;
		for(int i = 0; i < n; i++){
			res += A[i] * B[i];
		}
		std::cout << res << std::endl;
	}
	return 0;
}