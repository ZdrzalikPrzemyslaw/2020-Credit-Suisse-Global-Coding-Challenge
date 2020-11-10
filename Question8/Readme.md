# [Question 8 -Counting Change](https://github.com/ZdrzalikPrzemyslaw/2020-Credit-Suisse-Global-Coding-Challenge/blob/master/.github/Global%20Coding%20Challenge_ex_8.pdf)

- James has recently started working in a currency exchange office at the airport. As many people
are buying different types of currencies before they go on holiday, he ends up working with various
types of coins. James would like to find all possible ways of making change for a desired amount
using different coins.
- For example, if James has 3 different types of coins, and the value of each is given as 15, 31 and
9, an amount of 63 can be made in two ways: {9, 9, 15, 15, 15} and {9, 9, 9, 9, 9, 9, 9}.
- Create a countNumberOfWays function which returns an integer denoting the number of possible
ways to give change.

## Input format

- The first line:
  - n: an integer, is the desired amount.
  - m: an integer, is the number of different coin types.
- The second line:
  - coins: space-separated distinct integers describing the respective values of each coin.

## Output format

- An integer denoting the number of possible ways to make change for the desired amount.

