# [Question 5 - Perfect Matching](https://github.com/ZdrzalikPrzemyslaw/2020-Credit-Suisse-Global-Coding-Challenge/blob/master/.github/Global%20Coding%20Challenge_ex_5.pdf)

- Credit Suisse organizes a private banking career information session for its potential future private
bankers and currently employed private bankers. There are n private bankers and m participants.
- Assume for each participant, they want to meet a number of private bankers and similarly, for each
private banker they want to recruit a number of participants. However, only one-on-one meetings
are possible. So for each session, one participant can only meet one banker.
- If Credit Suisse has a list of preferences from participants and private bankers, how many sessions
are needed in order to fulfil everyone's preferences?

## Constraints

- Every banker and participant must have at least one preference.

## Input format

- The first line relates to the private bankers, and the second line relates to the participants.
- The first integer in each line is the number of bankers/participants.
- The subsequent integer input is the preference of bankers/participants, the preference of each
person is separated by , . <br>For example:
> 2 1&2,2 <br>
> 2 1,2

- The first line of input means that there are two private bankers. The preference of banker 1 is to
meet participants 1 & 2, and the preference of banker 2 is to meet participant 2 only.
- The second line of input means that there are two participants. The preference of participant 1 is to
meet banker 1 only, and the preference of participant 2 is to meet banker 2 only.

## Output format

- An integer that is the minimum number of sessions required to fulfil everyone's preferences.
