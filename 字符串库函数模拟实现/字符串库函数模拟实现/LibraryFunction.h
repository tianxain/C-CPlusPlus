#pragma once
#include<stdio.h>
#include<assert.h>
#include<string.h>

//strlen函数的模拟实现;
int my_strlen(const char * str);

//strcpy函数的模拟实现
char * my_strcpy(char * dst, const char * src);

//strcat函数的模拟实现
char * my_strcat(char * dst, const char * src);

//strcmp函数的模拟实现
int my_strcmp(const char * str1, const char * str2);

//strstr函数的模拟实现
char * my_strstr(const char * str1,const char * str2);

//memcpy函数的模拟实现
void * my_memcpy(void * dst, const void * src, size_t count);

//memmove函数的模拟实现
void * my_memmove(void * dst, const void * src, size_t count);


