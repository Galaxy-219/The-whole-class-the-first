#define _CRT_SECURE_NO_WARNINGS 1
void replaceSpace(char* str, int length)
{
	int i = 0;
	int spcount = 0;
		for (i = 0; i < length; i++)
		{
			if (str[i] == ' ')
				spcount++;
		}
		int newlen = length + 2 * spcount;
		int pos = newlen - 1;
		for (i = pos; i >= 0; i--)
		{
			if (str[pos] == ' ')
			{
				str[pos--] = '0';
				str[pos--] = '2';
				str[pos--] = '%';
			}
			else
			{
				str[pos--] = str[i];
			}
		}
}
int main()
{
	char str[20] = "we are happe";
	int size = sizeof(str) / sizeof(str[0]);
	replaceSpace(&str, size);
}
