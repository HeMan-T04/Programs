#include<stdio.h>
#include<string.h>
void compareFiles(FILE *file1, FILE *file2){
   char ch1 = getc(file1);
   char ch2 = getc(file2);
   int error = 0, pos = 0, line = 1;
   while (ch1 != EOF && ch2 != EOF){
      pos++;
      if (ch1 == '\n' && ch2 == '\n'){
         line++;
         pos = 0;
      }
      if (ch1 != ch2){
         error++;
         printf("Line Number : %d \tError"
         " Position : %d \n", line, pos);
      }
      ch1 = getc(fp1);
      ch2 = getc(fp2);
   }
   printf("Total Errors : %d\t", error);
}
int main(){
    char f1[20];
    char f2[20];
    printf("Enter the name of first file: ");
    scanf("%s",&f1);
    printf("Enter the name of second file: ");
    scanf("%s",&f2);
   FILE *file1 = fopen("%s.txt",f1, "r");
   FILE *file2 = fopen("%s.txt",f2, "r");
   if (file1 == NULL || file2 == NULL){
      printf("Error : Files not open");
      exit(0);
   }
   compareFiles(file1, file2);
   fclose(file1);
   fclose(file2);
   return 0;
}