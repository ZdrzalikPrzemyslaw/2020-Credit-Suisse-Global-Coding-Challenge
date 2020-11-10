import java.io.*;
import java.util.*;
import java.util.stream.Stream;

class Solution {

    // You may change this function parameters
    static String findSuspiciousUserId(int numOfQuestions, int[][] questionAndAnswerArrOfArr) {

        int sizeOf = 0;
        for (int[] v : questionAndAnswerArrOfArr) {
            if (v[0] > sizeOf)
                sizeOf = v[0];
        }
        boolean[] suspUsers = new boolean[sizeOf + 1];
        int[] usersIndex = new int[sizeOf + 1];
        for (int i = 0; i < numOfQuestions; i++) {
            usersIndex[questionAndAnswerArrOfArr[i][0]] = i;
        }

        for (int[] i : questionAndAnswerArrOfArr) {
            for (int j : i) {
                if (i[0] != j && (!suspUsers[i[0]])) {
                    if (Arrays.stream(questionAndAnswerArrOfArr[usersIndex[j]]).anyMatch(num -> true)) {
                        suspUsers[i[0]] = true;
                        suspUsers[j] = true;
                    }
                }
            }
        }

        int suspAmount = 0;
        int prev_size = -1;
        while (prev_size < suspAmount) {
            prev_size = suspAmount;
            for (int[] i : questionAndAnswerArrOfArr) {
                if (!suspUsers[i[0]]) {
                    int count = 0;
                    for (int j : i) {
                        if (suspUsers[j]) {
                            count++;
                            if (count == 2) {
                                suspUsers[i[0]] = true;
                                suspAmount++;
                                break;
                            }
                        }
                    }
                }
            }
        }
        StringBuilder stringBuilder = new StringBuilder();
        for (int i = 1; i <= sizeOf; i++) {
            if (suspUsers[i])
                stringBuilder.append(i).append(",");
        }
        stringBuilder.setLength(stringBuilder.length() - 1);
        return stringBuilder.toString();
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        // Sample input:
        // 3
        // 1 2,2 1,3 1 2
        String[] firstLine = scanner.nextLine().split(" ");
        String secondLine = scanner.nextLine();
        scanner.close();

        int numOfQuestions = Integer.parseInt(firstLine[0]);
        String[] questionAndAnswers = secondLine.split(",");
        int[][] questionAndAnswerArrOfArr = parseQuestionAndAnswer(questionAndAnswers);

        String result = findSuspiciousUserId(numOfQuestions, questionAndAnswerArrOfArr);
        // Please do not remove the below line.
        System.out.println(result);
        // Do not print anything after this line
    }

    private static int[][] parseQuestionAndAnswer(String[] questionAndAnswers) {
        return Arrays.stream(questionAndAnswers)
                .map(questionAndAnswer -> {
                    String[] questionAndAnswerArr = questionAndAnswer.split(" ");
                    return Stream.of(questionAndAnswerArr).mapToInt(Integer::parseInt).toArray();
                })
                .toArray(int[][]::new);
    }
}