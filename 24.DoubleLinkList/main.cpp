#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	Node* next;
	Node* previous;
};
//Node* CreateNode(int value) {
//	Node* nextptr = (Node*)malloc(sizeof(Node));
//	if (nextptr != nullptr) {
//		nextptr->data = value;
//		nextptr->previous = nullptr;
//		nextptr->next = nullptr;
//	}
//	return nextptr;
//}

Node* InsertAtBeggining(Node* head, int value) {
	Node* nextNode = (Node*)malloc(sizeof(Node));
	
	if (nextNode != nullptr)
	{
		nextNode->data = value;
		nextNode->previous = nullptr;
		
		if (head == nullptr)
		{
			nextNode->next = nullptr;
			return nextNode;
		}
		nextNode->next = head;
		head->previous = nextNode;
		return nextNode;
	}

	
	
}
void InsertAtEnd(Node** head, Node** tail,int value) {
	Node* newNode = (Node*)malloc(sizeof(Node));
	if (newNode!=nullptr)
	{
		newNode->data = value;
		newNode->next = nullptr;
		
		if (*head == nullptr) {
			newNode->previous = nullptr;
			*head = newNode;
			*tail = newNode;
			return;
		}

		newNode->previous = *tail;
		(*tail)->next = newNode;
		*tail = newNode;
	}

}
void PrintListForward(Node* head) {
	Node* current = head;
	while (current != nullptr)
	{
		printf("%i ", current->data);
		current = current->next;
	}
	printf("\n");


}


void PrintListBackwards(Node* tail) {
	Node* current = tail;
	while (current != nullptr)
	{
		printf("%i ", current->data);
		current = current->previous;
	}
	printf("\n");

}
Node* SearchNode(Node* head,int value) {
	Node* current = head;
	while (current != nullptr)
	{
		if (current->data == value) {
			return current;
		}
		current = current->next;
	}
	return nullptr;
}
void DeleteNode(Node** head, Node** tail, Node* target) {
	if (target == nullptr) {
		return;
	}
	else if (target == *head) {
		*head = target->next;
		if (*head != nullptr) {
			(*head)->previous = nullptr;
		}
		else
		{
			*tail = nullptr;
		}
	}
	else if (*tail == target) {
		*tail = target->previous;
		if (*tail != nullptr) {
			(*tail)->next = nullptr;
		}
		else
		{
			*head = nullptr;
		}
	}
	else {
		target->previous->next = target->next;
		target->next->previous = target->previous;
	}

	free(target);
}
void FreeList(Node* head) {
	Node* current = head;
	Node* next;

	while (current != nullptr)
	{
		next = current->next;
		free(current);
		current = next;
	}
}


int main() {

	Node* head = nullptr;
	Node* tail = nullptr;

	InsertAtEnd(&head, &tail, 20);
	InsertAtEnd(&head, &tail, 30);
	InsertAtEnd(&head, &tail, 40);
	InsertAtEnd(&head, &tail, 50);
	PrintListForward(head);
	head = InsertAtBeggining(head, 10);
	PrintListForward(head); 
	PrintListBackwards(tail);
	Node* tempNode = SearchNode(head, 40);
	if (tempNode != nullptr) {
		printf("Node Found Value of: %i\n", tempNode->data);
	}
	DeleteNode(&head, &tail, tempNode);
	PrintListForward(head);
	FreeList(head);
	return 0;
}
