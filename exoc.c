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
	printf("%d\n", newDay);
	if (newDay > 7) {
		newDay = newDay - 7;
		printf("%d\n", newDay);
		newDate->theDay = newDay;

	} else {
		newDate->theDay = newDay;
	}
	return newDate;
}
struct myDate * soustractionDate(struct myDate *firstdate, struct myDate *seconddate) {

	int newYears = firstdate->years - seconddate->years;
	int newMonth = firstdate->theMonth - seconddate->theMonth;
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
	return newDate;
}





int main() {
	struct myDate *testdate = malloc(sizeof(testdate));
	testdate->theDay = sunday;
	testdate->theMonth = Dec;
	testdate->years = 1000;
	struct myDate *testdate2 = malloc(sizeof(testdate2));
	testdate2->theDay = sunday;
	testdate2->theMonth = Dec;
	testdate2->years = 1000;

	struct myDate * unedate = malloc(sizeof(testdate));
	unedate = additionDate(testdate, testdate2);
	printf("%d\n" ,unedate->theMonth);
	printf("%d\n" ,unedate->theDay);													
	printf("%d\n" ,unedate->years);
	

	


}