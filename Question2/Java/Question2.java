import java.io.*;
import java.lang.reflect.Array;
import java.util.*;
import java.util.stream.Stream;

class Solution {

    // You may change this function parameters
    static int findMaxProfit(int numOfPredictedDays, int[] predictedSharePrices) {
        int sum = 0;
        for (int i = 0; i < numOfPredictedDays; ) {
            int j = i;

            int x = i + 1;
            while (x < numOfPredictedDays && predictedSharePrices[x] > predictedSharePrices[j]) {
                x++;
                j++;
            }
            sum += predictedSharePrices[j] - predictedSharePrices[i];
            i = x;
        }
        return sum;
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        String[] firstLine = scanner.nextLine().split(" ");
        int[] firstLineArr = Stream.of(firstLine).mapToInt(Integer::parseInt).toArray();
        int numOfPredictedTimes = firstLineArr[0];
        int[] predictedSharePrices = Arrays.copyOfRange(firstLineArr, 1, firstLineArr.length);
        scanner.close();

        int result = findMaxProfit(numOfPredictedTimes, predictedSharePrices);
        // Please do not remove the below line.
        System.out.println(result);
        // Do not print anything after this line
    }
}
