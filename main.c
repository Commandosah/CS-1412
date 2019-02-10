// Sam Hopson
// CS 1412-503
// 02/10/1999

#include <stdio.h>

int f(int , double , double);

int main()
{
	int pol_type;
	double gpm;
	double odometer;
	printf("(1) Carbon Monoxide \n(2) Hydrocarbons \n(3) Nitrogen oxides" 
			"\n(4) Non methane hydrocarbons \n\nEnter pollutant number >> ");
	scanf("%d" , &pol_type);
	
	printf("Enter the number of grams emitted per mile >> ");
	scanf("%lf" , &gpm);
	
	printf("Enter the odometer value >> ");
	scanf("%lf" , &odometer);
	
	putchar("\n");
	
	printf("%d" , f(pol_type , gpm , odometer));
	return (0);
}

int f(int pol_type , double gpm ,double  odometer)
{
// Carbon Monoxide
	if (pol_type == 1)
		if (odometer <= 50000)
			if (gpm == 3.4)
				printf("Emissions are at the permitted level of %lf Carbon Monoxide grams/ mile. \n" , gpm);
			if (gpm < 3.4)
				printf("Your emissions of %lf Carbon Monoxide grams/ mile are below the permitted level" 
						"of 3.4 Carbon Monoxide grams/ mile. \n" , gpm);
			if (gpm > 3.4)
				printf("Your emissions of %lf Carbon Monoxide grams/ mile are above the permitted level" 
						"of 3.4 Carbon Monoxide grams/ mile. \n" , gpm);
		if (odometer <= 100000)
			if (gpm == 4.2)
				printf("Emissions are at the permitted level of %lf Carbon Monoxide grams/ mile. \n" , gpm);
			if (gpm < 4.2)
				printf("Your emissions of %lf Carbon Monoxide grams/ mile are below the permitted level" 
						"of 4.2 Carbon Monoxide grams/ mile. \n" , gpm);
			if (gpm > 4.2)
				printf("Your emissions of %lf Carbon Monoxide grams/ mile are above the permitted level" 
						"of 4.2 Carbon Monoxide grams/ mile. \n" , gpm);
		if (odometer <= 0 || odometer > 100000)
			printf("Your Range exceeds the bounds of this table. Please try again with an" 
					"odometer reading between 0 and 100,000 miles");

// Hydrocarbons
	if (pol_type == 2)
		if (odometer <= 50000)
			if (gpm == .31)
				printf("Emissions are at the permitted level of %lf Hydrocaron grams/ mile. \n" , gpm);
			if (gpm < .31)
				printf("Your emissions of %lf Hydrocarbon grams/ mile are below the permitted level" 
						"of 0.31 Hydrocarbon grams/ mile. \n" , gpm);
			if (gpm > .31)
				printf("Your emissions of %lf Hydrocarbon grams/ mile are above the permitted level" 
						"of 0.31 Hydrocarbon grams/ mile. \n" , gpm);
		if (odometer <= 100000)
			if (gpm == .39)
				printf("Emissions are at the permitted level of %lf Hydrocarbon grams/ mile. \n" , gpm);
			if (gpm < .39)
				printf("Your emissions of %lf Hydrocarbons grams/ mile are below the permitted level" 
						"of 0.39 Hydrocarbon grams/ mile. \n" , gpm);
			if (gpm > .39)
				printf("Your emissions of %lf Hydrocarbons grams/ mile are above the permitted level" 
						"of 0.39 Hydrocarbon grams/ mile. \n" , gpm);
			if (odometer <= 0 || odometer > 100000)
				printf("Your Range exceeds the bounds of this table. Please try again with an" 
						"odometer reading between 0 and 100,000 miles");

// Nitrogen Oxides
	if (pol_type == 3)
		if (odometer <= 50000)
			if (gpm == .4)
				printf("Emissions are at the permitted level of %lf Nitrogen Oxide grams/ mile. \n" , gpm);
			if (gpm < .4)
				printf("Your emissions of %lf Nitrogen Oxide grams/ mile are below the permitted level" 
						"of 0.4 Nitrogen Oxide grams/ mile. \n" , gpm);
			if (gpm > .4)
				printf("Your emissions of %lf Nitrogen Oxide grams/ mile are above the permitted level" 
						"of 0.4 Nitrogen Oxide grams/ mile. \n" , gpm);
		if (odometer <= 100000)
			if (gpm == .5)
				printf("Emissions are at the permitted level of %lf Nitrogen Oxide grams/ mile. \n" , gpm);
			if (gpm < .5)
				printf("Your emissions of %lf Nitrogen Oxide grams/ mile are below the permitted level" 
						"of 0.5 Nitrogen Oxide grams/ mile. \n" , gpm);
			if (gpm > .5)
				printf("Your emissions of %lf Nitrogen Oxide grams/ mile are above the permitted level" 
						"of 0.5 Nitrogen Oxide grams/ mile. \n" , gpm);
			if (odometer <= 0 || odometer > 100000)
				printf("Your Range exceeds the bounds of this table. Please try again with an" 
						"odometer reading between 0 and 100,000 miles");

// Non Methane Hydrocarbons
	if (pol_type == 4)
		if (odometer <= 50000)
			if (gpm == .25)
				printf("Emissions are at the permitted level of %lf Non Methane Hydrocarbon grams/ mile. \n" , gpm);
			if (gpm < .25)
				printf("Your emissions of %lf Non Methane Hydrocarbon grams/ mile are below the permitted level" 
						"of 0.25 Non Methane Hydrocarbon grams/ mile. \n" , gpm);
			if (gpm > .25)
				printf("Your emissions of %lf Non Methane Hydrocarbon grams/ mile are above the permitted level" 
						"of 0.25 Non Methane Hydrocarbon grams/ mile. \n" , gpm);
		if (odometer <= 100000)
			if (gpm == .31)
				printf("Emissions are at the permitted level of %lf Non Methane Hydrocarbon grams/ mile. \n" , gpm);
			if (gpm < .31)
				printf("Your emissions of %lf Non Methane Hydrocarbon grams/ mile are below the permitted level" 
						"of 0.31 Non Methane Hydrocarbon grams/ mile. \n" , gpm);
			if (gpm > .31)
				printf("Your emissions of %lf Non Methane Hydrocarbon grams/ mile are above the permitted level" 
						"of 0.31 Non Methane Hydrocarbon grams/ mile. \n" , gpm);
			if (odometer <= 0 || odometer > 100000)
				printf("Your Range exceeds the bounds of this table. Please try again with an" 
						"odometer reading between 0 and 100,000 miles");

	return (0);
}