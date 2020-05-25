#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int main()
{

	string line;
	string sorting;
	ifstream in("D:\\sort.txt");
	if (in.is_open())
	{
		while (getline(in, line))
		{
			cout << line<<endl;
			sorting = line;
		}
		for (int i = 0; i < sorting.length(); i++)
		{
			for (int j = sorting.length() - 1; j > i; j--)
			{
				if (sorting[j] <= sorting[j - 1])
				{
					swap(sorting[j - 1], sorting[j]);
				}
			}
		}
		cout << sorting << endl;
		
	}
	in.close();
	ofstream out;
	out.open("D:\\sort.txt");
	if (out.is_open())
	{
		out << sorting;
	}
	out.close();
	return 0;
}