#include<stdio.h>
void selection_sort(int n,int a[],int smallest);
int main(){
    int n,i,a[100],smallest;
    printf("Enter size of array :\n");
    scanf("%d",&n);
    printf("Enter elements of array :\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    selection_sort(n,a,smallest);
    printf("\n");
    return 0;
}
void selection_sort(int n,int a[],int smallest){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        smallest=i;
        for(j=i+1;j<n;j++){ 
            if(a[j] < a[smallest])
                smallest=j;
        }
        temp=a[i];
        a[i]=a[smallest];
        a[smallest]=temp;
    }         
    printf("print sorted array :\n");
    for(i=0;i<n;i++)
        printf("%d  ",a[i]);  
}