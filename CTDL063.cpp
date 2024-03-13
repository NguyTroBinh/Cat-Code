#include <iostream>
#include <vector>

// Dãy con dài nhất có tổng chia hết cho K

/* Sử dụng giải thuật tham lam, kết hợp với kỹ thuật tổng tiền tố và hashing:
Nếu hai tổng tiền tố cùng chia cho K dư r, thì dãy chênh lệch giữa hai tổng tiền tố đó có tổng
chia hết cho K */

int Array_K_element(std::vector<int> &v, int N, int K){
	// Mảng lưu trữ tổng tiền tố: tổng của các phần tử từ chỉ số 0 đến i
	std::vector<int> prefixSum(N + 1);
	prefixSum[0] = 0;
	for(int i = 0; i < N; i++){
		prefixSum[i + 1] = prefixSum[i] + v[i];
	}
	// Mảng lưu chỉ số của các tổng tiền tố có cùng số dư khi chia cho K
	std::vector<int> mod(K, -1);
	int maxLength = 0;   // biến kết quả
	for(int i = 0; i <= N; i++){
		// tính phần dư
		int modValue = (prefixSum[i] % K + K) % K;
		// nếu phần dư đã tồn tại, cập nhật chiều dài dãy con
		if(mod[modValue] != -1){
			maxLength = std::max(maxLength, i - mod[modValue]);
		}
		// nếu phần dư chưa xuất hiện, cập nhật chỉ số của tổng tiền tố
		else mod[modValue] = i;
	}
	return maxLength;
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
		std::vector<int> v(N);
		for(int i = 0; i < N; i++){
			std::cin >> v[i];
		}
		if(K == 1) std::cout << N << std::endl;
		else std::cout << Array_K_element(v, N, K) << std::endl;
	}
	return 0;
}