#include <iostream>

using namespace std;

void main()
{
	int num;
	cout << "Enter number of nodes: ";
	cin >> num;
	int g[10][10];
	
	int ch = 64;
	int ch2 = 64;
	cout << "\nEnter:\n1 if there is an edge.\n0 if there is not an edge.\n\n";
	for (int i = 0; i < num; i++)
	{
		ch2 = 64;
		ch++;
		for (int j = 0; j < num; j++)
		{
			ch2++;
			cout << (char)ch << " => " << (char)ch2 << ": ";
			cin >> g[i][j];
		}
		cout << endl;
	}

	int c = 64;
	int c2 = 64;
	int m = 0;
	int n = 0;
	for (int i = 0; i < num+1; i++)
	{
		for (int j = 0; j < num+1; j++)
		{
			if (i==0 && j==0)
			{
				cout << " \t";
			}
			else if (i == 0)
			{
				c++;
				cout << (char)c << "\t";
			}
			else if (j == 0)
			{
				c2++;
				cout << (char)c2 << "\t";
			}
			else
			{
				m = i - 1;
				n = j - 1;
				cout << g[m][n] << "\t";
			}
		}
		cout << endl;
	}

	cout << endl;
	system("pause");
}