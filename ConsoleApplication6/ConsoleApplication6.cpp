#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <string>
#include <vector>
#include <algorithm> /* �㷨 */


using namespace std;

int main()
{
	vector<double> vecDouble = { 98.5, 67.9, 43.6, 32.9 };	//��������vector
	//�������в�������
	vecDouble.push_back(100.8);//�������β������һ������
	//����1
	for (int i = 0; i < vecDouble.size(); i++) {
		cout << vecDouble[i] << endl;
	}	cout << endl;

	//���ϵ�ͨ�ñ���������ʹ�õ����� iterator
	//�����ǵ������Ļ����÷����������أ�
	vector<double>::iterator it;	//�õ������������Ǹ� - ʵ������һ��ָ�����
	//it.begin	�ӵ�һ��Ԫ�ؿ�ʼ����
	for (it = vecDouble.begin(); it != vecDouble.end(); ++it) {
		cout << *it << endl;
	}	cout << endl;

	//����
	sort(vecDouble.begin(), vecDouble.end());		//��С��������
	for (int i = 0; i < vecDouble.size(); i++) {
		cout << vecDouble[i] << endl;
	}	cout << endl;

	reverse(vecDouble.begin(), vecDouble.end());	//��С��������
	for (int i = 0; i < vecDouble.size(); i++) {
		cout << vecDouble[i] << endl;
	}	cout << endl;






	/*
	//ʹ�ö�ά����
	string stu_names[] { "����", "����", "�ŷ�" };
	string course_names[]{ "����", "��ѧ", "Ӣ��" };
	const int ROW = 3;//sizeof(stu_names) / sizeof(stu_names[0])
	const int COL = 3;
	double scores[ROW][COL];
	for (int i = 0; i < ROW; i++) {//���ѭ������ѧ��
		for (int j = 0; j < COL; j++) {//�ڲ�ѭ�����ƿγ�
			cout << stu_names[i] << "��" << course_names[j] << "�ɼ���";
			cin >> scores[i][j];
		}
	}
	cout << '\t';
	for (int i = 0; i < COL; i++) {
		cout << course_names[i] << '\t';
	}
	cout << endl;
	for (int i = 0; i < ROW; i++) {
		cout << stu_names[i] << '\t';
		for (int j = 0; j < COL; j++) {
			cout << scores[i][j] << "\t";
		}
		cout << endl;
	}
	*/






	/*
	//ʵ������Ԫ�ص�ɾ���Ͳ���
	double power[10];//����Ĵ�Сһ��ȷ���ˣ��Ͳ����ڸ����ˣ�
	int powerCount = 0;//��ǰ�����е�Ԫ�ظ���
	double insertPower;//Ҫ����Ĺ�������ֵ
	int insertIndex = 0;//������ֵ�������±�
	power[powerCount++] = 45771;
	power[powerCount++] = 42322;
	power[powerCount++] = 40907;
	power[powerCount++] = 40706;

	double temp;
	for (int i = 0; i < powerCount; i++)
	{
		for (int j = 0; j < powerCount - i - 1; j++)
		{
			if (power[j] < power[j + 1]) {
				temp = power[j];
				power[j] = power[j + 1];
				power[j + 1] = temp;
			}
		}
	}
	cout << "�����" << endl;
	for (int i = 0; i < powerCount; i++)
	{
		cout << power[i] << '\t';
	}
	cout << endl;

	//����
	cout << "������Ҫ�������ֵ��";
	cin >> insertPower;
	if (insertPower < power[powerCount - 1])
	{
		cout << "���������ֵû���ϰ񣬵�ǰ���а�Ϊ��" << endl;
		for (int i = 0; i < powerCount; i++)
		{
			cout << power[i] << '\t';
		}
		cout << endl;
		system("pause");
		return 0;
	}
	for (int i = 0; i < powerCount; i++)
	{
		if (insertPower >= power[i]) {
			insertIndex = i;
			break;
		}	
	}
	for (int i = 0;; i++)
	{
		power[powerCount - i] = power[powerCount - i - 1];
		if (powerCount - i - 1 == insertIndex)
			break;
	}
	power[insertIndex] = insertPower;
	cout << "������ֵ������а�" << endl;
	for (int i = 0; i < powerCount; i++)
	{
		cout << power[i] << '\t';
	}
	cout << endl;
	*/
	









	/*
	//ѡ������
	int nums[]{ 8,4,2,1,23,25,344,12 };
	int numsLen = sizeof(nums) / sizeof(int);	//ͨ������õ����������ʵ�ʳ��ȣ���������string���飩
	//��̨����
	int min = nums[0];	//������Сֵ������ĵ�һ��Ԫ��
	int minIndex = 0;	//��Сֵ�ĳ�ʼ�±�����Ϊ0
	int temp;			//��ʱ����

	for (int i = 0; i < numsLen; i++)
	{
		min = nums[i];
		minIndex = i;
		for (int j = i + 1; j < numsLen; j++) {
			//����̨
			if (nums[j] < min) {
				min = nums[j];
				minIndex = j;
			}
		}
		//����
		if (minIndex > i) {
			temp = nums[minIndex];
			nums[minIndex] = nums[i];
			nums[i] = temp;
		}
	}
	cout << "�����" << endl;
	for (int i = 0; i < numsLen; i++) {
		cout << nums[i] << endl;
	}

	//�����
	for (int i = 0; i < numsLen / 2; i++) {
		temp = nums[numsLen - i - 1];
		nums[numsLen - i - 1] = nums[i];
		nums[i] = temp;
	}
	cout << "�����" << endl;
	for (int i = 0; i < numsLen; i++) {
		cout << nums[i] << endl;
	}
	*/





	/*��ӡ�Ǻ�ͼ��
	int i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j <= 2 - i; j++)
		{
			cout << " ";
		}
		for (j = 0; j <= i * 2; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j <= i; j++)
		{
			cout << " ";
		}
		for (j = 0; j <= 4 - 2 * i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	*/




	/*
	//��1-100֮���ż����
	int sum = 0;
	for (int i = 0; i <= 100; i++)
	{
		if (i % 2 == 1)
			continue;
		sum += i;
	}
	cout << "��1-100֮���ż����Ϊ��" << sum << endl;
	*/


	/*
	double money;
	int count = 0;//�������������ܶ����500
	for (int i = 0; i < 5; i++)
	{
		cout << "�����뵱ǰ��������ܶ";
		cin >> money;
		if (money >= 500)
			continue;
		count++;
	}
	cout << "���ѵ���500����������ǣ�" << count << endl;
	*/

	/*
	double PRICE;
	double price;
	int i;
	srand(time(NULL));
	PRICE = rand() % 100;
	cout << "�¼۸���Ϸ����ΧΪ0-99" << endl;
	for (i = 0;; i++)
	{
		cout << PRICE << endl;
		cout << "���������²�ļ۸�";
		cin >> price;
		if (price < PRICE)
			cout << "С����Ʒ�۸�" << endl;
		if (price > PRICE)
			cout << "������Ʒ�۸�" << endl;
		if (price == PRICE)
		{
			if (i == 0)
				cout << "����֮��" << endl;
			if (i == 1 || i == 2)
				cout << "�������" << endl;
			if (i == 3 || i == 4)
				cout << "�������" << endl;
			break;
		}
	}
	*/


	/*
	cout << "1997��7��������" << endl;
	cout << "��\tһ\t��\t��\t��\t��\t��" << endl;
	const int N = 2;	//1���ܼ�
	for (int i = 0; i < N; i++)
	{
		cout << "\t";
	}
	for (int i = 1; i <= 31; i++)
	{
		cout << i << "\t";
		if ((i + N) % 7 == 0)
			cout << "\n";
	}
	cout << endl;
	*/

	/*
	double salary = 0;
	double sumSalary = 0;
	double avgSalary = 0;
	const int YEAR = 6;

	for (int i = 0; i < YEAR; i++)
	{
		cout << "�������" << i + 1 << "���µĹ��ʣ�";
		cin >> salary;
		sumSalary += salary;
	}
	avgSalary = sumSalary / YEAR;
	cout << "6���µ�ƽ������Ϊ��" << avgSalary << endl;
	*/

	/*
	const int N = 5;
	int str[100] = { 89,69,85,13,77 };
	int i, j;
	for (i = 0; i < N; i++)
	{
		cout << str[i] << "\t";
	}
	for (i = 0; i <= N / 2; i++)
	{
		j = str[i];
		str[i] = str[N - i - 1];
		str[5 - i -1] = j;
	}
	for (i = 0; i < N; i++)
	{
		cout << str[i] << "\t";
	}
	*/
	system("pause");
    return 0;
}

