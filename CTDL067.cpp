#include <iostream>
#include <vector>

// hinh vuong lon nhat

int max_Value(std::vector<std::vector<int>> &grid, int N, int M){
	std::vector<std::vector<int>> dp(N, std::vector<int>(M, 0));
	int maxLength = 0;
	for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++){
			// giu nguyen gia tri hang 1 va cot 1
			if(i == 0 || j == 0){
				dp[i][j] = grid[i][j];
			}
			else if(grid[i][j] == 1){
				dp[i][j] = 1 + std::min(dp[i - 1][j - 1], std::min(dp[i - 1][j], dp[i][j - 1]));
			}
			maxLength = std::max(maxLength, dp[i][j]);
		}
	}
	return maxLength;
}

int main(){
	int test;
	std::cin >> test;
	while(test--){
		int N, M;
		std::cin >> N >> M;
		std::vector<std::vector<int>> grid(N, std::vector<int>(M));
		for(int i = 0; i < N; i++){
			for(int j = 0; j < M; j++){
				std::cin >> grid[i][j];
			}
		}
		if(N == 1 || M == 1) std::cout << "0" << std::endl;
		else std::cout << max_Value(grid, N, M) << std::endl;
	}
	return 0;
}