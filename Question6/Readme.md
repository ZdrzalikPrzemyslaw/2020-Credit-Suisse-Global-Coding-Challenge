# [Question 6 - Encrypting Messages](https://github.com/ZdrzalikPrzemyslaw/2020-Credit-Suisse-Global-Coding-Challenge/blob/master/.github/Global%20Coding%20Challenge_ex_6.pdf)

- Data encryption prevents data visibility in the event of its unauthorized access.
- Consider the following encryption algorithm to encipher a given string input. Firstly, discard all
spaces of the string. Then store all the characters within a matrix, according to the constraints
below, to get the encoded string output.


## Constraints

- floor(squareRoot(stringLength)) <= matrixRows <= matrixColumns <=
ceil(squareRoot(stringLength))
- matrixRows x matrixColumns >= stringLength
- Choose the matrix with the smallest area.
- Print out the characters of the first column, then embed a space before printing out the
following column, etc.

## Input format

- A string

## Output format

- An encrypted string