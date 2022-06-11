#include<stdio.h>
void find_smmallest_and_swap_to_0th_place(int a[],int n,int smallest);
int main(){
    int i,smallest,n,a[100];

    printf("Enter size of a[] :\n");
    scanf("%d",&n);

    printf("Enter elements of a[] :\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    find_smmallest_and_swap_to_0th_place(a,n,smallest);
    printf("\n");
    return 0;
}
void find_smmallest_and_swap_to_0th_place(int a[],int n,int smallest){
    int i,temp;
    smallest=a[0];
    for(i=0;i<n;i++){
        if(a[i]<smallest)
            smallest=a[i]; 
    }
    printf("print smallest number in array is = %d\n",smallest);
    temp=a[0];
    a[0]=smallest;
    smallest=temp;
    printf("print array after swaping :\n");
    printf("a[0]=%d ",a[0]);
}