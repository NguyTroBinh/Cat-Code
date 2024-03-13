#include <iostream>
#include <stack>

// hau to ve tien to

bool is_operator(char c){
	return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^' || c == '%');
}

std::string Postfix_to_Prefix(std::string Postfix){
	std::stack <std::string> st;
	for(int i = 0; i < Postfix.length(); i++){
		if(is_operator(Postfix[i])){
			std::string operand1 = st.top();
			st.pop();
	        std::string operand2 = st.top();
			st.pop();
			std::string operand = Postfix[i] + operand2 + operand1;
			st.push(operand);
		}
		else{
			std::string s(1, Postfix[i]);  
			st.push(s);
		}
	}
	return st.top();
}

int main(){
	int test;
	std::cin >> test;
	while(test--){
		std::string s;
		std::cin >> s;
		std::cout << Postfix_to_Prefix(s) << std::endl;
	}
	return 0;
}