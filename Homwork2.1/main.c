#include <stdio.h>

#include "input.h"
#include "print.h"
#include "structures.h"
#include "processing.h"



int main(void) {
	

	Person peopleData[100];
	
	int totalRead = readDataFromFile(peopleData);

	float averageIncome = getAvarageIncome(peopleData, totalRead);
	
	int averageAge = getAvarageAge(peopleData, totalRead);

	printYoungerThanAverageAge(peopleData, totalRead, averageAge);

	printHigherThanAverageIncome(peopleData, totalRead, averageIncome);

	

	
    return 0;   
}
