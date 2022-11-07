#include "functions.h"





int readDataFromFile(Person peopleData[]) {
    FILE *inputFile = fopen("F1.txt", "r");

    if (inputFile == NULL) {
        printf("File %s not found.\n", "F1.txt");
        
    }

    char lineBuffer[BUFFERSIZE];
    int i = 0;
    while (!feof(inputFile)) {
        fgets(lineBuffer, sizeof(lineBuffer), inputFile);
        int scanResult = sscanf(lineBuffer, "%s %d %f", peopleData[i].name, &peopleData[i].age, &peopleData[i].income);
        if (scanResult == EOF) { 
            printf("End of file!\n");
        } else {
        }
        
        if (scanResult == 3) i++;
    }	
    return i; 
}
float getAvarageIncome(Person peopleData[], int totalRead) {
    float totalIncome = 0;
    for (int i=0; i<totalRead; i++) {
        totalIncome += peopleData[i].income;
    }
    return totalIncome / totalRead;
}

int getAvarageAge(Person peopleData[], int totalRead) {
    int totalAge = 0;
    for (int i=0; i<totalRead; i++) {
        totalAge += peopleData[i].age;
    }
    return totalAge / totalRead;
}
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