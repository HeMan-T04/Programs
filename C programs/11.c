#include<stdio.h>
int main()
{
char i,f;
int a,b,c;
do{
    printf("Enter the numbers and the operation\n");
    scanf("%d %c %d",&a,&i,&b);
    switch(i)
    {
        case '+':
        c=a+b;
        printf("%d\n",c);
        printf("Do you want to continue(Y/N)");
        scanf(" %c",&f);
        break;
        case '-':
        c=a-b;
        printf("%d\n",c);
        printf("Do you want to continue(Y/N)");
        scanf(" %c",&f);
        break;
        case '*':
        c=a*b;
        printf("%d\n",c);
        printf("Do you want to continue(Y/N)");
        scanf(" %c",&f);
        break;
        case '/':
        c=a/b;
        printf("%d\n",c);
        printf("Do you want to continue(Y/N)");
        scanf(" %c",&f);
        break;
        case '%':
        c=a/b*100;
        printf("%d\n",c);
        printf("Do you want to continue(Y/N)");
        scanf(" %c",&f);
        break;
        case 'a':
        c=(a+b)/2;
        printf("%d\n",c);
        printf("Do you want to continue(Y/N)");
        scanf(" %c",&f);
        break;
        default:
        break;
    }
}while(f=='Y' || f=='y');
return 0;
}