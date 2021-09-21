#include <stdio.h>
#include <stdlib.h>

int pangkat (int x, int y)
{
 if (y == 0){
 	return 1;
	}
 	else {
 		return x*pangkat(x,y=1);
	 }
}

main()
{
	int x,y;
	printf("Bilangan yang akan dipangkatkan");
	scanf("%d", &x);
	printf("Pangkat bilangan");
	scanf("%d", &y);
	printf("hasil bilangan %d pangkat %d=%d/n",x,y,pangkat(x,y));
	return 0;
	
}
 
