#define _CRT_SECURE_NO_WARNINGS 1
#include"LibraryFunction.h"
//strlen函数的模拟实现
//第一种：计数方式
int my_strlen(const char * str)
{
	assert(str);
	int count = 0;
	while (*str)
	{
		++count;
		++str;
	}
	return count;
}
#if 0
//第二种：递归
int my_strlen(const char * str)
{
	assert(str);
	if (*str == '\0')
	{
		return 0;
	}
	else
	{
		return 1 + strlen(str + 1);
	}

}
//第三种：指针相减
int my_strlen(const char * str)
{
	assert(str);
	const char*end = str;
	while (*end)
	{
		++end;
	}
	return end - str;
}
#endif

//strcpy函数的模拟实现
char * my_strcpy(char * dst, const char * src)
{
	assert(dst);
	assert(src);
	char *ret = dst;
	do
	{
		*dst = *src;
		++src;
		++dst;
	} while (*src);
	return ret;
}
#if 0
char* my_strcpy(char * dst, const char * src)
{
	assert(dst);
	assert(src);
	char *ret = dst;
	while (*dst++ = *src++);
	//while (*dst=*src);
	//{
	//	src++;
	//	dst++;
	//}
	return ret;
}
#endif
//strcat函数的模拟实现
char * my_strcat(char * dst, const char * src)
{
	assert(dst);
	assert(src);
	char *ret = dst;
	while (*dst)
	{
		++dst;
	}
	while (*dst++ = *src++);
	return ret;
}


//strcmp函数的模拟实现
int my_strcmp(const char * str1, const char * str2)
{
	assert(str1&&str2);
	while (*str1&&str2)
	{
		if (*str1 > *str2)
		{
			return 1;
		}
		else if (*str1 < *str2)
		{
			return -1;
		}
		else
		{
			str1++;
			str2++;
		}
	}
	if (*str1 == '\0'&&*str2 == '\0')
	{
		return 0;
	}
	else if (*str1 == '\0')
	{
		return -1;
	}
	else if (*str2 == '\0')
	{
		return 1;
	}

}

//strstr函数的模拟实现
char * my_strstr(const char * str1, const char * str2)
{
	assert(str1&&str2);
	char * src = (char*)str1;
	char * sub = (char*)str2;
	char * p = NULL;
	if (*str2 == '\0')
	{
		return NULL;
	}
	while (*src)
	{
		p = src;
		sub = str2;
		while (*p&&*sub && (*src == *sub))
		{
			p++;
			sub++;			
		}
		if (*sub == '\0')
		{
			return p;
		}
		else
		{
			src = ++p;
			sub = str2;
		}
	}
}

//memcpy函数的模拟实现
void * my_memcpy(void * dst, const void * src, size_t count)
{
	assert(dst&&src);
	while (count--)
	{
		*(char *)dst = *(char *)src;
		dst = (char *)dst+1;
		src = (char *)src + 1;
	}
	return dst;
}

//memmove函数的模拟实现
void * my_memmove(void * dst, const void * src, size_t count)
{
	assert(dst&&src);
	if (dst < src || (char *)dst >= ((char *)src + count))
	{
		while (count--)
		{
			*(char *)dst = *(char *)src;
			dst = (char *)dst + 1;
			src = (char *)src + 1;
		}
	}
	else 
	{
		dst = (char *)dst + count-1;
		src = (char *)src + count-1;
		while (count--)
		{
			*(char *)dst = *(char *)src;
			dst = (char *)dst -1;
			src = (char *)src -1;
		}
	}
}