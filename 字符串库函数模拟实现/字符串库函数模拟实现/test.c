#define _CRT_SECURE_NO_WARNINGS 1
#include"LibraryFunction.h"

#if 0
//strlen
int main()
{
	
	char* p = "hello world";
	printf("%d", my_strlen(p));
	return 0;
}
#endif


#if 0
//strcpy
int main()
{
	
	char*p1 = "hello";
	char p2[10];
	my_strcpy(p2, p1);
	printf("%s\n", p2);
	return 0;
}
#endif


#if 0
//strcat
int main()
{
	char* p1 = "hello";
	char* p2 = "world";
	my_strcat(p1, p2);
	printf("%s\n", p1);
	return 0;
}
#endif


#if 0
//strcmp
int main()
{
	char* p1 = "hello";
	char* p2 = "world";
	printf("%d\n", my_strcmp(p1, p2));
	return 0;
}
#endif

#if 0
//strstr
int main()
{
	char str1[] = "hello world";
	char str2[] = "world";
	printf("%c\n", my_strstr(str1, str2));
	return 0;
}
#endif

#if 0
//memcpy
struct
{
	char name[20];
	int age;
}person, person_copy;
int main()
{
	char myname[] = "abcdefgh";
	//using memcpy to copy string
	my_memcpy(person.name, myname, strlen(myname) + 1);
	person.age = 46;

	//using memcpy to copy structure
	my_memcpy(&person_copy, &person, sizeof(person));
	printf("person_copy:%s,%d", person_copy.name, person_copy.age);
	return 0;
}
#endif

#if 0
int main()
{
	char str[] = "memmove an be very usefull";
	my_memmove(str + 20, str + 15, 11);
	printf("%s\n", str);
	return 0;
}
#endif
