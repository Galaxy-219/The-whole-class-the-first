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

//StructType�ǽṹ����������MemberName�ǳ�Ա����������������ǣ�
//1���Ƚ�0ת��Ϊһ���ṹ�����͵�ָ�룬�൱��ĳ���ṹ����׵�ַ��0��
// ��ʱ��ÿһ����Ա��ƫ�����ͳ������0��ƫ�����������Ͳ���Ҫ��ȥ�׵�ַ�ˡ�
//2���Ը�ָ����->�������Ա����ȡ����ַ�����ڽṹ����ʼ��ַΪ0��
// ��ʱ��Աƫ����ֱ���൱�ڶ�0��ƫ���������Եõ���ֱֵ�Ӿ��Ƕ��׵�ַ��ƫ������
//3��ȡ���ó�Ա�ĵ�ַ��ǿת��size_t����ӡ������������ƫ������