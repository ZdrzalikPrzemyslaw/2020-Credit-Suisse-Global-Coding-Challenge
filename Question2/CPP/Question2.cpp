#include <bits/stdc++.h>

using namespace std;

int findMaxProfit(int numOfPredictedTimes, vector<int> predictedSharePrices) {
    int sum = 0;
        for (int i = 0; i < numOfPredictedTimes; ) {
            int j = i;

            while (j + 1 < numOfPredictedTimes && predictedSharePrices[j + 1] > predictedSharePrices[j]) {
                j++;
            }
            sum += predictedSharePrices[j] - predictedSharePrices[i];
            i = j + 1;
        }
    return sum;
}

vector<int> splitStringToInt(const string& str, char delim) {
    vector<int> strings;
    size_t start;
    size_t end = 0;
    while ((start = str.find_first_not_of(delim, end)) != string::npos) {
        end = str.find(delim, start);
        strings.push_back(stoi(str.substr(start, end - start)));
    }
    return strings;
}

void printVector(vector<int> vec) {
    for (vector<int>::const_iterator i = vec.begin(); i != vec.end(); ++i) {
        cout << *i << ' ';
    }
    cout << endl;
}

int main() {
    string firstLine;
    getline(cin, firstLine);

    vector<int> firstLineVec = splitStringToInt(firstLine, ' ');
    int numOfPredictedTimes = firstLineVec[0];
    vector<int> predictedSharePrices(firstLineVec.begin()+1, firstLineVec.end());


    int result = findMaxProfit(numOfPredictedTimes, predictedSharePrices);

    // Do not remove below line
    cout << result << "\n";
    // Do not print anything after this line`

    return 0;
}