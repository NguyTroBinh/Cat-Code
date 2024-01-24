#include <iostream>
#include <vector>
#include <queue>

// kiem tra do thi co phai la cay hay khong

// DFS: duyet theo chieu xau

bool isTree(int N, std::vector <std::vector<int>> graph){
	std::vector <int> inDgree(N + 1, 0);
	// khai bao vector kiem tra dinh da duoc tham
	std::vector <bool> visited(N + 1, false);
	for(int i = 1; i <= N; i++){
		// dem so canh huong ve dinh j
		for(int j : graph[i]){
			inDgree[j]++;
		}
	}
	// hang doi chua cac dinh chua duoc tham
	std::queue <int> q;
	for(int i = 1; i <= N; i++){
		if(inDgree[i] == 0){
			// dinh co don
			return false;
		}
		else{
			visited[i] = true;
			q.push(i);
			break;
		}
	}
	while(!q.empty()){
		int current = q.front();
		q.pop();
		// duyet cac dinh ke voi dinh current
		for(int neighbor : graph[current]){
			if(!visited[neighbor]){
				// neu neighbor chua duoc tham, day vao queue va danh dau true
				visited[neighbor] = true;
				q.push(neighbor);
			}
		}
	}
	for(int i = 1; i <= N; i++){
		if(!visited[i]){
			return false;
		}
	}
	return true;
}

int main(){
	int test;
	std::cin >> test;
	while(test--){
		int N;
		std::cin >> N;
		// khai bao vector chua cac canh
		std::vector <std::vector<int>> graph(N + 1);
		for(int i = 1; i <= N - 1; i++){
			// khai bao 2 dinh
			int u, v;
			std::cin >> u >> v;
			graph[u].push_back(v);
			graph[v].push_back(u);
		}
		if(isTree(N, graph)) std::cout << "YES";
		else std::cout << "NO";
		std::cout << std::endl;
	}
	return 0;
}