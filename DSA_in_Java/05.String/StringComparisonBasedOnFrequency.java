import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;

public class StringComparisonBasedOnFrequency {

    public static String compressString(String s) {

        // Store frequency of each character
        HashMap<Character, Integer> freq = new HashMap<>();

        for (char c : s.toCharArray()) {
            freq.put(c, freq.getOrDefault(c, 0) + 1);
        }

        // Group characters by frequency
        HashMap<Integer, List<Character>> bucket = new HashMap<>();

        for (char c : freq.keySet()) {

            int f = freq.get(c);

            bucket.putIfAbsent(f, new ArrayList<>());

            bucket.get(f).add(c);
        }

        // Sort characters alphabetically
        for (int f : bucket.keySet()) {
            Collections.sort(bucket.get(f));
        }

        // Store frequencies
        List<Integer> freqs = new ArrayList<>(bucket.keySet());

        // Sort frequencies in descending order
        Collections.sort(freqs, Collections.reverseOrder());

        StringBuilder ans = new StringBuilder();

        // Build final compressed string
        for (int f : freqs) {

            ans.append(f).append("(");

            for (char c : bucket.get(f)) {
                ans.append(c);
            }

            ans.append(")");
        }

        return ans.toString();
    }

    public static void main(String[] args) {

        String s = "einsteinenewtonwatt";

        String result = compressString(s);

        System.out.println("Input String      : " + s);
        System.out.println("Compressed String : " + result);
    }
}