#include <stdio.h>

int main()
{
	
	//Slide 1
	// Print my name and jump to the next line using \n
	printf("Juan Camilo.\n");
	// Print my favorite game
	printf("World of Warcraft\n");

	//Slide 2
	//Declaring varibles and giving values to them
	float health = 95.5f;
	int attackPower = 25;
	int characterlvl = 12;
	char characterClass = 'H';

	//Printing all stats and info
	printf("Your health is: %.2f\n", health);
	printf("Your attack power is: %i\n", attackPower);
	printf("Your character level is: %i\n", characterlvl);
	printf("Your character Class is: %c\n", characterClass);


	//Slide 3
	//Creating the variable gold
	int gold = 100;
	printf("Your gold is: %i\n", gold);
	gold = 250;
	printf("Your gold is: %i\n", gold);
	int playerLives = 3;
	printf("Your lives are: %i\n", playerLives);
	playerLives--;
	printf("Your lives are: %i\n", playerLives);

	//Slide 4
	int age = 0;
	int characterLevel = 0;
	float maximumHealth = 0;
	printf("Type your age:\n");
	scanf_s("%i", &age);
	printf("Type your character level:\n");
	scanf_s("%i", &characterLevel);
	printf("Type your maximum health:\n");
	scanf_s("%f", &maximumHealth);

	printf("Your age is: %i\n", age);
	printf("Your character level is: %i\n", characterLevel);
	printf("Your maximum health is: %.2f\n", maximumHealth);


	//Slide 5
	int temperatureCelsius = 0;
	printf("Give the current Temperature in Celsious Degrees:\n");
	scanf_s("%i", &temperatureCelsius);
	printf("The temperature in Celsius is: %i\nThe temperature in Fahrenheit is: %i\n", temperatureCelsius, temperatureCelsius * (9 / 5) + 32);

	//Slide 6
	int x = 12;
	int y = 5;
	printf("%i + %i = %i\n", x, y, x + y);
	printf("%i - %i = %i\n", x, y, x - y);
	printf("%i * %i = %i\n", x, y, x * y);
	printf("%i / %i = %i\n", x, y, x / y);
	printf("%i %% %i = %i\n", x, y, x % y);
	printf("%.1f / %.1f = %.1f\n", (float)x, (float)y, (float)x / (float)y);
	// The divion of integer give the quotient of the division when it can not divied without getting a reminder and float is giving the result without taking into account the reminder
	//Slide 7
	gold = 100;
	int wood = 50;
	printf("Your Gold is: %i\nYour wood is: %i\n", gold, wood);
	gold += 25;
	wood -= 10;
	gold *= 2;
	wood /= 2;
	printf("Your Gold is: %i\n Your wood is: %i\n", gold, wood);
	//Slide 8
	int currentLevel = 0;
	printf("Type your current level:\n");
	scanf_s("%i", &currentLevel);
	if (currentLevel >= 10)
	{
		printf("You can enter the dungeon\n");
	}
	else
	{
		printf("You need %i levels to enter the dungeon\n", 10 - currentLevel);
	}

	//Slide 9
	age = 0;
	char continueChar ='n';
	printf("Type your age:\n");
	scanf_s("%i", &age);
	if (age >= 10)
	{
		printf("Full access granted\n");
	}
	else
	{
		printf("Limited access granted\n");
	}
	printf("Would you want to continue? Y/N\n");
	scanf_s(" %c", &continueChar, 1);

	if (continueChar == 'Y' || continueChar == 'y')
	{
		printf("Game Starting...\n");
	}
	else if(continueChar == 'N' || continueChar == 'n')
	{
		printf("Exiting game\n");
	}
	else {
		printf("Error\n");
	}
	//Slide 10

	int score = 0;
	printf("Enter your Score:\n");
	scanf_s("%i", &score);
	if (score < 1000 && score >= 800) {
		printf("You are Grandmaster, Congratulations for achive that\n");
	}
	else if (score < 800 && score >= 600) {
		printf("You are Master, almost achiving the best rank\n");
	}
	else if (score < 600 && score >= 400) {
		printf("You are Expert, Impressive\n");
	}
	else if (score < 400 && score >= 200) {
		printf("You are Novice, Keep practicing\n");
	}
	else if (score < 200) {
		printf("You are Beginner, it is going to be a long journey\n");
	}


	age = 0;
	continueChar = 'n';
	printf("Type your age:\n");
	scanf_s("%i", &age);
	if (age >= 17)
	{
		printf("Thanks for your purchase\n");
	}
	else
	{
		printf("Do your parents aprrove this purchase\n");
		scanf_s(" %c", &continueChar, 1);

		if (continueChar == 'Y' || continueChar == 'y')
		{
			printf("Conditions approve, Thanks for the purchase\n");
		}
		else {
			printf("Conditions not met, Can not continue with the purchase\n");
		}
	}

	

	int playerScore = 100;
	int bonus = 50;
	printf("Initial score: %d\n", playerScore);

	playerScore +=bonus;
	printf("Score after bonus: %d\n", playerScore);

	if (playerScore == 150) {
		printf("Bonus successfully!\n");
	}
	else {
		printf("Something went wrong\n");
	}
	return 0;
}