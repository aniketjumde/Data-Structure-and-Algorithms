class Solution {
    public List<String> splitWordsBySeparator(List<String> words, char separator) {
        
        List<String> ans = new ArrayList<>();

        for(String word : words)
        {
            int start=0;
            for(int i=0;i<word.length();i++)
            {
                if(word.charAt(i)==separator)
                {
                    if (start < i) {
                        ans.add(word.substring(start,i));
                    }
                    start=i+1;
                }

               
            }

            if (start < word.length()) {
                ans.add(word.substring(start));
            }


        }

        return ans;
    }
}