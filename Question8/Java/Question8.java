import java.io.*;
import java.util.*;
import java.util.stream.Stream;

class Solution {

    // You may change this function parameters
    static long countNumberOfWays(int amount, int[] coins) {
        long[] history = new long[amount + 1];
        Arrays.fill(history, 0);
        history[0] = 1;
        for (int coin : coins)
            for (int j = coin; j <= amount; j++)
                history[j] += history[j - coin];
        return history[amount];
    }


    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        String[] firstLine = scanner.nextLine().split(" ");
        String[] secondLine = scanner.nextLine().split(" ");
        scanner.close();

        int numOfUnits = Integer.parseInt(firstLine[0]);
        int numOfCoinTypes = Integer.parseInt(firstLine[1]);
        int[] coins = Stream.of(secondLine).mapToInt(Integer::parseInt).toArray();

        long result = countNumberOfWays(numOfUnits, coins);
        // Please do not remove the below line.
        System.out.println(result);
        // Do not print anything after this line
    }
}
