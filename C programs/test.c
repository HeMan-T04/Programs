#include<stdio.h>
void main(){
int i,j,k=1,n;
printf("enter the number of rows ");
scanf("%d",&n);
for(i=1;i<=n;i++){
	for(j=1;j<=i;j++){
		printf("%d\t",k);
		k++;}
	printf("\n");}}