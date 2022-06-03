#include<stdio.h>
struct employee{
	int id;
	char name[20];
	int age;
	char address[20];
	char dep[50];
	int salary;
};

void main()
{
	struct employee e[10];
	int n,i,check=1;
	for(i=0;i<10;i++){
	printf("Enter the info of %d employee\n",i+1);
	printf("Id: ");
	scanf("%d",&e[i].id);
	printf("Name: ");
	scanf("%s",&e[i].name);
	printf("Age: ");
	scanf("%d",&e[i].age);
	printf("Address: ");
	scanf("%s",&e[i].address);
	printf("Department: ");
	scanf("%s",&e[i].dep);
	printf("Salary: ");
	scanf("%d",&e[i].salary);

	}
	printf("Enter the id of any employee:  ");
	scanf("%d",&n);
	
	
		for(i=0;i<10;i++)
		{
		if(n==e[i].id)
		{
			check=0;
		printf("\nEmployee name:  %s\nEmployee age:  %d\nEmployee address:  %s\nEmployee department:  %s\nEmployee salary:  %d\n",e[i].name,e[i].age,e[i].address,e[i].dep,e[i].salary);
		}
		}
		
		if(check)
		printf("search unsuccessful");
}