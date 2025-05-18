#include <stdio.h>
#include <string.h>
struct Employee
{
	int employeeID;
	char name[12];
	char department[12];
	float salary;
	int yearsService;
};
struct Car
{
	char modelName[20];
	int year;
	int horsePower;
	float price;
};
int main() {
	//Employee employee;
	//employee.employeeID = 1;
	//strcpy_s(employee.name, "Juan Camilo");
	//strcpy_s(employee.department, "Games");
	//employee.salary = 20000;
	//employee.yearsService = 5;

	//printf("ID: %i\n", employee.employeeID);
	//printf("Name: %s\n", employee.name);
	//printf("Department: %s\n", employee.department);
	//printf("Salary: %.2f\n", employee.salary);
	//printf("Years of Service: %i\n", employee.yearsService);

	Car cars[3];

	strcpy_s(cars[0].modelName, "SF90 Stradale");
	cars[0].year = 2019;
	cars[0].horsePower = 986;
	cars[0].price = 52400.0f;
	
	strcpy_s(cars[1].modelName, "Roma");
	cars[1].year = 2020;
	cars[1].horsePower = 800;
	cars[1].price = 235000.0f;
	
	strcpy_s(cars[2].modelName, "296");
	cars[2].year = 2021;
	cars[2].horsePower = 969;
	cars[2].price = 62400.0f;

	int mostExpensiveIndex = 0;
	for (int i = 0; i < 3; i++)
	{

		if (cars[mostExpensiveIndex].price<cars[i].price) {
			mostExpensiveIndex = i;
		}
		printf("%s - %i\n", cars[i].modelName, cars[i].year);
		printf("HP: %i\n", cars[i].horsePower);
		printf("Price: %.2f\n\n", cars[i].price);


	}

	printf("%s - %i\n", cars[mostExpensiveIndex].modelName, cars[mostExpensiveIndex].year);
	printf("HP: %i\n", cars[mostExpensiveIndex].horsePower);
	printf("Price: %.2f\n\n", cars[mostExpensiveIndex].price);

}