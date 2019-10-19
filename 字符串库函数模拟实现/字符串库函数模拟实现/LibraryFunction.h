#pragma once
#include<stdio.h>
#include<assert.h>
#include<string.h>

//strlen������ģ��ʵ��;
int my_strlen(const char * str);

//strcpy������ģ��ʵ��
char * my_strcpy(char * dst, const char * src);

//strcat������ģ��ʵ��
char * my_strcat(char * dst, const char * src);

//strcmp������ģ��ʵ��
int my_strcmp(const char * str1, const char * str2);

//strstr������ģ��ʵ��
char * my_strstr(const char * str1,const char * str2);

//memcpy������ģ��ʵ��
void * my_memcpy(void * dst, const void * src, size_t count);

//memmove������ģ��ʵ��
void * my_memmove(void * dst, const void * src, size_t count);


