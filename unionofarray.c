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
    int a[] = {1, 3, 5, 7, 9};
    int n = sizeof(a)/sizeof(a[0]);
int b[] = {2, 3, 6, 7, 10};
int m = sizeof(b)/sizeof(b[0]);
int i = 0, j = 0;

printf("Union: ");
while (i < n && j < m) {
    if (a[i] < b[j])
        printf("%d ", a[i++]);
    else if (b[j] < a[i])
        printf("%d ", b[j++]);
    else {
        printf("%d ", b[j++]);
        i++;
    }
}

while (i < n)
    printf("%d ", a[i++]);
while (j < m)
    printf("%d ", b[j++]);
printf("\n");
printf("Intersection: ");
while (i < n && j < m) {
    if (a[i] < b[j])
        i++;
    else if (b[j] < a[i])
        j++;
    else {
        printf("%d ", b[j++]);
        i++;
    }
printf("\n");
}
}