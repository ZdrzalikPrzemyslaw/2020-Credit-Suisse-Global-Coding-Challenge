#include <bits/stdc++.h>
using namespace std;
string find_min_days(int profit[], int price[], int day_count, int size)
{
	string return_string = "";
	for (int i = 0; i < size; i++)
	{
		int start = 1;
		int end = INT32_MAX;

		for (int j = 0; j < day_count; j++)
		{
			for (int k = j + 1; k < day_count; k++)
			{

				if (price[k] - price[j] == profit[i] && ((k + 1) <= end))
				{
					end = k + 1;
					start = j + 1;
					break;
				}
				/* code */
			}
		}
		if (end == INT32_MAX)
			return_string += "-1,";
		else
		{

			return_string += std::to_string(start);
			return_string += " ";
			return_string += std::to_string(end);
			return_string += ",";
		}
	}
	return_string = return_string.substr(0, return_string.size() - 1);

	//Participants code will be here
	return return_string;
}

int main()
{
	int n, d, i;
	string answer = "";
	cin >> n >> d;
	int price[n];
	int profit[d];
	for (i = 0; i < n; i++)
		cin >> price[i];
	for (i = 0; i < d; i++)
		cin >> profit[i];
	answer = find_min_days(profit, price, n, d);

	// Do not remove below line
	cout << answer << endl;
	// Do not print anything after this line

	return 0;
}