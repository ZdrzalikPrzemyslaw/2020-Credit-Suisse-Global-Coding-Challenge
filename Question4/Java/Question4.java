import java.io.*;
import java.text.DecimalFormat;
import java.util.*;
import java.util.stream.Stream;

class Solution {

    // You may change this function parameters
    public static double maximumExpectedMoney(int n, int m, double[] p, double[] x, double[] y) {
        List<Double> values = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            double probability = p[i];
            double gain = x[i];
            double loss = y[i];
            double res = ((probability * gain) - ((1 - probability) * loss));
            if (res > 0)
                values.add(res);
        }
        values.sort(Collections.reverseOrder());
        double sum = 0;
        int how_many = 0;
        for (double d : values) {
            sum += d;
            how_many++;
            if (how_many == m)
                return sum;
        }
        sum = Math.round(sum * 100.0) / 100.0;
        return sum;
    }

    public static void main(String[] args) throws IOException {
        Scanner in = new Scanner(System.in);
//        in.useLocale(Locale.ENGLISH);

        int n = in.nextInt();
        int m = in.nextInt();

        double[] p = new double[n];
        double[] x = new double[n];
        double[] y = new double[n];
        double result = 0;

        //get input
        for (int i = 0; i < n; i++)
            p[i] = in.nextDouble();
        for (int i = 0; i < n; i++)
            x[i] = in.nextDouble();
        for (int i = 0; i < n; i++)
            y[i] = in.nextDouble();


        result = maximumExpectedMoney(n, m, p, x, y);
        DecimalFormat df = new DecimalFormat("0.00");
        // Do not remove below line
        System.out.println(df.format(result));
        // Do not print anything after this line

        in.close();
    }
}