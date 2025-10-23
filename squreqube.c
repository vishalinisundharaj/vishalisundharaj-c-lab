int main(){
 int n,i;
 
 printf("Enter a positive integer n:");
 scanf("%d",&n);
 printf("number\tResult\n");
 printf("------------------n");
  for(i=1;i<=n;i++){
  	if(i%2==0){
  	printf("5d\t%d\n",i,i*i*i);
 }else{
 	printf("5d\t%d\n",i,i*i);
 }
  }
  return 0;
  
}
