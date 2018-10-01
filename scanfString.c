#include <stdio.h>


void main(){
	
	
	char first_name[40];
	char last_name[40];
	int age;
	
	printf("Enter your first name and last name: ");
	scanf("%39s %39s", first_name, last_name);
	printf("\n Enter your age: ");
	scanf("%i", &age);
	
	printf("\n First name: %39s\n Last Name: %39s\n Age: %i anos", first_name, last_name, age);
	
	
}