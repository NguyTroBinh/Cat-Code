#include <iostream>
#include <queue>

// noi day 1

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int test;
	std::cin >> test;
	while(test--){
		int N;
		std::cin >> N;
		// khai bao hang doi uu tien
		int length[N];
		std::priority_queue <int, std::vector<int>, std::greater<int>> q;
		for(int i = 0; i < N; i++){
			std::cin >> length[i];
			q.push(length[i]);
		}
		int result = 0;
		while(q.size() != 1){
			// chieu dai day nho nhat
			int li = q.top();
			q.pop();
			// chieu dai day nho thu hai
			int lj = q.top();
			q.pop();
			// thoi gian noi hai day
			int l = li + lj;
			q.push(l);
			result += l;
		}
		std::cout << result << std::endl;
	}
	return 0;
}