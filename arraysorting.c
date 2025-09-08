#include<stdio.h>
void mergesortedarrays(int a[], int n, int b[], int m, int c[])
{
    int i=0,j=0,k=0;
    while(i<n && j<m)
    {
        if(a[i]< b[j])
        {
            c[k++]=a[i++];
        }
        else
        {
            c[k++]=b[j++];
        }
    }
    while(i<n)
    {
        c[k++]=a[i++];
    }
    while(j<m)
    {
        c[k++]=b[j++];
    }
}

void main()
{
    int a[] = {1, 3, 5, 7};
    int n = sizeof(a)/sizeof(a[0]);
    int b[] = {2, 4, 6, 8};
    int m = sizeof(b)/sizeof(b[0]);
    int c[n+m];

    mergesortedarrays(a, n, b, m, c);

    printf("Merged: ");
    for (int i=0; i < n+m; i++)
        printf("%d ", c[i]);
    printf("\n");

}
