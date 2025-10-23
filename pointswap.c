#include<stdio.h>
void swap(int*a,int*b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
 int main(){
 	int x,y;
 	
 	void(*swap_ptr)(int*,int*)=&swap;
 	printf("Enter two integers:\n");
 	scanf("%d%d",&x,&y);
 	printf("before swap:x=%d,y=%d\n",x,y);
 	swap_ptr(&x,&y);
   printf("after swap: x=%d,y=%d\n",x,y);
   
   return 0;
 }
