#include <iostream>
using namespace std;
int stack[5];
int top = 0;
void push(int);
int pop();
void traverse();
int is_empt();
int top_element();
int main()
{
	int element, choice;
	for (;;)
	{
		cout << "Stack Operations.\n";
		cout << "1. Insert into stack (Push operation).\n";
		cout << "2. Delete from stack (Pop operation).\n";
		cout << "3. Print top element of stack.\n";
		cout << "4. Check if stack is empty.\n";
		cout << "5. Traverse stack.\n";
		cout << "6. Exit.\n";
		cout << "Enter your choice.\n";
		cin >> choice;
		switch (choice)
		{
		case 1:
			if (top == 5)
			{
				cout << "Error: Overflow\n\n";
			}
			else
			{
				cout << "Enter a value to insert.\n";
				cin >> element;
				push(element);
			}
			break;
		case 2:
			if (top == 0)
				cout << "Error: Underflow.\n\n";
			else
			{
				element = pop();
				cout << "Element removed from the stack is "
					<< element << "\n";
			}
			break;
		case 3:
			if (!is_empt())
			{
				element = top_element();
				cout << "Element at the top of the stack is "
					<< element;
			}
			else cout << "The stack is empty.\n\n";
			break;
		case 4:
			if (is_empt())
				cout << "The stack is empty.\n\n";
			else
				cout << "The stack isn't empty.\n\n";
			break;
		case 5:
			traverse();
			break;
		case 6:
			exit(0);
		}
	}
}
void push(int value)
{
	stack[top] = value;
	top++;
}
int pop()
{
	top--;
	return stack[top];
}
int top_element()
{
	return stack[top - 1];
}
int is_empt()
{
	if (top == 0)
		return 1;
	else
		return 0;
}
void traverse()
{
	int d;
	if (top == 0)
	{
		cout << "The stack is empty.\n\n";
		return;
	}
	cout << "There are" << top << "elements in the stack.\n";
	for (d = top - 1; d >= 0; d--)
		cout << "\n" << stack[d];

}
