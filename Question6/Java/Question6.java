import java.io.*;
import java.util.*;
import java.util.stream.Stream;

class Solution {

    static String encrypt(String words) {
        words = words.replaceAll(" ", "");
        int rows = (int) Math.floor(Math.sqrt(words.length()));
        int cols = (int) Math.ceil(Math.sqrt(words.length()));
        if (rows * cols < words.length())
            rows++;
        String[][] str = new String[rows][cols];
        int count = 0;
        StringBuilder stringBuilder = new StringBuilder();
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (j * cols + i < words.length()) {
                    stringBuilder.append(words, j * cols + i, j * cols + i + 1);
                    count++;
                    if (count == words.length()) {
                        break;
                    }
                }
            }
            stringBuilder.append(" ");
        }
//        for (int i = 0; i < cols; i++) {
//            for (int j = 0; j < rows; j++) {
//                if (str[j][i] != null)
//                    stringBuilder.append(str[j][i]);
//            }
//            stringBuilder.append(" ");
//        }
        // Participant's code will go here
        return stringBuilder.toString();
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        String words = scanner.nextLine();
        scanner.close();

        String result = encrypt(words);
        // Please do not remove the below line.
        System.out.println(result);
        // Do nore print anything after this line
    }
}