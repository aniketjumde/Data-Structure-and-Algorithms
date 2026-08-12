public class MaximumAverageOfWeight {

    public static double MaximumAverage(int S[], int W[]) {

        long sumS;
        long sumW;
        double maxAvg = 0;

        for (int i = 0; i < S.length; i++) {

            sumS = 0;
            sumW = 0;

            for (int j = i; j < S.length; j++) {

                sumS += (long) S[j] * W[j];
                sumW += W[j];

                // Consider subarrays of length at least 2
                if (j - i + 1 >= 2) {

                    double avg = (double) sumS / sumW;

                    maxAvg = Math.max(maxAvg, avg);
                }
            }
        }

        return Math.round(maxAvg * 100.0) / 100.0;
    }

    public static void main(String[] args) {

        int[] S = {80, 90, 70, 100};
        int[] W = {1, 2, 1, 3};

        double result = MaximumAverage(S, W);

        System.out.println("Scores  : ");
        for (int score : S) {
            System.out.print(score + " ");
        }

        System.out.println("\nWeights : ");
        for (int weight : W) {
            System.out.print(weight + " ");
        }

        System.out.println("\n\nMaximum Weighted Average = " + result);
    }
}