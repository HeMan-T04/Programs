#include<stdio.h>
struct student{
	int roll;
	char name[20];
	char address[20];
	int marks;};
void main(){
    struct student s[2];
	int n,i,check=1;
	for(i=0;i<2;i++){
    printf("Roll no.: ");
	scanf("%d",&s[i].roll);
    printf("Name: ");
    scanf("%s",&s[i].name);
    printf("Address: ");
    scanf("%s",&s[i].address);
    printf("Marks: ");
    scanf("%d",&s[i].marks);}
	printf("Enter the roll number of any student:  ");
	scanf("%d",&n);
		for(i=0;i<2;i++){
		if(n==s[i].roll){
			check=0;
		printf("\nStudent name:  %s\nStudent address:  %s\nStudent marks:  %d\n",s[i].name,s[i].address,s[i].marks);}}
		if(check)
		printf("search unsuccessful");} 