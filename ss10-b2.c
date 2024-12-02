#include<stdio.h>
int main(){
	int i,j,temp;
	int arr[]={5,22,13,7,41,8};
    int size=sizeof(arr)/sizeof(int);
    for(i=0;i<size;i++){
    	for(j=0;j<size-i-1;j++){
    		if(arr[j+1]<arr[j]){
    			temp=arr[j];
    			arr[j]=arr[j+1];
    			arr[j+1]=temp;
    		}
	}
    }
	for(i=0;i<size;i++){
		printf("%d\t",arr[i]);
    }
	return 0;
}
