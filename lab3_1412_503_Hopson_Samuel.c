// Sam Hopson
// CS 1412-503
// 02/08/19

#include <stdio.h>

// Emissions function prototype
void emissions(int , double , int);

int main()
// Main function. Prompts user 3 times for the pollution number, gpm, and odometer value. Once that is
// complete, main calls the emissions function.
{
// Variable names for pollution number, grams emitted per mile, and odometer value respectively.
	int pol_type;
	double gpm;
	int odometer;

// Initial print. Shows pollutant numbers and asks user to type which number is their pollutant.
	printf("  (1) Carbon Monoxide \n  (2) Hydrocarbons \n  (3) Nitrogen oxides" 
			"\n  (4) Non methane hydrocarbons \n\nEnter pollutant number >> ");
	scanf("%d" , &pol_type);

// Prompts user to enter the grams emitted per mile.
	printf("Enter the number of grams emitted per mile >> ");
	scanf("%lf" , &gpm);

// Prompts user for their odometer value.
	printf("Enter the odometer value >> ");
	scanf("%d" , &odometer);

	printf("\n");

// Main calling emissions function
	emissions(pol_type, gpm, odometer);

	printf("\n");
	return (0);
}

void emissions(int pol_type, double gpm, int odometer)
// Emissions function. Determines if the inputted gpm level is permitted based on pollutant number and 
// odometer value. It uses the pollutant number and odometer value to compare the inputted gpm to the table gpm,
// and determines if the inputted gpm is a permitted gpm level or not.
{
// Switch statement for the pollution type. takes the number as a case value.
// If number isn't 1-4, spits out an invalid number code.
	switch (pol_type)
	{
		// Carbon Monoxide
		case 1:
		// if statments determine if the inputted gpm exceeds the permitted level by comparing odometer and table gpm values.
			if (odometer <= 50000 && gpm <= 3.4){
				printf("Emissions do not exceed permitted level of 3.4 grams/mile. \n");
				break;
			}
			if (odometer <= 50000 && gpm > 3.4){
				printf("Emissions exceed permitted level of 3.4 grams/mile. \n");
				break;
			}
			if (odometer > 50000 && gpm <= 4.2){
				printf("Emissions do not exceed permitted level of 4.2 grams/mile. \n");
				break;
			}
			if (odometer > 50000 && gpm > 4.2){
				printf("Emissions exceed permitted level of 4.2 grams/mile. \n");
				break;
			}

		// Hydrocarbons
		case 2:
			if (odometer <= 50000 && gpm <= 0.31){
				printf("Emissions do not exceed permitted level of 0.31 grams/mile. \n");
				break;
			}
			if (odometer <= 50000 && gpm > 0.31){
				printf("Emissions exceed permitted level of 0.31 grams/mile. \n");
				break;
			}
			if (odometer > 50000 && gpm <= 0.39){
				printf("Emissions do not exceed permitted level of 0.39 grams/mile. \n");
				break;
			}
			if (odometer > 50000 && gpm > 0.39){
				printf("Emissions exceed permitted level of 0.39 grams/mile. \n");
				break;
			}

		// Nitrogen Oxides
		case 3:
			if (odometer <= 50000 && gpm <= 0.4){
				printf("Emissions do not exceed permitted level of 0.4 grams/mile. \n");
				break;
			}
			if (odometer <= 50000 && gpm > 0.4){
				printf("Emissions exceed permitted level of 0.4 grams/mile. \n");
				break;
			}
			if (odometer > 50000 && gpm <= 0.5){
				printf("Emissions do not exceed permitted level of 0.5 grams/mile. \n");
				break;
			}
			if (odometer > 50000 && gpm > 0.5){
				printf("Emissions exceed permitted level of 0.5 grams/mile. \n");
				break;
			}

		// Non Methane Hydrocarbons
		case 4:
			if (odometer <= 50000 && gpm <= 0.25){
				printf("Emissions do not exceed permitted level of 0.25 grams/mile. \n");
				break;
			}
			if (odometer <= 50000 && gpm > 0.25){
				printf("Emissions exceed permitted level of 0.25 grams/mile. \n");
				break;
			}
			if (odometer > 50000 && gpm <= 0.31){
				printf("Emissions do not exceed permitted level of 0.31 grams/mile. \n");
				break;
			}
			if (odometer > 50000 && gpm > 0.31){
				printf("Emissions exceed permitted level of 0.31 grams/mile. \n");
				break;
			}

		// default is an invalid statement.
		default:
			printf("Invalid pollutant number. \n");
	}
}