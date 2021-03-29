#include <stdio.h>

int main() {
    int numbers[100];
    int i, a, b;
    int tong = 0;
    int s = 0;

    printf("Nhap so luong so can tinh");
    scanf("%d", &a);

    if (a%1 > 0)
    {
        printf("hihi");
    } else {
        for(i=0;i<a;i++){
		scanf("%d",&numbers[i]);
	}

    for(i=0;i<a;i++) {
        if (numbers[i]>=0)
		s+=numbers[i];
	 	
	}
    printf("%d",s);
    }
    
    

    // int numbers[a-1];

    

    return 0;
}