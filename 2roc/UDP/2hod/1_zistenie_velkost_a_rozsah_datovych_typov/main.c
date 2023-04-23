#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/* program zisti velkost a rozsah datovych typov */

int main()
{	
	printf("DATOVY_TYP\t VELKOST\t ROZSAH\n");
	printf("char\t\t %d B\t\t %d az %d\n",sizeof(char),CHAR_MIN,CHAR_MAX);
	printf("short\t\t %d B\t\t %d az %d\n",sizeof(short),SHRT_MIN,SHRT_MAX);
	printf("int\t\t %d B\t\t %d az %d\n",sizeof(int),INT_MIN,INT_MAX);
	printf("long\t\t %d B\t\t %ld az %ld\n",sizeof(long),LONG_MIN,LONG_MAX);
	printf("float\t\t %d B\n",sizeof(float));
	printf("double\t\t %d B\n",sizeof(double));
	return 0;
}
