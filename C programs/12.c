#include<stdio.h>
int arms(int);
void rev(int );
void prime(int);
void main()
{
char f;
int j,n,i;
do{
printf("Choose between these operations\n");
printf("1.Print armstrong numbers upto N\n");
printf("2.Display prime numbers between 1 to N\n");
printf("3.Reverse of an integer\n");
printf("Case number: ");
scanf("%d",&i);
switch(i)
{
case 1:
printf("Enter the value of N: ");
scanf("%d", &n);
printf("All Armstrong numbers from 1 to %d:\n", n);
for (j = 1; j <= n; j++) {
    if (arms(j))
        printf("%d\n", j);
    }
printf("Do you want to continue(Y/N)");
scanf(" %c",&f);
break;
case 2:
printf("Enter the value of N: ");
scanf("%d", &n);
prime(n);
printf("Do you want to continue(Y/N)");
scanf(" %c",&f);
break;
case 3:
printf("enter the number ");
scanf("%d",&n);
rev(n);
printf("Do you want to continue(Y/N)");
scanf(" %c",&f);
break;

default:
break;
}}
while(f=='Y' || f=='y');
}
int arms(int num)
{
    int tempNumber, rem, sum;
    tempNumber = num;

    sum = 0;
    while (tempNumber != 0) {
        rem = tempNumber % 10;
        sum = sum + (rem * rem * rem);
        tempNumber /= 10;
    }
    if (sum == num)
        return 1;
    else
        return 0;
}
void prime(int n)
{
int i,a,f;

for(a=1;a<=n;a++){
	f=0;
for(i=2;i<=(a/2);i++){
	if(a%i==0){
	f++;
	break;}
}
if(f==0)
printf("%d \n",a);}}
void rev(int n){
int a,i;
for(i=1;i<=n;i--){
if (n==0)
break;
else{
a=n%10;
printf("%d\n",a);
n=n/10;}
}
}