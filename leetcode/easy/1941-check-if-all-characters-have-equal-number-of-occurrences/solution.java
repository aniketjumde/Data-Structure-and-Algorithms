class Solution {
    public boolean areOccurrencesEqual(String s) 
    {
        Map<Character,Integer> map=new HashMap<>();

        for(char ch:s.toCharArray())
        {
            map.put(ch,map.getOrDefault(ch,0)+1);
        }

        int expected = map.values().iterator().next();

        for (int count : map.values()) {
            if (count != expected) {
                return false;
            }
        }

        return true;
    }
}