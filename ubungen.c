#include<stdio.h>

int main() {

	int arr[3][3] = { 1,2,3,40,50,60,700,800,900 };

	for (int i = 2; i >= 0; i--)
	{
		for (int j = 2; j >= 0; j--)
		{
			printf("arr[%d][%d] = %#x\n",i,j, &arr[i][j]);
		}
		printf("*********************\n");
	}
	printf("Der Add Wert von arr, arr+1, arr+2 sind:\n");
	printf("arr=%#p | arr+1=%#x | arr+2=%#x\n\n", arr, arr + 1, arr + 2);

	printf("Der Add Wert von *arr, *arr+1, *arr+2 sind:\n");
	printf("*arr=%#p | *arr+1=%#x | *arr+2=%#x\n\n", *arr, *arr + 1, *arr + 2);


	printf("Der Add Wert von &arr[0], &arr[0]+1, &arr[0]+2 sind:\n");
	printf("&arr=%#p | &arr[0]+1=%#x | &arr[0]+2=%#x\n\n", &arr[0], &arr[0] + 1, &arr[0] + 2);

	printf("Der Add Wert von arr[0], arr[0]+1, arr[0]+2 sind:\n");
	printf("arr[0]=%#p | arr[0]+1=%#x | arr[0]+2=%#x\n\n", arr[0], arr[0] + 1, arr[0] + 2);


	printf("%d\n", *(*(arr+1)+2 ));
	printf("%#x\n", &arr[2][1]);
	


}