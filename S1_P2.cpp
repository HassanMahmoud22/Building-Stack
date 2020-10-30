#include <iostream>
using namespace std;

template <class T>
class stack {

private:

	T * Elements; //dynamic array to store elements
	int top,max_size= 100;

public:
	//default constructor
	stack() {
		top = -1;
		Elements = new T[max_size];
	}
	//function to sore values in the stack
	stack (T value, int intial_size) {
		top = -1;
		Elements = new T[max_size];
		for (int i = 0; i < intial_size; i++) {
			top++;
			Elements[top] = value;
		}

	}
	//destructor to free memorey
	~stack() {
		delete[] Elements;
		Elements = NULL;
	}
	//function to puch elements in the stack
	void push(T value) {
		if (top ==( max_size-1) ) {
			cout << "stack full on push" << endl;
		}
		top++;
		Elements[top] = value;
	}
	//function to get the top element in the stack
	T& Top() {
		if (top == -1) {
			cout << "stack is empty" << endl;
		}
		return Elements[top];
	}
	//function to delete the top element in the stack
	void pop() {
		if (top == -1) {
			cout << "Stack full on pop" << endl;
		}
		else
		{
			top--;
		}
	}
	//function to get the size of the stack
	int size()
	{
		return (top + 1 );
	}
	//function to print all elements in the stack
	void print() {
		cout << "[";
		for (int i = 0; i < top + 1; i++) {
			cout << Elements[i] << " ";
		}
		cout << "]"<<endl;
	}
};



int main()
{
	cout << "";
	stack<int> s(3,4);
	s.print();
	cout << s.size() << endl;
	s.pop();
	s.print();
	stack<int> m;
	m.push(10);
	m.push(20);
	m.push(30);
	cout << m.size() << endl;
	m.pop();
	m.print();
	cout << m.Top() << endl;
	return 0;
}
