#pragma once
template <typename T>
class Stack {
	T array[50];
	int top;
public:
	Stack() { top = 0;}
	void push(T data);
	void pop();
	T getTop() const;
	bool isEmpty() const;
};
template <typename T>
void Stack<T>::push(T data) {
	if (top != 50) {
		array[top] = data;
		top++;
	}
}
template <typename T>
void Stack<T>::pop() {
	if (top > 0) {
		top--;
	}
}
template <typename T>
T Stack<T>::getTop() const {
	if (top != 0) {
		return array[top - 1];
	}
}
template <typename T>
bool Stack<T>::isEmpty() const {
	return top == 0;
}
