#include<stdio.h>

void merge(int arr[],int larray[],int rarray[],int lc,int rc)
{
    int i=0,j=0,k=0;
    // i is counter in larray and j is counter in rarray
    while(i < lc && j < rc){
        if(larray[i] < rarray[j])
            {arr[k] = larray[i];
            i++; k++;}
        else {arr[k] = rarray[j];
            k++;j++;
    }}
    while( i < lc)
    {   arr[k] = larray[i];
        k++;i++; 
}
    while(j < rc)
    {   arr[k] = rarray[j];
        j++;k++;
    }
    return;

}
void mergesort(int arr[],int n)
{
    int i,mid,counter1;
    if(n<2) return;

    mid = n/2;
    int larrray[mid];
    for(counter1 = 0; counter1<mid;counter1++)
        larrray[counter1]=arr[counter1];
    int rarray[n-mid];
    for(counter1 = mid;counter1<n;counter1++)
        rarray[counter1 - mid] =arr[counter1];
    mergesort(larrray,mid);
    mergesort(rarray,n-mid);
    merge(arr,larrray,rarray,mid,n-mid);
    return;
}

int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    mergesort(arr,n);
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);

    return 0;
}