#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book
{
	char title[20];
	int year;
	float rating;
	Book* next;
};

Book* CreateBook(char title[20], int year, float rating) {
	Book* ptrBook = (Book*)malloc(sizeof(Book));
	if (ptrBook != nullptr) {
		strcpy_s(ptrBook->title, title);
		ptrBook->year = year;
		ptrBook->rating = rating;
		
		return ptrBook;
	}
	return nullptr;

}
void AddBook(Book* head, char title[20], int year, float rating) {
	Book* current = head;
	while (current->next != nullptr)
	{
		current = current->next;

	}
	current->next = CreateBook(title,year,rating);
}

int main() {

}

