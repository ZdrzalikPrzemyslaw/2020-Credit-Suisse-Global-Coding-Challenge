import math


# You may change this function parameters
def encrypt(words):
    words.replace(" ", "")
    sqrt = math.sqrt(len(words))
    rows = int(math.floor(sqrt))
    cols = int(math.ceil(sqrt))
    if rows * cols < len(words):
        rows += 1
    return_string = []
    for i in range(0, rows * cols):
        val = ((i % rows) * cols) + (int(i / rows))
        if val < len(words):
            return_string.append(words[val])
        if (i + 1) % rows == 0:
            return_string.append(" ")

    # Participants code will be here
    return "".join(return_string)


def main():
    words = input()

    answer = encrypt(words)

    # Please do not remove the below line.
    print(answer)
    # Do not print anything after this line


if __name__ == '__main__':
    main()
