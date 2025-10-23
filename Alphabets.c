#include<stdio.h>
#include<ctype.h>
int main(){
	char sentence[1000];
	int alphabets=0,digits=0,specialchars=0;
	int i=0;
	printf("Enter a sentence:");
	fgets(sentence,sizeof(sentence),stdin);
	while(sentence[i]!='\0'){
	if(isalpha(sentence[i])){
		alphabets++;
	}else if(isdigit(sentence[i])){
		digits++;
	}else if(!isspace(sentence[i])){
		specialchars++;
	}
	i++;
	}
	printf("\nAlphabets:%d",alphabets);
	printf("\ndigits:%d",digits);
	printf("\nSpecial characters:%dn",specialchars);
	

	  return 0;
}
