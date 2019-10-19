#include <iostream>
using namespace std;

int main() {
	
	int input;
	int numberArray;
	int array [200] = {};
	int start = 0;
	int nilai = 0;
	
	cin >> input;
	for (int i = 0 ; i < input; i++)
	{	
		cin >> array [i];
	}
	
	for (int i = 0 ; i < input ; i++)
	{
		if (start > input-2)
		{
			break;
		}
		else
		{
			
			if (array[start+2] == 0)
			{
				nilai++;
				start += 2;
			}
			
			else if (array [start+2] == 1)
			{
				nilai++;
				start += 1;
			}

		}
	}
	
	cout << nilai;



	return 0;
}

