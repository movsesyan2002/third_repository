#include <stdio.h>

void prnt(){
	
	printf("hello world");
}


int main(){

	void (*tpel)() = prnt;
	tpel();
	
}
