#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <string>
#include <vector>
#include <algorithm> /* 算法 */


using namespace std;

int main()
{
	vector<double> vecDouble = { 98.5, 67.9, 43.6, 32.9 };	//向量容器vector
	//向数组中插入数字
	vecDouble.push_back(100.8);//在数组的尾部插入一个数字
	//遍历1
	for (int i = 0; i < vecDouble.size(); i++) {
		cout << vecDouble[i] << endl;
	}	cout << endl;

	//集合的通用遍历方法：使用迭代器 iterator
	//以下是迭代器的基本用法，高能慎重！
	vector<double>::iterator it;	//得到迭代器对象那个 - 实际上是一个指针对象！
	//it.begin	从第一个元素开始迭代
	for (it = vecDouble.begin(); it != vecDouble.end(); ++it) {
		cout << *it << endl;
	}	cout << endl;

	//排序
	sort(vecDouble.begin(), vecDouble.end());		//从小到大排序
	for (int i = 0; i < vecDouble.size(); i++) {
		cout << vecDouble[i] << endl;
	}	cout << endl;

	reverse(vecDouble.begin(), vecDouble.end());	//从小到大排序
	for (int i = 0; i < vecDouble.size(); i++) {
		cout << vecDouble[i] << endl;
	}	cout << endl;






	/*
	//使用二维数组
	string stu_names[] { "刘备", "关羽", "张飞" };
	string course_names[]{ "语文", "数学", "英语" };
	const int ROW = 3;//sizeof(stu_names) / sizeof(stu_names[0])
	const int COL = 3;
	double scores[ROW][COL];
	for (int i = 0; i < ROW; i++) {//外层循环控制学生
		for (int j = 0; j < COL; j++) {//内层循环控制课程
			cout << stu_names[i] << "的" << course_names[j] << "成绩：";
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
	//实现数组元素的删除和插入
	double power[10];//数组的大小一旦确定了，就不能在更改了！
	int powerCount = 0;//当前数组中的元素个数
	double insertPower;//要插入的攻击力数值
	int insertIndex = 0;//插入数值排序后的下标
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
	cout << "排序后：" << endl;
	for (int i = 0; i < powerCount; i++)
	{
		cout << power[i] << '\t';
	}
	cout << endl;

	//插入
	cout << "请输入要插入的数值：";
	cin >> insertPower;
	if (insertPower < power[powerCount - 1])
	{
		cout << "您输入的数值没有上榜，当前排行榜为：" << endl;
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
	cout << "插入数值后的排行榜：" << endl;
	for (int i = 0; i < powerCount; i++)
	{
		cout << power[i] << '\t';
	}
	cout << endl;
	*/
	









	/*
	//选择排序法
	int nums[]{ 8,4,2,1,23,25,344,12 };
	int numsLen = sizeof(nums) / sizeof(int);	//通过计算得到整形数组的实际长度（不能用于string数组）
	//擂台变量
	int min = nums[0];	//假设最小值是数组的第一个元素
	int minIndex = 0;	//最小值的初始下标设置为0
	int temp;			//临时变量

	for (int i = 0; i < numsLen; i++)
	{
		min = nums[i];
		minIndex = i;
		for (int j = i + 1; j < numsLen; j++) {
			//打擂台
			if (nums[j] < min) {
				min = nums[j];
				minIndex = j;
			}
		}
		//交换
		if (minIndex > i) {
			temp = nums[minIndex];
			nums[minIndex] = nums[i];
			nums[i] = temp;
		}
	}
	cout << "排序后：" << endl;
	for (int i = 0; i < numsLen; i++) {
		cout << nums[i] << endl;
	}

	//逆序后
	for (int i = 0; i < numsLen / 2; i++) {
		temp = nums[numsLen - i - 1];
		nums[numsLen - i - 1] = nums[i];
		nums[i] = temp;
	}
	cout << "逆序后：" << endl;
	for (int i = 0; i < numsLen; i++) {
		cout << nums[i] << endl;
	}
	*/





	/*打印星号图形
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
	//求1-100之间的偶数和
	int sum = 0;
	for (int i = 0; i <= 100; i++)
	{
		if (i % 2 == 1)
			continue;
		sum += i;
	}
	cout << "求1-100之间的偶数和为：" << sum << endl;
	*/


	/*
	double money;
	int count = 0;//计数器，消费总额低于500
	for (int i = 0; i < 5; i++)
	{
		cout << "请输入当前玩家消费总额：";
		cin >> money;
		if (money >= 500)
			continue;
		count++;
	}
	cout << "消费低于500的玩家数量是：" << count << endl;
	*/

	/*
	double PRICE;
	double price;
	int i;
	srand(time(NULL));
	PRICE = rand() % 100;
	cout << "猜价格游戏，范围为0-99" << endl;
	for (i = 0;; i++)
	{
		cout << PRICE << endl;
		cout << "请输入您猜测的价格：";
		cin >> price;
		if (price < PRICE)
			cout << "小于商品价格" << endl;
		if (price > PRICE)
			cout << "大于商品价格" << endl;
		if (price == PRICE)
		{
			if (i == 0)
				cout << "天命之人" << endl;
			if (i == 1 || i == 2)
				cout << "逆天改命" << endl;
			if (i == 3 || i == 4)
				cout << "神机妙算" << endl;
			break;
		}
	}
	*/


	/*
	cout << "1997年7月日历：" << endl;
	cout << "日\t一\t二\t三\t四\t五\t六" << endl;
	const int N = 2;	//1号周几
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
		cout << "请输入第" << i + 1 << "个月的工资：";
		cin >> salary;
		sumSalary += salary;
	}
	avgSalary = sumSalary / YEAR;
	cout << "6个月的平均工资为：" << avgSalary << endl;
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

