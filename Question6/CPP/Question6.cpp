#include <bits/stdc++.h>

using namespace std;

string encrypt(string words)
{
    words.erase(std::remove(words.begin(), words.end(), ' '), words.end());
    double esquerte = sqrt(words.length());
    int rows = floor(esquerte);
    int cols = ceil(esquerte);
    if (rows * cols < words.length())
        rows++;
    string return_string = "";

    for (int i = 0; i < rows * cols; i++)
    {
        int iprzecols = i / rows;
        int val = (i % rows) * cols + iprzecols;
        if (val < words.length())
            return_string += words[val];
        if ((i + 1) % rows == 0)
            return_string += " ";
    }

    return return_string;
}

int main()
{
    string words;
    getline(cin, words);

    string result = encrypt(words);

    // Do not remove below line
    cout << result << "\n";
    // Do not print anything after this line

    return 0;
}