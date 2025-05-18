#include <stdio.h>
#include <string.h>
struct Rectangle
{
	int height;
	int width;
};

Rectangle CreateRectangles(int height, int width) {
	Rectangle rectangle;
	rectangle.height = height;
	rectangle.width = width;
	return rectangle;
}


void DisplayRectangle(Rectangle rectangle) {

	printf("Height: %i\nWidth: %i\n", rectangle.height, rectangle.width);
}

void AreaRectangle(Rectangle rectangle) {
	int area = rectangle.height * rectangle.width;
	printf("Area: %i\n", area);
}
void PerimeterRectangle(Rectangle rectangle) {
	int perimeter = rectangle.height * 2 + rectangle.width * 2;
	printf("Perimeter: %i\n", perimeter);
}
int main() {
	DisplayRectangle(CreateRectangles(15, 50));
	AreaRectangle(CreateRectangles(15, 50));
	PerimeterRectangle(CreateRectangles(15, 50));

}