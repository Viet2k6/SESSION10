#include<stdio.h>
int main(){
	int i,j,min,num;
	int start=0,mid;
	int arr[]={5,22,9,48,16,4,2,3,19,50,26,37};
	 int size=sizeof(arr)/sizeof(int);
	 int flag=-1;
	 int end=sizeof(arr)/sizeof(int);

	for(i=0;i<size;i++){
		min=arr[i];
		for(j=i+1;j<size;j++){
			if (arr[j]<min){
				min=arr[j];
				arr[j]=arr[i];
				arr[i]=min;
			}
		}
	
	}	for(i=0;i<size;i++){
				printf("%d\t",arr[i]);
			}
	printf("\nMoi nhap gia tri can tim: ");
	scanf("%d", &num);
	while(start<=end){
		mid=(start+end)/2;
		if (arr[mid]==num){
			printf("Gia tri nam o vi tri: %d",mid);
			return 0;
		}else if (arr[mid]<num){
			start=mid+1;
			
		}else{
			end=mid-1;
		}
		
	} 
	printf("Khong tim thay phan tu co gia tri tren");
    return 0;
}