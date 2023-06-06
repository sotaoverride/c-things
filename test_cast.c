#include <stdio.h>
int main(){
	long a = (long) "hello world";
	char * tmp = (char *) a;
	printf("%s",tmp);
	return 0;
}
