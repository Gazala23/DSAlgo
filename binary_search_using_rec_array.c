#include<stdio.h>
void binary_search(int arr[],int low,int up,int x);
int main (){
    int x,i,n,arr[50] ,up,low;
    printf("Enter size of array : " );
    scanf("%d",&n);
    printf("Enter  shorted elements : \n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter element to be searched :");
    scanf("%d",&x);
    binary_search(arr,0,n,x);
    printf("\n");
    return 0;
}
void binary_search(int arr[],int low,int up,int x){
    int mid;
    if(low>up){
        printf("%d is not found in arr : ",x);
        return;
    }
    mid=(up+low)/2;
    if(arr[mid]==x){
        printf("%d is found in mid : ",x);
    }
    else if(arr[mid]>x){
        binary_search(arr,low,mid-1,x);
    }
    else if(arr[mid]<x){
        binary_search(arr,mid+1,up,x);
    }
    
}