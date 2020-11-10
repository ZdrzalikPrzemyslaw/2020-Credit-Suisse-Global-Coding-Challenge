# [Question 4 - Risk Trading](https://github.com/ZdrzalikPrzemyslaw/2020-Credit-Suisse-Global-Coding-Challenge/blob/master/.github/Global%20Coding%20Challenge_ex_4.pdf)

## Disclaimer - the solutions provided passed at best 87 tests out of 90

Whenever a company trades securities, there are various risks involved with the trade. Risk
analysis is done for each trade in order to make the maximum profit from that trade. Each available
trade can have the following properties:

- Probability that the trade will make a profit (p).
- Probability that the trade will make a loss (1-p).
- Potential profit of the trade (x).
- Potential loss of the trade (y).

Find and print the maximum expected amount of money the company can make by performing at
most m of the n trades, given the values of m, n, x, y and p.

## Constraints

- 1 ≤ n, m ≤ 100000
- 0 ≤ x, y ≤ 100
- 0 ≤ p ≤ 1
- All x, y and p are floating-point numbers scaled to exactly two decimal places (i.e 2.45
format).

## Input format

- The first line contains two space-separated integers denoting the respective values n (the number
of trades available) and m (the maximum number of trades allowed).
- The second line contains p space-separated floating-point numbers describing the respective
values of p , where each p denotes the probability that the ith transaction will result in a profit.
- The third line contains x space-separated floating-point numbers describing the respective values
of x , where each x denotes the potential profit of the ith transaction.
- The fourth line contains y space-separated floating-point numbers describing the respective values
of y , where each y denotes the potential loss of the ith transaction.

## Output format

- Print the maximum expected amount of money that can be made by performing at most m of the n
available trades. Scale your answer to exactly 2 decimal places.
