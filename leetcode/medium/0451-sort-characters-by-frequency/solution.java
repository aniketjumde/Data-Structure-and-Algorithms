class Solution {
    public String frequencySort(String s) 
    {
        HashMap<Character,Integer> map=new HashMap<>();

        for(Character ch:s.toCharArray())
        {
            map.put(ch,map.getOrDefault(ch,0)+1);
        }

       List<Character> chars = new ArrayList<>(map.keySet());

        chars.sort((a, b) -> map.get(b) - map.get(a));

        StringBuilder sb = new StringBuilder();

        for (char ch : chars) {

            int frequency = map.get(ch);

            for (int i = 0; i < frequency; i++) {
                sb.append(ch);
            }
        }

        return sb.toString();
    }
}