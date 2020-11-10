# Participants may update the following function parameters
def findSuspiciousUserId(numOfQuestions, questionAndAnswerListOfList):
    size_of = 0
    my_dict = {}

    for i in questionAndAnswerListOfList:
        if i[0] > size_of:
            size_of = i[0]
        my_dict[i[0]] = i[1:]

    usersIndex = {}
    for i in range(numOfQuestions):
        usersIndex[questionAndAnswerListOfList[i][0]] = i

    suspUsers = set()

    for i, k in my_dict.items():
        for j in k:
            if i != j and i not in suspUsers:
                if i in my_dict[j]:
                    suspUsers.add(i)
                    suspUsers.add(j)

    prev_size = -1
    while prev_size < len(suspUsers):
        prev_size = len(suspUsers)
        for i, k in my_dict.items():
            if i not in suspUsers:
                count = 0
                for j in k:
                    if j in suspUsers:
                        count += 1
                        if count == 2:
                            suspUsers.add(i)
                            break

    ret_str = []
    for i in range(size_of + 1):
        if i in suspUsers:
            ret_str.append(i.__str__())
            ret_str.append(',')
    ret_str = ret_str[:-1]

    # Participants code will be here
    return "".join(ret_str)


def main():
    firstLine = input().split(" ")
    secondLine = input()

    # Sample input:
    # 3
    # 1 2,2 1,3 1 2

    numOfQuestions = int(firstLine[0])
    questionAndAnswers = secondLine.split(",")
    questionAndAnswerListOfList = parseQuestionAndAnswer(questionAndAnswers)

    # Participants may update the following function parameters
    answer = findSuspiciousUserId(numOfQuestions, questionAndAnswerListOfList)

    # Please do not remove the below line.
    print(answer)
    # Do not print anything after this line


def parseQuestionAndAnswer(questionAndAnswers):
    questionAndAnswerListOfList = []
    for index in range(0, len(questionAndAnswers)):
        questionAndAnswerList = questionAndAnswers[index].split(" ")
        questionAndAnswerListOfList.append([int(x) for x in questionAndAnswerList])
    return questionAndAnswerListOfList


if __name__ == '__main__':
    main()
