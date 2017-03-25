#include<iostream>
#include<string>
using namespace std;

int main()
{
	cout<<"Enter a number: ";
	int num;
	cin >> num;
	int nums[7] = { 1,5,10,50,100,500,1000 };
	string romans[7] = { "I","V","X","L","C","D","M" };

	string rom = "";
	if (num >= 1000)
	{
		int n = num / 1000;

		for (int i = 0;i<n;i++)
			rom += romans[6];

		num = num % 1000;
	}

	if (num >= 500)
	{
		if (num >= 900)
			rom += "CM";
		else {
			rom += romans[5];
			num = num - 500;
			if (num>99)
			{
				int n = num / 100;

				for (int i = 0;i<n;i++)
					rom += romans[4];


			}
		}
		num = num % 100;
	}

	if (num >= 100)
	{
		if (num >= 400 && num<900)
			rom += "CD";
		else {
			int n = num / 100;

			for (int i = 0;i<n;i++)
				rom += romans[4];
		}
		num = num % 100;
		//cout << num<<10;

	}

	if (num >= 50 && num<90)
	{
		rom += romans[3];
		num = num - 50;
		if (num>9)
		{
			int n = num / 10;

			for (int i = 0;i<n;i++)
				rom += romans[2];

			num = num % 10;
		}
	}

	if (num>10)
	{
		if (num >= 90)
			rom += "XC";

		else if (num >= 40 && num<90)
			rom += "XL";
		else {
			int n = num / 10;
			//cout << n;

			for (int i = 0;i<n;i++)
				rom += romans[2];
		}
		num = num % 10;
		//cout << num;

	}

	if (num == 10)
		rom += romans[2];

	if (num == 9)
		rom += "IX";

	if (num == 8)
		rom += "VIII";

	if (num == 7)
		rom += "VII";

	if (num == 6)
		rom += "VI";

	if (num == 5)
		rom += "V";

	if (num == 4)
		rom += "IV";

	if (num == 3)
		rom += "III";

	if (num == 2)
		rom += "II";

	if (num == 1)
		rom += "I";

	
	cout << "\nRoman value of the num is: "<<rom<<endl;
	system("pause");
	return 0;
}