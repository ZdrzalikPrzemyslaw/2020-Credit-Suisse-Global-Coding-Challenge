# [Question 7 - Q&A community](https://github.com/ZdrzalikPrzemyslaw/2020-Credit-Suisse-Global-Coding-Challenge/blob/master/.github/Global%20Coding%20Challenge_ex_7.pdf)

- There is a Q&A community where users can raise questions and answer questions raised by
others, to earn credits. However, there are some users within the community who are suspected to
have cheated, therefore, they require validation.
- The following cases are treated as suspicious
  - User A answers User B's question and User B answers User A's question
  - If two or more users, which are considered suspicious, answer user C's question then user C is also considered suspicious.
- Find the suspicious users.

## Constraints

- Every user can only ask a maximum of one question.
- Not every user needs to ask or answer a question, at least 2 users do.
- A user can answer questions without asking a question.
- A user cannot answer their own question.
- 1 < userId < 10000
- 1 < Number of questions < 10000

## Input format

- The first line contains only one integer, which is the number of questions answered in the
community.
- The second line contains integers which refer to questions. The first integer is the questioner's ID
and the subsequent integer(s) is the answerer's ID(s). Each question detail is separated by , . <br>
For example:

>3 <br>
>1 2,2 1,3 1 2

- There are three questions answered in the community. User 1's question is answered by User 2.
User 2's question is answered by User 1. User 3's question is answered by Users 1 & 2.


## Output format

- A string that contains all suspicious User ID(s), sorted in ascending order, separated by , . <br> 
For example:
  
>1,2,3
