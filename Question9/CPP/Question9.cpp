#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
string organizingContainers(vector<vector<int>> container)
{
    int32_t size_box[container.size()] = {0};
    int32_t transaction_count_type[container.size()] = {0};
    for (int i = 0; i < container.size(); i++)
    {
        for (int j = 0; j < container.size(); j++)
        {
            size_box[j] += container[i][j];
            transaction_count_type[i] += container[i][j];
        }
    }
    
    sort(size_box, size_box + container.size());
    sort(transaction_count_type, transaction_count_type + container.size());

    for (int i = 0; i < container.size(); i++)
    {
        if (size_box[i] != transaction_count_type[i])
            return "Impossible";
    }
    return "Possible";
}

int main()
{
    int q;
    cin >> q;
    string answer = "";
    for (int a0 = 0; a0 < q; a0++)
    {
        int n;
        cin >> n;
        vector<vector<int>> M(n, vector<int>(n));
        for (int M_i = 0; M_i < n; M_i++)
        {
            for (int M_j = 0; M_j < n; M_j++)
            {
                cin >> M[M_i][M_j];
            }
        }

        string result = organizingContainers(M);
        if (answer == "")
            answer = result;
        else
            answer = answer + "," + result;
    }

    // Do not remove below line
    cout << answer << endl;
    // Do not print anything after this line

    return 0;
}