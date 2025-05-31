#include <stdio.h>

#define MAX 11

typedef struct {
	char name[MAX+1];
	int age;
	char type;
	int id;
}Human;

int main(void) {
	int *ptr;
	int i = 0;
	ptr = &i;
	scanf("%d",&i);
	printf("hello world");
	return 0;
}
