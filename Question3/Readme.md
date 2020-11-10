# [Question 3 - Profit Model for John](https://github.com/ZdrzalikPrzemyslaw/2020-Credit-Suisse-Global-Coding-Challenge/blob/master/.github/Global%20Coding%20Challenge_ex_3.pdf)

John has recently started stock trading. He has predicted share prices for a particular company,
over the next N days. John wants to analyze this data to build a model which will predict the best
day to buy and sell the shares to achieve a specific profit. If there are multiple approaches of
buying and selling shares to achieve this profit, John would like to know which of these will achieve
the profit the earliest.

## Constraints

- Only 1 share can be bought.
- Short selling is not allowed.
- 1 ≤ N ≤ 100000
- 1 ≤ D ≤ 10
- 1 ≤ N , D ≤ 1000000

## Input format

- The first line contains two integers N and D, where N is the number of days for which he is
predicting the share values and D is the number of different profits he would like to achieve.
- The next line contains N space separated integers, where N is the value of the share on the i+1th
day.
- The next D lines contain a single integer D , where D is the profit that needs to be made.

## Output format

- Print in the same line two space separated integers - the day on which the share was bought and
the day on which the share was sold. The buy and sell days for different profits should be
separated by , . If it is not possible to achieve the desirable profit, print -1.
