#include<stdio.h>
void insert_array(int arr1[],int arr2[],int n,int m,int loc);
int main (){
    int i,j,loc,n,m,a[100],b[100];
    printf("Enter size of array 1 and array 2 : \n");
        scanf("%d%d",&n,&m);

    printf("Enter elements of array 1 : \n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter elements of array2 : \n");
    for(j=0;j<m;j++)
        scanf("%d",&b[j]);

    printf("Enter loc to insert : \n");
        scanf("%d",&loc);

    insert_array(a,b,n,m,loc);
    printf("\n");
    return 0;
}
void insert_array(int a[],int b[],int n,int m,int loc){
    int i;
    for(i=n-1;i>=loc;i--)
        a[i+m]=a[i];
    for(i=0;i<m;i++)
        a[loc+i]=b[i];
    printf("after insertion : \n");
    for(i=0;i<n+m;i++)
        printf("%d ",a[i]);
}