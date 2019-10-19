#include <iostream>
using namespace std;

int main() {
	
	int input;
	int numberArray;
	int array [200] = {};
	int start = 0;
	int score = 0;
	
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
				score++;
				start += 2;
			}
			
			else if (array [start+2] == 1)
			{
				score++;
				start += 1;
			}

		}
	}
	
	cout << score;



	return 0;
}

