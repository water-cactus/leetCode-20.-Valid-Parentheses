#include <iostream>
#include <string>
#include <stack>
bool isValid(std::string);

int main() {
	std::string s = "{[()]}";

	bool ans = isValid(s);

	return 1;
}


bool isValid(std::string s) {
	std::stack<char> st;

	for (char c : s) {
		if (c == '[' || c == '{' || c == '(') {
			st.push(c);
		}
		else if (st.empty() ||
			st.top() == '[' && c != ']' ||
			st.top() == '(' && c != ')' ||
			st.top() == '{' && c != '}')
		{

			return false;
		}
		else {
			st.pop();
		}

	}
	return st.empty();
}

