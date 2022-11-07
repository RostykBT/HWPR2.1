#include "processing.h"
#include "processing.h"

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