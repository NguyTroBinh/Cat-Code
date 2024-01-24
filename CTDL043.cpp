#include <iostream>
#include <algorithm>

// sap xep cong viec 1

// khai bao bien cong viec
struct job{
	int begin, end;
};

// sap xep cong viec
bool compare(job x, job y){
	return x.end < y.end;
}

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int test;
	std::cin >> test;
	while(test--){
		int N;
		std::cin >> N;
		int b[N], e[N];
		// gia tri bat dau
		for(int i = 0; i < N; i++){
			std::cin >> b[i];
		}
		// gia tri ket thuc
		for(int i = 0; i < N; i++){
			std::cin >> e[i];
		}
		job w[N];
		for(int i = 0; i < N; i++){
			w[i].begin = b[i];
			w[i].end = e[i];
		}
		std::sort(w, w + N, compare);
		int result = 0;   // bien luu ket qua
		int i = 0;   // chi so bat dau cong viec
		for(int j = 1; j < N; j++){
			if(w[j].begin >= w[i].end){
				result++;
				i = j;
			}
		}
		std::cout << result + 1 << std::endl;
	}
	return 0;
}