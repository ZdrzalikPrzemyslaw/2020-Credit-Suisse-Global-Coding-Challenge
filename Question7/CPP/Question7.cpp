#include <bits/stdc++.h>

using namespace std;
string findSuspiciousUserId(int numOfQuestions, vector<vector<int>> questionAndAnswerVecOfVec)
{
    int sizeOf = 0;
    for (auto &v : questionAndAnswerVecOfVec)
    {
        if (v[0] > sizeOf)
            sizeOf = v[0];
    }
    bool suspUsers[sizeOf + 1] = {false};
    int usersIndex[sizeOf + 1];

    for (int i = 0; i < numOfQuestions; i++)
    {
        usersIndex[questionAndAnswerVecOfVec[i][0]] = i;
    }

    for (auto const &i : questionAndAnswerVecOfVec)
    {
        for (auto const &j : i)
        {
            if (i[0] != j && (!suspUsers[i[0]]))
            {
                auto vec = questionAndAnswerVecOfVec[usersIndex[j]];
                if (std::find(vec.begin(), vec.end(), i[0]) != vec.end())
                {
                    suspUsers[i[0]] = true;
                    suspUsers[j] = true;
                }
            }
        }
    }

    int suspAmount = 0;

    int prev_size = -1;
    while (prev_size < suspAmount)
    {
        prev_size = suspAmount;
        for (auto &i : questionAndAnswerVecOfVec)
        {
            if (!suspUsers[i[0]])
            {
                int count = 0;
                for (auto &j : i)
                {
                    if (suspUsers[j])
                    {
                        count++;
                        if (count == 2)
                        {
                            suspUsers[i[0]] = true;
                            suspAmount++;
                            break;
                        }
                    }
                }
            }
        }
    }

    string retStr = "";
    for (int i = 1; i < sizeOf + 1; i++)
    {
        if (suspUsers[i])
        {
            retStr += std::to_string(i);
            retStr += ",";
        }
    }
    retStr = retStr.substr(0, retStr.length() - 1);

    // Participant's code will go here
    return retStr;
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

    int numOfQuestions = strtol(firstLine.c_str(), NULL, 10);
    ;

    string questionAndAnswerStr;
    getline(cin, questionAndAnswerStr);

    vector<vector<int>> questionAndAnswerVecOfVec;
    vector<string> questionAndAnswerVecByComma = split(questionAndAnswerStr, ',');

    for (vector<string>::const_iterator i = questionAndAnswerVecByComma.begin(); i != questionAndAnswerVecByComma.end(); ++i)
    {
        vector<int> bankerPreferenceVecByAnd = splitStringToInt(*i, ' ');
        questionAndAnswerVecOfVec.push_back(bankerPreferenceVecByAnd);
    }

    string result = findSuspiciousUserId(numOfQuestions, questionAndAnswerVecOfVec);

    // Do not remove below line
    cout << result << "\n";
    // Do not print anything after this line

    return 0;
}