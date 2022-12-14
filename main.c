#include <stdio.h>

#include "functions.h"




int main(void) {
	

	Person peopleData[100];
	
	int totalRead = readDataFromFile(peopleData);

	float averageIncome = getAvarageIncome(peopleData, totalRead);
	
	int averageAge = getAvarageAge(peopleData, totalRead);

	printYoungerThanAverageAge(peopleData, totalRead, averageAge);

	printHigherThanAverageIncome(peopleData, totalRead, averageIncome);

	printf("\nThe program has been executed successfully.\n");
	printf("Please check the output files (F2, F3) for the results.\n\n");
	
    return 0;   
}
