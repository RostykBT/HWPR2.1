#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFERSIZE 64
typedef struct Person {
	char name[BUFFERSIZE];
	int age;
	float income;
} Person;

int readDataFromFile(Person peopleData[]);
float getAvarageIncome(Person peopleData[], int totalRead);
int getAvarageAge(Person peopleData[], int totalRead);
void printYoungerThanAverageAge(Person peopleData[], int totalRead, float avarageage);
void printHigherThanAverageIncome(Person peopleData[], int totalRead, float avarageIncome);

#endif