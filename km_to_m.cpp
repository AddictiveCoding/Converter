#include <stdio.h>
int main()
{

    int A;
    float In_metre;
	printf("Input value in km to get it converted into metre");
	scanf("%d", &A);
	In_metre= A*1000 ;
	
	printf("%f\n", In_metre ) ;
	printf( " metres");
	
	return 0;
}
