#include <iostream>

// tinh floorX

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int test;
	std::cin >> test;
	while(test--){
		int N;
		long long X;
		std::cin >> N >> X;
		long long a[N];
		for(int i = 0; i < N; i++){
			std::cin >> a[i];
		}
		if(a[N - 1] <= X){
			std::cout << N << std::endl;
		}
		else if(a[0] > X){
			std::cout << "-1" << std::endl;
		}
		else{
			int post;
		    for(int i = 0; i < N; i++){
			    if(a[i] <= X) post = i + 1;
			    else break;
		    }
		std::cout << post << std::endl;
		}
	}
	return 0;
}