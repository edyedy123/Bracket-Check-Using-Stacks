#include "stack.h"
#include <string>

bool bracketCheck(const std::string& s){
	Stack<char> stack;
	char temp;
	
	for (int i = 0; i < s.length(); i++) {
		temp = stack.getTop();
		if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
			stack.push(s[i]);
		}
		else if (s[i] == ')') {
			if (temp == '(') {
				stack.pop();
			}
			else {
				return false;
			}
		}
		else if (s[i] == '}') {
			if (temp == '{') {
				stack.pop();
			}
			else {
				return false;
			}
		}
		else if (s[i] == ']') {
			if (temp == '[') {
				stack.pop();
			}
			else {
				return false;
			}
		}
	}

	if (stack.isEmpty())
		return true;
	else
		return false;
	
}