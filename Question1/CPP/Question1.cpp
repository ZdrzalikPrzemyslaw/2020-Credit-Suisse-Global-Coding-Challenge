#include <bits/stdc++.h>

using namespace std;
void printVector(vector<int> vec);

int findMaxProfit(int numOfPredictedDays, vector<int> predictedSharePrices)
{
    std::vector<int> vec(numOfPredictedDays);
    int x = 0;
    std::iota(vec.begin(), vec.end(), x++);
    sort(vec.begin(), vec.end(), [&](int i, int j) { return predictedSharePrices[i] < predictedSharePrices[j]; });
    int max_value = 0;
    int highestValueInPrices = predictedSharePrices[vec[numOfPredictedDays - 1]];
    int lowest_index = vec.front();
    for (int &i : vec)
    {
        if (highestValueInPrices - predictedSharePrices[i] < max_value)
            break;
        if (i <= lowest_index)
        {
            lowest_index = i;
            for (int j = i; j < numOfPredictedDays; j++)
            {
                int value = predictedSharePrices[j] - predictedSharePrices[i];
                if (value > max_value)
                    max_value = value;
            }
        }
    }
    return max_value;
}

vector<int> splitStringToInt(const string &str, char delim)
{
    vector<int> strings;
    size_t start;
    size_t end = 0;
    while ((start = str.find_first_not_of(delim, end)) != string::npos)
    {
        end = str.find(delim, start);
        strings.push_back(stoi(str.substr(start, end - start)));
    }
    return strings;
}

void printVector(vector<int> vec)
{
    for (vector<int>::const_iterator i = vec.begin(); i != vec.end(); ++i)
    {
        cout << *i << ' ';
    }
    cout << endl;
}

int main()
{
    string firstLine;
    getline(cin, firstLine);

    vector<int> firstLineVec = splitStringToInt(firstLine, ' ');
    int numOfPredictedDays = firstLineVec[0];
    vector<int> predictedSharePrices(firstLineVec.begin() + 1, firstLineVec.end());

    int result = findMaxProfit(numOfPredictedDays, predictedSharePrices);

    // Do not remove this line
    cout << result << "\n";
    // Do not print anything after this line

    return 0;
}