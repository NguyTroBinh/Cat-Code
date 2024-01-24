#include <iostream>
#include <queue>

// bien doi day so 1

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int test;
	std::cin >> test;
	while(test--){
		int N;
		std::cin >> N;
		int A[N];
		std::queue <int> q;
		for(int i = 0; i < N; i++){
			std::cin >> A[i];
			q.push(A[i]);
		}
		std::cout << "[";
		for(int i = 0; i < N; i++){
			std::cout << A[i];
			if(i != N - 1) std::cout << " ";
		}
		std::cout << "]" << std::endl;
		int y = 1;
		while(q.size() > 1){
			if(y == 1) std::cout << "[";
			int tmp = q.front();
			q.pop();
			int tmp2 = tmp + q.front();
			q.push(tmp2);
			std::cout << tmp2;
			if(y != q.size() - 1){
				std::cout << " ";
				y++;
			}
			else{
				q.pop();
				std::cout << "]" << std::endl;
				y = 1;
			}
		}
	}
	return 0;
}