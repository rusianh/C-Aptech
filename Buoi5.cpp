#include <iostream>


int main()
{
    int numbers[5];
    int i, j, a, s, u, temp;

    /* nhập số lượng phần tử */
    printf("Nhap so luong so can tinh");
    scanf("%d", &a);
    /* nhập phần tử vào mảng */
    for(i=0;i<a;i++){
		scanf("%d",&numbers[i]);
	}

    /* chạy vòng lặp so sánh  */
    for (j = 0; j < a; j++)
    {
        for (i = 0; i < a; i++)
        {
            if (numbers[i] > numbers[i+1]) {
                numbers[i] = temp ;
                numbers[i] = numbers[i+1];
                numbers[i+1] = temp;

            }
        }
        
    }

    for ( u = 0; u < a; u++)
    {
        printf("%d",numbers[u]);
    }
    
    
    return 0;
}