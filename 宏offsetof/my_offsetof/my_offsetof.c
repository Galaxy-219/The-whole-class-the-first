#include <stdio.h>

#define OFFSETOF(struct_name,mumber_name) (int)&(((struct_name*)0)->mumber_name)

struct S
{
	char a;
	int b;
	double c;
};

int main()
{
	printf("%d\n", OFFSETOF(struct S, a));
	printf("%d\n", OFFSETOF(struct S, b));
	printf("%d\n", OFFSETOF(struct S, c));
	return 0;
}

//StructType是结构体类型名，MemberName是成员名。具体操作方法是：
//1、先将0转换为一个结构体类型的指针，相当于某个结构体的首地址是0。
// 此时，每一个成员的偏移量就成了相对0的偏移量，这样就不需要减去首地址了。
//2、对该指针用->访问其成员，并取出地址，由于结构体起始地址为0，
// 此时成员偏移量直接相当于对0的偏移量，所以得到的值直接就是对首地址的偏移量。
//3、取出该成员的地址，强转成size_t并打印，就求出了这个偏移量。