#include <stdio.h>
int main()
{
    int dizi[] = {3,4,6,8,3,6,9};
    int n = sizeof(dizi) / sizeof(dizi[0]);
    int frekans[n];
    for(int i=0; i<n; i++)
    {
        frekans[i]=0;
    }
    for(it i=0; i<n; i++)
    {
        frekans[dizi[i]-1]++;
    }
    for(int i=0; i<n; i++)
    {
        if(frekans[i]>0)
        {
            printf("%d tane %d \n",frekans[i],i+1);
        }
    }
    return 0;
}