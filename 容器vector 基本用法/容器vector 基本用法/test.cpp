#define _CRT_SECURE_NO_WARNINGS 1
#include < iostream> 
#include <string.h>
#include < vector> 
#include <algorithm>
using namespace std;
class A
{
	//����  
};
int main()
{
	system("color 70");
	//��ʼ��ʾ��
	 //int��vector  
	vector<int> vecInt;

	//float��vector  
	vector<float> vecFloat;

	//�Զ������ͣ�������A��vector  
	vector<A> vecA;

	//�Զ������ͣ�����ָ����A��ָ���vector  
	vector<A*> vecPointA;

	//int��vector,����3��Ԫ��  
	vector<int> vecIntA(3);

	//int��vector,����3��Ԫ����ÿ��Ԫ�ض���9  
	vector<int> vecIntB(3, 9);

	//����vecIntB��vecIntC  
	vector<int> vecIntC(vecIntB);

	int iArray[] = { 2,4,6 };
	//����vecIntD  
	vector<int> vecIntD(iArray, iArray + 3);

	//��ӡvectorA,�˴�Ҳ����������ע���ڵĴ��������vector�е�����  
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

	//��ӡvecIntB  
	cout << "VecIntB:" << endl;
	for (vector<int>::iterator iter = vecIntB.begin(); iter != vecIntB.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;

	//��ӡvecIntC  
	cout << "VecIntB:" << endl;
	for (vector<int>::iterator iter = vecIntC.begin(); iter != vecIntC.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;

	//��ӡvecIntD  
	cout << "vecIntD:" << endl;
	for (vector<int>::iterator iter = vecIntD.begin(); iter != vecIntD.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;
	
	//pop_back()&push_back(elem)ʵ������������Ƴ��Ͳ�������
	vector<int>v1;//����һ�������洢���� int
	for (int i = 0; i < 10; i++) // push_back(elem)���������������� 
	{
		v1.push_back(i*i);
		cout << v1[i] << ",";
	}

	for (int i = 0; i < 5; i++)//ȥ���������һ������ 
	{
		v1.pop_back();
	}
	cout << "\n"<<endl;

	for (int i = 0; i < v1.size(); i++)//size()������ʵ�����ݸ��� 
	{
		cout << v1[i] << ",";
	}
	cout << "\n"<<endl;


	//clear()�����������������
	v1.clear();//�����������������
	cout << v1.size() << endl<<endl;


	//����
	vector<int>v2;//����һ�������洢���� int

	v2.push_back(3);
	v2.push_back(1);
	v2.push_back(2);
	v2.push_back(5);
	v2.push_back(4);

	sort(v2.begin(), v2.end());//��С����;ע�⣺sort ��Ҫͷ�ļ� #include <algorithm>

	cout << "��С����:";
	for (int i = 0; i < v2.size(); i++)
	{
		cout << v2[i] << ",";
	}
	cout << "\n" ;

	cout << "�Ӵ�С:";
	reverse(v2.begin(), v2.end());//�Ӵ�С 
	for (int i = 0; i < v2.size(); i++)
	{
		cout << v2[i] << ",";
	}
	cout << "\n"<<endl;

	//���ʣ�ֱ���������&���������ʣ�
	//˳�����
	vector<int>v3;
	for (int i = 0; i < 10; i++)
	{
		v3.push_back(i);
	}

	cout << "ֱ���������飺";
	for (int i = 0; i < 10; i++)//����һ 
	{
		cout << v3[i] << " ";
	}
	cout << endl;

	//��������ʹ�õ�������������������� 
	cout << "���� �� ������";
	vector<int>::iterator iter;//����һ����������������vector���������ã���������ָ��vector������Ԫ�� 
	for (iter = v3.begin(); iter != v3.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << "\n"<<endl;

	//��ά�������ֶ��巽�������һ����
	//����һ
	int N = 9, M = 9;
	vector<vector<int> > v4(N); //�����ά��̬�����С5�� 
	for (int i = 0; i < v4.size(); i++)//��̬��ά����Ϊ5��6�У�ֵȫΪ0 
	{
		v4[i].resize(M);
	}
	 
	for (int i = 0; i < v4.size(); i++)//�����ά��̬���� 
	{
		for (int j = 0; j < v4[i].size(); j++)
		{
			v4[i][j] = 9;
			cout << v4[i][j] << " ";
		}
		cout << "\n";
	}
	cout << endl;

	//������
	vector<vector<int> > v5(N, vector<int>(M)); //�����ά��̬����5��6��
	for (int i = 0; i < v5.size(); i++)//�����ά��̬���� 
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