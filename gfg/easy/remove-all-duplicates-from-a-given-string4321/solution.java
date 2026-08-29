class Solution {
    String removeDuplicates(String s) {
        
        Set<Character> set=new LinkedHashSet<>();

         for (char ch : s.toCharArray()) {
            set.add(ch);
        }

        StringBuilder sb=new StringBuilder();
        for(char ch:set)
        {
            sb.append(ch);
        }

        return sb.toString();
    }
}
