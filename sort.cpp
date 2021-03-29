#include <stdio.h>


int bubble_sort (int a[],int); /* function prototype for add */

int bubble_sort(int a[],int m)
{
    int x,y,t;
     for (x=0; x < m-1; x++)
        for (y=0; y < m-x-1; y++)
            if (a[y] > a[y+1])
            {
                t=a[y];
                a[y]=a[y+1];
                a[y+1]=t;
            }
            
    
    printf("--------------------\n");
    for (int i=0; i < m; i++)
        printf("%d\n",a[i]);
        
        return 0;
}

int main() {
    int n, i;
    int num[100];

    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    while (n > 100 || n < 1) {
        printf("So trong khoang.\n");
        printf("Nhap lai so: ");
        scanf("%d", &n);
    }

    for (i = 0; i < n; ++i) {
        printf("%d. Nhap so: ", i + 1);
        scanf("%d", &num[i]);       
    }

   
    bubble_sort(num,n);
    return 0;
}



