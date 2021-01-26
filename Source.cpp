//Mohamed Ahmed ElSayed ElSayed
//Section 11
//Link to a clear photo of the source code and exe file: https://drive.google.com/drive/folders/1zLLMY_vfiByJN9yXg5vK4_KsE_5BYbZZ?usp=sharing
#include <iostream>
using namespace std;
int main()
{
	int grades, GradesNumber = 0, sum = 0;
	char out;
	for (;;)
	{
		cout << "\nTo input grades press (y) to end press (n): ";
		cin >> out;
		if (out == 'n' || out == 'N')     //Break Condition.
			break;
		cout << "\nEnter quiz grades: ";
		cin >> grades;
		while (grades < 0 || grades > 100) //Input Validation
		{
			cout << "\nEnter quiz grades between 0 and 100: ";
			cin >> grades;
		}
		GradesNumber++;
		sum += grades;
	}
	cout << "\nThe number of grades is: " << GradesNumber;
	cout << "\nThe sum of grades is: " << sum;
	cout << "\nThe average of grades is: " << sum / GradesNumber << endl;
	system("pause");
	return 0;
}
