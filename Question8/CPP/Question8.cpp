#include <bits/stdc++.h>

using namespace std;
long countNumberOfWays(int amount, vector<int> coins, int numOfCoinTypes)
{
    unsigned long history[amount + 1] = {0};
    history[0] = 1;
    for (auto const &coin : coins)
        for (int j = coin; j <= amount; j++)
            history[j] += history[j - coin];
    return history[amount];
}

vector<string> split(const string &str, char delim)
{
    vector<string> strings;
    size_t start;
    size_t end = 0;
    while ((start = str.find_first_not_of(delim, end)) != string::npos)
    {
        end = str.find(delim, start);
        strings.push_back(str.substr(start, end - start));
    }
    return strings;
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

void printVector(vector<string> vec)
{
    for (vector<string>::const_iterator i = vec.begin(); i != vec.end(); ++i)
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
    int numOfUnits = firstLineVec[0];
    int numOfCoinTypes = firstLineVec[1];

    string coins;
    getline(cin, coins);

    vector<int> coinsVec = splitStringToInt(coins, ' ');

    long result = countNumberOfWays(numOfUnits, coinsVec, numOfCoinTypes);

    // Do not remove below line
    cout << result << "\n";
    // Do not print anything after this line

    return 0;
}
