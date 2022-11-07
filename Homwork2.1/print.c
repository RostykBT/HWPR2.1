#include "print.h"

void printYoungerThanAverageAge(Person peopleData[], int totalRead, float avarageage) {
	FILE *outputFileAge = fopen("F2.txt", "w");
	fprintf (outputFileAge, "File with people younger than average age: \n");
	int i;
	int totalAge = 0;
	for (i=0; i<totalRead; i++) {
		totalAge += peopleData[i].age;
	}
	float averageAge = totalAge / totalRead;
	for (i=0; i<totalRead; i++) {
		if (peopleData[i].age < averageAge) {
			fprintf(outputFileAge, "%s %d %.2f \n", peopleData[i].name, peopleData[i].age, peopleData[i].income);
		}
	}	
}

void printHigherThanAverageIncome(Person peopleData[], int totalRead, float avarageIncome) {
	FILE *outputFileIncome = fopen("F3.txt", "w");
	fprintf (outputFileIncome, "File with people with higher income than average: \n");
	int i;
	for (i=0; i<totalRead; i++) {
		if (peopleData[i].income > avarageIncome){
			fprintf(outputFileIncome, "%s %d %.2f \n", peopleData[i].name, peopleData[i].age, peopleData[i].income);
		}
	}	
}

