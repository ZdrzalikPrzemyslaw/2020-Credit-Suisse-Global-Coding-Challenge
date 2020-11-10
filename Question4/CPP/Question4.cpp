#include <bits/stdc++.h>
using namespace std;
long double maximumExpectedMoney(int n, int m, double p[], double x[], double y[])
{
    std::vector<double> values;
    for (int i = 0; i < n; i++)
    {
        double chance = p[i];
        double poss_gain = x[i];
        double poss_loss = y[i];
        double result = ((chance * poss_gain) - ((1 - chance) * poss_loss));
        if (result > 0)
            values.push_back(result);
    }
    std::sort(values.begin(), values.end(), std::greater<double>());
    long double sum = 0;
    int count = 0;
    for (auto &i : values)
    {
        count++;
        sum += i;
        if (count == m)
            break;
    }
    return sum;
}

int main()
{
    int n, m;

    cin >> n >> m;
    double p[n], x[n], y[n];

    for (int i = 0; i < n; i++)
        cin >> p[i];
    for (int i = 0; i < n; i++)
        cin >> x[i];
    for (int i = 0; i < n; i++)
        cin >> y[i];

    long double result = maximumExpectedMoney(n, m, p, x, y);
    result = std::round(result * 100) / 100;
    cout << std::fixed;
    cout << std::setprecision(2);

    // Do not remove below line
    cout << result << endl;
    // Do not print anything after this line

    return 0;
}