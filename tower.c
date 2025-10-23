#include<stdio>
int main()
char ch;
int line,i,j;
 printf("Enter the character to print");
 scanf("%c",&ch);
 printf("Enter the number of lines:");
 scanf("%d",&lines);
 for(i=1;i<=lines;i++){
 	for(j=1;j<=i;j++){
 		printf("%c",ch);
	 }
	 printf("\n");
 }
 return 0;
}
