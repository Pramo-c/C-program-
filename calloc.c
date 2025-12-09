#include<stdio.h>
#include<stdlib.h>

int main(){

int i,n,*ptr;
printf("enter the total number of value:");
scanf("%d",&n);

ptr=(int*)calloc(n,sizeof(int));

printf("Enter the value :");
for(i=0;i<n;i++){
	scanf("%d",ptr+i);
	
}
printf("you values are:");
for(i=0;i<n;i++){
	printf("%d",*(ptr+i));
}
free(ptr);

ptr=(int*)malloc(n*sizeof(int));

printf("Enter the value :");
for(i=0;i<n;i++){
	scanf("%d",ptr+i);
	
}
printf("you values are:");
for(i=0;i<n;i++){
	printf("%d",*(ptr+i));
}
free(ptr);




}