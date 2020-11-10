# Participants may update the following function parameters
def countNumberOfWays(numOfUnits, coins):
    history = [0] * (numOfUnits + 1)
    history[0] = 1
    for coin in range(len(coins)):
        for j in range(coins[coin], numOfUnits + 1):
            history[j] += history[j - coins[coin]]
    return history[numOfUnits]


def main():
    firstLine = input().split(" ")
    secondLine = input().split(" ")

    numOfUnits = int(firstLine[0])
    numOfCoinTypes = int(firstLine[1])
    coins = list(map(int, secondLine))

    # Participants may update the following function parameters
    answer = countNumberOfWays(numOfUnits, coins)

    # Please do not remove the below line.
    print(answer)
    # Do not print anything after this line


if __name__ == '__main__':
    main()
