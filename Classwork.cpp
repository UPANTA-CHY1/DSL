
#include <iostream>
#include <stack>
using namespace std;
int main() {
	stack<int> stack,stackname;
	stack.push(1);
	stack.push(2);
	stack.push(4);
	stack.push(5);

		stack.pop();
	stack.pop();
	stackname.top();

	while (!stack.empty()) {
		cout << stack.top() <<" ";
		stack.pop();
	}
}
