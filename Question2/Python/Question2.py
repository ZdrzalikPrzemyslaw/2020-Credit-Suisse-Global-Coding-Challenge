# You may change this function parameters
def findMaxProfit(numOfPredictedTimes, predictedSharePrices):
    dictionary = {i: j for i, j in enumerate(predictedSharePrices)}
    suma = 0
    i = 0
    while i < numOfPredictedTimes:
        j = i
        while j + 1 < numOfPredictedTimes and dictionary[j + 1] > dictionary[j]:
            j += 1
        suma += dictionary[j] - dictionary[i]
        i = j + 1
    return suma


def main():
    line = input().split()
    numOfPredictedTimes = int(line[0])
    predictedSharePrices = list(map(int, line[1:]))

    answer = findMaxProfit(numOfPredictedTimes, predictedSharePrices)
    # Do not remove below line
    print(answer)
    # Do not print anything after this line


if __name__ == '__main__':
    main()
