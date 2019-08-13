#include <stdio.h>
int arr[50];
int maxSize=30; 
int i=-1;
void push(int x){
	if(i<maxSize){
		i++;
		arr[i]=x;
	}
	else{
		printf("\nStack is full");
	}
}
void pop(){
	if(i>-1){
		i--;
	}
	else{
		printf("\nStack is empty");
	}
}
void display(){
	if(i>-1){
		printf("\nStack is");
		for(int j=0;j<i;j++){
			printf("\n%d",arr[j]);
		}
	}
}
void main(){
	
	int a,b;
	while(true){printf("\ninput 1 to push 2 to pop 3 to exit and display the stack");
		scanf("%d",&a);
		if(a==3){
			display();
			break;
		}
		else if(a==2){
			pop();
		}
		else if(a==1){
			scanf("%d",&b);
			push(b);
		}
		else{
			printf("wrong input");
		}
	}
}
