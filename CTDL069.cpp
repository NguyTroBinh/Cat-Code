#include <iostream>

// duong di nho nhat

int main(){
	int test;
	std::cin >> test;
	while(test--){
		int N, M;
		std::cin >> N >> M;
		int dp[N + 1][M + 1];
		for(int i = 1; i <= N; i++){
			for(int j = 1; j <= M; j++){
				std::cin >> dp[i][j];
			}
		}
		int i, j;
		for(i = 1; i <= N; i++){
			for((i == 1) ? j = 2 : j = 1; j <= M; j++){
				if(i == 1){
					dp[i][j] += dp[i][j - 1];
				}
				else if(j == 1){
					dp[i][j] += dp[i - 1][j];
				}
				else{
					dp[i][j] += std::min(dp[i - 1][j - 1], std::min(dp[i - 1][j], dp[i][j - 1]));
				}
			}
		}
		std::cout << dp[N][M] << std::endl;
	}
	return 0;
}