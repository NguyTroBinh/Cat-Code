#include <iostream>
#include <vector>

// chuyen tu danh sach canh sang danh sach ke

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int test;
	std::cin >> test;
	while(test--){
		int V, E;
		std::cin >> V >> E;
		std::vector <std::vector<int>> ds(V + 1);
		for(int i = 1; i <= E; i++){
			int u, v;
			std::cin >> u >> v;
			ds[u].push_back(v);
			ds[v].push_back(u);
		}
		for(int i = 1; i <= V; i++){
			std::cout << "D" << i << ": ";
			// duyet cac dinh ke voi dinh i
			for(int j : ds[i]){
				std::cout << j << " ";
			}
			std::cout << std::endl;
		}
	}
	return 0;
}