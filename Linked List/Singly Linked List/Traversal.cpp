#include<iostream>
using namespace std;

// Definition of a Node in a singly linked list
struct Node
{
	int data;
	Node* next;

	
	// Constructor to initialize a new node with data
	Node(int new_data)
	{
		this->data = new_data;
		this->next = nullptr;
	}
};

// Function to traverse and print the singly linked list
// Time complexity: O(n)
// Auxiliary Space: O(1)
void traverseList(Node* head)
{
	// A loop that runs till head is nullptr
	while (head != nullptr)
	{
		// Printing data of current node
		cout << head->data << " ";
		// Moving to the next node
		head = head->next;
	}
	cout << endl;
}

// Recursive approach
// Time complexity: O(n)
// Auxiliary Space: O(n) - recursive stack space
void traverseListR(Node* head)
{
	// Base condition: when the head is nullptr
	if (head == nullptr)
	{
		cout << endl;
		return;
	}

	// Printing data of current node
	cout << head->data << " ";
	
	// Moving to the next node
	traverseListR(head->next);
}

int main()
{
	// Create a hard-coded linked list: 10 -> 20 -> 30 -> 40
	Node* head = new Node(10);
	head->next = new Node(20);
	head->next->next = new Node(30);
	head->next->next->next = new Node(40);

	traverseList(head);
	traverseListR(head);

	return 0;
}