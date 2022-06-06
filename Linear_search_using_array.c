// Linear search in an array.
#include<stdio.h>
int  Linear_search(int arr[],int item,int n);
int main(){
    int n,i,item,arr[15];
    printf("Enter number of elments you want : ");
    scanf("%d",&n);

    printf("Enter the elements :\n ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
        
    printf("Enter item  to be searched : ");
    scanf("%d",&item);

    int index=Linear_search(arr,item,14);
    if (index==-1)
        printf("%d is not found in arr : ",item);
    else
        printf("%d is found at position arr[%d]: ",item, index);
    printf("\n");
    return 0;
}
int  Linear_search(int arr[],int item,int n){
    if(n<0)
        return -1;
    if(arr[n]==item)
        return n;
    return Linear_search(arr,item,n-1);
}
