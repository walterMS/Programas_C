#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	
	int arreglo[3][5];
	int *ptr;
	int *ptr2;
	
	printf("%carreglo: %p\n",38,arreglo);
	printf("%carreglo[0]: %p\n",38,arreglo[0]);
	printf("%carreglo[0]: %p\n",38,arreglo[1]);
	printf("%carreglo[0][0]: %p\n",38,&arreglo[0][0]);
	ptr=arreglo[0];
	printf("%carreglo[0]: %p\n",38,ptr);
	printf("%carreglo[0]: %p\n",38,(ptr+1));
	printf("%carreglo[0]: %p\n",38,(ptr+2));
	printf("%carreglo[0]: %p\n",38,(ptr+3));
	printf("%carreglo[0]: %p\n",38,(ptr+4));
	printf("%carreglo[0]: %p\n",38,(ptr+5));
	printf("%carreglo[0]: %p\n",38,(ptr+6));
	ptr2=&arreglo[0][0];
	printf("%carreglo[0]: %p\n",38,ptr2);
	printf("%carreglo[0]: %p\n",38,(ptr2+1));
	printf("%carreglo[0]: %p\n",38,(ptr2+2));
	printf("%carreglo[0]: %p\n",38,(ptr2+3));
	printf("%carreglo[0]: %p\n",38,(ptr2+4));
	printf("%carreglo[0]: %p\n",38,(ptr2+5));
	return 0;
	}