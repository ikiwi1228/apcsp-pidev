#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student{
	char firstname[50];
	char lastname[50];
	int age;
	int studentid;
};

int printout(struct Student* student)
{
	printf("The student is -\n");
	printf(" First name:%s\n", student->firstname);
	printf(" Last name:%s\n", student->lastname);
	printf("age:%d\n", student->age);
	printf(" id:%d\n", student->studentid);
}

int main(int argc, char*argv[]){

	struct Student students[100];

	if (argc<5 || argc % 4 !=1){
		printf("Usage:run <firstname lastname age studentid>...\n");
		exit (1);
	}

	int number = (argc-1)/4;
	for (int i=0; i<number;i++)
	{
		int j = i*4+1;
		strcpy(students[i].firstname, argv[j]);
		strcpy(students[i].lastname, argv[j+1]);
		students[i].age = atoi(argv[j+2]);
		students[i].studentid = atoi(argv[j+3]);
		printout(&students[i]);
	}
}
