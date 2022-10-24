#include "print.h"


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