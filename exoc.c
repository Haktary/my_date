#include "exoc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


struct myDate * additionDate(struct myDate *firstdate, struct myDate *seconddate) {
	struct myDate *newDate = malloc(sizeof(newDate));
	int newYears = firstdate->years + seconddate->years;
	newDate->years = newYears;
	int newMonth = firstdate->theMonth + seconddate->theMonth;

	if (newMonth > 12 ) {
		newMonth = newMonth - 12 ;
		newDate->theMonth = newMonth;
		//memcpy(&newDate->theMonth, &newMonth, sizeof(struct myDate));
	} else {
		newDate->theMonth = newMonth;
	}

	int newDay = firstdate->theDay + seconddate->theDay;
	
	if (newDay > 7) {
		newDay = newDay - 7;
		newDate->theDay = newDay;

	} else {
		newDate->theDay = newDay;
	}
	return newDate;
}
struct myDate * soustractionDate(struct myDate *firstdate, struct myDate *seconddate) {

	int newYears = firstdate->years - seconddate->years;
	int newMonth = firstdate->theMonth - seconddate->theMonth;
	printf("%d\n" ,newYears);
	printf("%d\n" ,newMonth);
	struct myDate *newDate = malloc(sizeof(newDate));
	if (newMonth < 1 ) {
		newMonth = newMonth + 12 ;
		newDate->theMonth = newMonth;
	} else {
		newDate->theMonth = newMonth;
	}
	int newDay = firstdate->theDay + seconddate->theDay;
	if (newDay < 1) {
		newDay = newDay + 7;
		newDate->theDay = newDay;

	} else {
		newDate->theDay = newDay;
	}
	printf("%d\n" ,newDay);
	return newDate;
}





int main() {
	struct myDate *testdate = malloc(sizeof(testdate));
	testdate->theDay = sunday;
	testdate->theMonth = Dec;
	testdate->years = 1000;
	struct myDate *testdate2 = malloc(sizeof(testdate2));
	testdate2->theDay = friday;
	testdate2->theMonth = Dec;
	testdate2->years = 1000;

	struct myDate * testaddition = malloc(sizeof(testdate));
	testaddition = additionDate(testdate, testdate2);
	
/*
	printf("%d\n" ,testaddition->theMonth);
	printf("%d\n" ,testaddition->theDay);													
	printf("%d\n" ,testaddition->years);
*/
	struct myDate * testsoustraction = malloc(sizeof(testdate));
	testsoustraction = soustractionDate(testdate, testdate2);

	printf("%d\n" ,testsoustraction->theMonth);
	printf("%d\n" ,testsoustraction->theDay);													
	printf("%d\n" ,testsoustraction->years);
	

	


}