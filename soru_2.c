#include <stdio.h>
void merge(int dizi[],int n, int dizi2[],int n2,int merged[])
{
    int i=0, a=0, k=0;
    while(i<n && a<n2)
    {
        if(dizi[i] <= dizi2[a])
        {
            merged[k++] = dizi[i++];
        }
        else
        {
            merged[k++] = dizi2[i++];
        }
    }
    while(i<n)
    {
        merged[k++] = dizi[i++];
    }
    while(a<n2)
    {
        merged[k++] = dizi2[a++];
    }
}
int main()
{
    int dizi[] = {2,4,6,8,10};
    int n[] = sizeof(dizi) / sizeof(dizi[0]);
    int dizi2[] = {1,3,5,7,9};
    int n2[] = sizeof(dizi2) / sizeof(dizi2[0]);
    int mergerd[n+n2];
    merge(dizi,n,dizi2,n2,merged);
    printf("Dizi: ");
    for(int i=0;i<n + n2; i++)
    {
        printf("%d ",merged[i]);
    }
    return 0;
}