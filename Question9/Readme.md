# [Question 9 - Unauthorized Transactions](https://github.com/ZdrzalikPrzemyslaw/2020-Credit-Suisse-Global-Coding-Challenge/blob/master/.github/Global%20Coding%20Challenge_ex_9.pdf)

- It is important that banks recognize unauthorized transactions in order to protect their clients. Leon
has recently started working at a large credit card company where his role is to investigate
fraudulent credit card transactions. He is attempting to sort transactions, depending on their fraud
probability, into separate boxes.
- Let t = 2 mean that Leon has 2 types of transactions and 2 different boxes, both labelled from 0 to
t-1. The current organization of the transactions in each box can be shown using a matrix M (size
t x t). Consider M = [[8, 3], [3, 9]]:

<table>
  <tr>
    <th></th>
    <th>Type 0</th>
    <th>Type 1</th>
  </tr>
  <tr>
    <th>Box 0</th>
    <td>8</td>
    <td>3</td>
  </tr>
  <tr>
    <th>Box 1</th>
    <td>3</td>
    <td>9</td>
  </tr>
</table>


- In this table, we can see in box 0 there are 8 transactions of type 0 and 3 transactions of type 1. In
box 1, there are 3 transactions of type 0 and 9 transactions of type 1. Leon is able to switch, in a
single operation, two transactions in different boxes. He can switch a type 0 transaction from Box 1
with a type 1 transaction from Box 0. As shown below.


<table>
  <tr>
    <th></th>
    <th>Type 0</th>
    <th>Type 1</th>
  </tr>
  <tr>
    <th>Box 0</th>
    <td>9</td>
    <td>2</td>
  </tr>
  <tr>
    <th>Box 1</th>
    <td>2</td>
    <td>10</td>
  </tr>
</table>

- He can continue doing this until he has all transactions of type 0 in box 0 and all transactions of
type 1 in box 1. The sorted boxes are reflected in the Matrix table below. There can be multiple
different ways of sorting the transactions.

<table>
  <tr>
    <th></th>
    <th>Type 0</th>
    <th>Type 1</th>
  </tr>
  <tr>
    <th>Box 0</th>
    <td>11</td>
    <td>0</td>
  </tr>
  <tr>
    <th>Box 1</th>
    <td>0</td>
    <td>12</td>
  </tr>
</table>

- These switching operations need to fulfil the following condition in order for the transactions to be
sorted:
  - Every box has only transactions of the same type. Two transactions of the same type cannot
be located in two different boxes.
- The first line contains an integer n, the number of unsorted problems. Attempt to sort n different
unsorted problems, each in the form of a matrix M.
- Each of the next n sets contains:
  - Integer t represents the number of boxes (rows) and transaction types (columns).
  - The next t lines contains integers, separated using a space, for row M[i].



## Constraints

- A box is a two dimensional array of integers, illustrating the number of transactions of each
type found in each box.
- 1 ≤ n ≤10
- 1 ≤ t ≤ 100.
- 0 ≤ M[box][Transaction type] ≤ 100000

## Input format

- The first line contains an integer n, the number of unsorted problems. Attempt to sort n different
unsorted problems, each in the form of a matrix M.
- Each of the next n sets contains:
  - Integer t represents the number of boxes (rows) and transaction types (columns).
  - The next t lines contains integers, separated using a space, for row M[i].

## Output format

- A string that contains all suspicious User ID(s), sorted in ascending order, separated by , . <br> 
For example:
  
>1,2,3
