#include <iostream>

using namespace std;

class Solution
{
public:
	// ����n�Ľ׳�
	unsigned int Factorial(unsigned int n)
	{
		if (0 == n)
		{
			return 0;
		}
		else if (1 == n) 
		{
			return 1;
		}
		else
		{
			return n*Factorial(n-1);
		}
	}
	// �׳�β��0�ĸ��� ����5���Ӹ���
	int Trailing1(long long n)
	{
	    long num = 0;
		while(n)
		{
			n = n/5;
			num += n;		
		}
		return num;
	}

// 	int Trailing2(long long n)
// 	{
// 		long num = 0;
// 		int i,j;
// 		for (i = 0;i <= n;i = i+5)
// 		{
// 			j=i;
// 			while(0 == j%5 && j > 0)
// 			{
// 				num ++;
// 				j = j/5;
// 			}
// 		}
// 		return num;
// 	}


};