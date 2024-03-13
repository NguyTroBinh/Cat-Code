#include <iostream>
#include <stack>

// dao nguoc ngan xep

std::stack<int> res;

void reverse_stack(std::stack<int> &st){
	// dieu kien dung
	if(st.empty()){
		// in ra stack
		while(!res.empty()){
			std::cout << res.top() << " ";
			res.pop();
		}
	}
	res.push(st.top());
	st.pop();
	reverse_stack(st);
	return;
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
		int a[N];
		std::stack<int> st;
		for(int i = 0; i < N; i++){
			std::cin >> a[i];
		}
		for(int i = N - 1; i >= 0; i--){
			st.push(a[i]);
		}
		reverse_stack(st);
	}
	return 0;
}