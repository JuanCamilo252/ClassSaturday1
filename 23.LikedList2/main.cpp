#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	Node* nextptr;

};

Node* CreateBook(int year) {
	Node* nextptr = (Node*)malloc(sizeof(Node));
	if (nextptr != nullptr) {
		nextptr->data = year;
		nextptr->nextptr = nullptr;

	}
	return nextptr;
}

void PrintList(Node* head) {
	Node* current = head;
	while (current != nullptr)
	{
		printf("%i ", current->data);
		current = current->nextptr;
	}
	printf("\n");

}

void FreeList(Node* head) {
	Node* current = head;
	Node* next;

	while (current != nullptr)
	{
		next = current->nextptr;
		free(current);
		current = next;
	}
}
Node* InsetBeggining(Node* head, int value) {
	Node* newNode = CreateBook(value);
	if (newNode == nullptr) {
		return head;
	}
	newNode->nextptr = head;
}
void InsertEnd(Node* head, int value) {
	Node* newNode = CreateBook(value);
	if (newNode == nullptr)
	{
		return;
	}

	Node* current = head;

	while (current->nextptr != nullptr) {
		current = current->nextptr;
	}
	current->nextptr = newNode;

}

Node* DeleteBeginnig(Node* head) {
	Node* temp = head;
	head = head->nextptr;
	free(temp);
	temp = nullptr;
	return head;
}

Node* DeleteAtEnd(Node* head) {

	if (head == nullptr)
	{
		return nullptr;
	}
	Node* current = head;
	if (head->nextptr == nullptr)
	{
		free(head);
		head = nullptr;
		return head;
	}
	else
	{
		while (current->nextptr->nextptr != nullptr)
		{
			current = current->nextptr;
		}

	}
	free(current->nextptr);
	current->nextptr = nullptr;
	return head;
}


int main() {

	Node* head = CreateBook(1);

	Node* current = head;

	for (int i = 0; i <= 5; i++)
	{
		current->nextptr = CreateBook(i * 2);
		current = current->nextptr;
	}
	PrintList(head);

	head = InsetBeggining(head, 12);

	PrintList(head);

	InsertEnd(head, 25);

	PrintList(head);
	head = DeleteBeginnig(head);
	PrintList(head);
	head = DeleteAtEnd(head);




	FreeList(head);

	return 0;
}