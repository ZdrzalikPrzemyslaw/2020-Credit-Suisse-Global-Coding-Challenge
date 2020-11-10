# Participants may update the following function parameters

def maximumExpectedMoney(noOfTradesAvailable, maximumTradesAllowed, p, x, y):
    values_list = []
    for p1, x1, y1 in zip(p, x, y):
        gain = p1 * x1
        loss = (1 - p1) * y1
        val = gain - loss
        if val >= 0:
            values_list.append(val)
    values_list.sort(reverse=True)
    suma = 0
    for i, e in enumerate(values_list):
        suma += e
        if (i + 1) == maximumTradesAllowed:
            break
    return suma


def main():
    # This part may require participants to fill +in as well.
    noOfTradesAvailable, maximumTradesAllowed = list(map(int, input().split()))
    p = list(map(float, input().split()))
    x = list(map(float, input().split()))
    y = list(map(float, input().split()))
    # Participants may update the following function parameters
    answer = maximumExpectedMoney(noOfTradesAvailable, maximumTradesAllowed, p, x, y)
    # Do not remove below line
    string = '{0:.2f}'.format(answer)
    print(string)
    # Do not print anything after this line


if __name__ == '__main__':
    main()
