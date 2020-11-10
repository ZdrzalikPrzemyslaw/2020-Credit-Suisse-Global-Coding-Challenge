# You may change this function parameters
def findMaxProfit(predictedSharePrices):
    # Participants code will be here
    maks = predictedSharePrices[1] - predictedSharePrices[0]
    minimum = predictedSharePrices[0]

    for i in predictedSharePrices:
        if i < minimum:
            minimum = i
        elif i - minimum > maks:
            maks = i - minimum


    return maks


def main():
    line = input().split()
    numOfPredictedDay = int(line[0])
    predictedSharePrices = list(map(int, line[1:]))

    answer = findMaxProfit(predictedSharePrices)

    # Please do not remove the below line.
    print(answer)
    # Do not print anything after this line


if __name__ == '__main__':
    main()
