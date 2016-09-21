#include <stdio.h>
#include <stdlib.h>

#define FOR_START 0


void swap(int *,int *);
void str_con(char *, char *);
void array_2_contro(int (*)[4]);
void func_callBack(void (*p)(char *, char *));

int main(void) {
    
	int a = 1, b = 2;
	int *ap = &a, *bp = &b;
	swap(ap,bp);

	int ary[][4] = { {1,2},{3,4},{5,6},{7,8} };
	int(*pa)[4] = ary; // 2차원 배열용 포인터 

	printf("%d\n",sizeof(*pa));
	//array_2_contro(pa);

	char *str = "test code";
	printf("%s\n", str);
	printf("%10u\n", &("testcode"));
	printf("%10u\n", str);
	printf("%d  %d\n", a, b);
	//str_con((char*)("code"),(char*)("test") );
	func_callBack(str_con);



	char *name = "홍길동";
	char *name1 = "홍길";

	printf("%d\n",(name==name1));

	system("pause");




	return 0;
}
void swap(int *a,int *b) {
	int c;
	c = *a; *a = *b; *b = c;
}

void str_con(char *str1, char *str2) {
      
	char *str_list[] = {str1,str2};
	
	for (int i = FOR_START; i < sizeof(str_list)/sizeof(char*); i++)
	{
		printf("%s", str_list[i]);
	}
	printf("\n");
}

void array_2_contro(int(*p)[4]) {

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < sizeof(p[i])/sizeof(int) ; j++)
		{

		}
	}

}

void func_callBack(void(*p)(char *, char *)) {
	p((char*)("code"), (char*)("test"));
}
// PUSH TAG