class Solution {
    public static boolean areAnagrams(String s1, String s2) {
        // code here
        if (s1.length() != s2.length()) return false;
        
        HashMap<Character, Integer> mp = new HashMap<>();
        
        for (int i = 0; i <= s1.length() - 1; i++) {
            char ch = s1.charAt(i);
            mp.put(ch, mp.getOrDefault(ch, 0) + 1);
        }
        for (int i = 0; i < s2.length(); i++) {
            char ch = s2.charAt(i);
            if(!mp.containsKey(ch) || mp.get(ch) == 0) {
                return false;
            }
            else {
                mp.put(ch, mp.get(ch) - 1);
            }
        }
        return true;
    }
}