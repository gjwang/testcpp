#include <stdio.h>

int* fun(){
    int ret[256];
	ret[0]=300;
	printf("addr=0x%p\n", ret);
    return ret;    
}

char * teststack(){

	int i = 10;
	printf("i_ptr=0x%p\n", &i);
	int array[10];
	printf("array_ptr=0x%p\n", array);
	printf("hello_ptr=0x%p\n", &"hello, world");
	return "stack";
}


int main(){
	int * ret = fun();
	printf("ret addr=0x%p, val=%d\n", ret, ret[0]);

	ret[0] = 200;
	printf("----ret addr=0x%p, val=%d\n", ret, ret[0]);


	char *ptr = teststack();
	printf("ptr=0x%p, data=%s\n", ptr, ptr);


	return 0;
}
