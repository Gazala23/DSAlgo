#include<stdio.h>
void insert_element(int n,int arr[],int loc,int key);
int main(){
    int n,i,loc,key,arr[100];
    printf("Enter size of array : ");
    scanf("%d",&n);

    printf("Enter elements of array : \n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Enter element to insert : ");
        scanf("%d",&key);

    printf("Enter location : ");
        scanf("%d",&loc);

    insert_element(n,arr,loc,key);
    printf("\n");
    return 0;
}
void insert_element(int n,int arr[],int loc,int key){
    int i;
    for(i=n-1;i>=loc;i--)
        arr[i+1]=arr[i];
    arr[loc]=key;
    for(i=0;i<=n;i++)
        printf("%d\t",arr[i]);
}