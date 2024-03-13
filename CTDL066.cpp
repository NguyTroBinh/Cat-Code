#include <iostream>
#include <vector>

// bac thang

// Co bao nhieu day so (cac so nho hon K) co tong bang N

const int MOD = 1e9 + 7;

int countWays(int N, int K){
	// Mang luu so cach de buoc len bac thang co N bac
	std::vector<int> dp(N + 1, 0);
	// Khoi tao: so bac thang la 0 thi co 1 cach
	dp[0] = 1;
	for(int i = 1; i <= N; i++){
		// duyet qua so cach buoc
		for(int j = 1; j <= K && i - j >= 0; j++){
			dp[i] = (dp[i] + dp[i - j]) % MOD;
		}
	}
	return dp[N];
}

int main(){
	int test;
	std::cin >> test;
	while(test--){
		int N, K;
		std::cin >> N >> K;
		std::cout << countWays(N, K) << std::endl;
	}
	return 0;
}