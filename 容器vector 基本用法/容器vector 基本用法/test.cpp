#define _CRT_SECURE_NO_WARNINGS 1
#include < iostream> 
#include <string.h>
#include < vector> 
#include <algorithm>
using namespace std;
class A
{
	//空类  
};
int main()
{
	system("color 70");
	//初始化示例
	 //int型vector  
	vector<int> vecInt;

	//float型vector  
	vector<float> vecFloat;

	//自定义类型，保存类A的vector  
	vector<A> vecA;

	//自定义类型，保存指向类A的指针的vector  
	vector<A*> vecPointA;

	//int型vector,包含3个元素  
	vector<int> vecIntA(3);

	//int型vector,包含3个元素且每个元素都是9  
	vector<int> vecIntB(3, 9);

	//复制vecIntB到vecIntC  
	vector<int> vecIntC(vecIntB);

	int iArray[] = { 2,4,6 };
	//创建vecIntD  
	vector<int> vecIntD(iArray, iArray + 3);

	//打印vectorA,此处也可以用下面注释内的代码来输出vector中的数据  
	//for(int i=0;i<vecIntA.size();i++)
	//{
	//	cout<<vecIntA[i]<<" ";
	//}
	cout << "vecIntA:" << endl;
	for (vector<int>::iterator iter = vecIntA.begin(); iter != vecIntA.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;

	//打印vecIntB  
	cout << "VecIntB:" << endl;
	for (vector<int>::iterator iter = vecIntB.begin(); iter != vecIntB.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;

	//打印vecIntC  
	cout << "VecIntB:" << endl;
	for (vector<int>::iterator iter = vecIntC.begin(); iter != vecIntC.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;

	//打印vecIntD  
	cout << "vecIntD:" << endl;
	for (vector<int>::iterator iter = vecIntD.begin(); iter != vecIntD.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;
	
	//pop_back()&push_back(elem)实例在容器最后移除和插入数据
	vector<int>v1;//创建一个向量存储容器 int
	for (int i = 0; i < 10; i++) // push_back(elem)在数组最后添加数据 
	{
		v1.push_back(i*i);
		cout << v1[i] << ",";
	}

	for (int i = 0; i < 5; i++)//去掉数组最后一个数据 
	{
		v1.pop_back();
	}
	cout << "\n"<<endl;

	for (int i = 0; i < v1.size(); i++)//size()容器中实际数据个数 
	{
		cout << v1[i] << ",";
	}
	cout << "\n"<<endl;


	//clear()清除容器中所有数据
	v1.clear();//清除容器中所以数据
	cout << v1.size() << endl<<endl;


	//排序
	vector<int>v2;//创建一个向量存储容器 int

	v2.push_back(3);
	v2.push_back(1);
	v2.push_back(2);
	v2.push_back(5);
	v2.push_back(4);

	sort(v2.begin(), v2.end());//从小到大;注意：sort 需要头文件 #include <algorithm>

	cout << "从小到大:";
	for (int i = 0; i < v2.size(); i++)
	{
		cout << v2[i] << ",";
	}
	cout << "\n" ;

	cout << "从大到小:";
	reverse(v2.begin(), v2.end());//从大到小 
	for (int i = 0; i < v2.size(); i++)
	{
		cout << v2[i] << ",";
	}
	cout << "\n"<<endl;

	//访问（直接数组访问&迭代器访问）
	//顺序访问
	vector<int>v3;
	for (int i = 0; i < 10; i++)
	{
		v3.push_back(i);
	}

	cout << "直接利用数组：";
	for (int i = 0; i < 10; i++)//方法一 
	{
		cout << v3[i] << " ";
	}
	cout << endl;

	//方法二，使用迭代器将容器中数据输出 
	cout << "利用 迭 代器：";
	vector<int>::iterator iter;//声明一个迭代器，来访问vector容器，作用：遍历或者指向vector容器的元素 
	for (iter = v3.begin(); iter != v3.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << "\n"<<endl;

	//二维数组两种定义方法（结果一样）
	//方法一
	int N = 9, M = 9;
	vector<vector<int> > v4(N); //定义二维动态数组大小5行 
	for (int i = 0; i < v4.size(); i++)//动态二维数组为5行6列，值全为0 
	{
		v4[i].resize(M);
	}
	 
	for (int i = 0; i < v4.size(); i++)//输出二维动态数组 
	{
		for (int j = 0; j < v4[i].size(); j++)
		{
			v4[i][j] = 9;
			cout << v4[i][j] << " ";
		}
		cout << "\n";
	}
	cout << endl;

	//方法二
	vector<vector<int> > v5(N, vector<int>(M)); //定义二维动态数组5行6列
	for (int i = 0; i < v5.size(); i++)//输出二维动态数组 
	{
		for (int j = 0; j < v5[i].size(); j++)
		{
			v5[i][j] = 9;
			cout << v5[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}