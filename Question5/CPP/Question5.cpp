#include <bits/stdc++.h>

using namespace std;
int calculateMinimumSession(int numOfBankers, int numOfParticipants, vector<vector<int>> bankersPreferences, vector<vector<int>> participantsPreferences)
{

    int participantVisitsCount[numOfParticipants] = {0};
    int bankersVisitsCount[numOfBankers] = {0};
    int max = 0;

    for (int i = 0; i < numOfBankers; i++)
    {
        for (auto const &j : bankersPreferences[i])
        {
            participantVisitsCount[j - 1]++;
            bool has_met = false;
            for (auto const & k : participantsPreferences[j - 1])
            {
                if (i == (k - 1))
                {
                    has_met = true;
                    break;
                }
            }
            if (!has_met)
                bankersVisitsCount[i]++;
        }
    }
    for (int i = 0; i < numOfParticipants; i++)
    {
        for (auto const &j : participantsPreferences[i])
        {
            bankersVisitsCount[j - 1]++;
            bool has_met = false;
            for (int k : bankersPreferences[j - 1])
            {
                if (i == (k - 1))
                {
                    has_met = true;
                    break;
                }
            }
            if (!has_met)
                participantVisitsCount[i]++;
        }
    }

    for (auto const &i : participantVisitsCount)
    {
        if (max < i)
            max = i;
    }
    for (auto const &i : bankersVisitsCount)
    {
        if (max < i)
            max = i;
    }

    return max;
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
    int numOfBankers, numOfParticipants;
    vector<vector<int>> bankersPreferences, participantsPreferences;

    cin >> numOfBankers;

    string bankersPreferencesStr;
    cin >> bankersPreferencesStr;
    vector<string> bankersPreferencesVecByComma = split(bankersPreferencesStr, ',');

    for (vector<string>::const_iterator i = bankersPreferencesVecByComma.begin(); i != bankersPreferencesVecByComma.end(); ++i)
    {
        vector<int> bankerPreferenceVecByAnd = splitStringToInt(*i, '&');
        bankersPreferences.push_back(bankerPreferenceVecByAnd);
    }

    string participantsPreferencesStr;
    cin >> numOfParticipants;
    cin >> participantsPreferencesStr;
    vector<string> participantsPreferencesVecByComma = split(participantsPreferencesStr, ',');

    for (vector<string>::const_iterator i = participantsPreferencesVecByComma.begin(); i != participantsPreferencesVecByComma.end(); ++i)
    {
        vector<int> participantPreferenceVecByAnd = splitStringToInt(*i, '&');
        participantsPreferences.push_back(participantPreferenceVecByAnd);
    }

    int result = calculateMinimumSession(numOfBankers, numOfParticipants, bankersPreferences, participantsPreferences);

    // Do not remove below line
    cout << result << "\n";
    // Do not print anything after this line

    return 0;
}