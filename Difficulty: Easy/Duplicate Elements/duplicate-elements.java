class Geeks {
    public static void SortedDuplicates(int arr[], int n) {
        HashMap<Integer, Integer> map = new HashMap<Integer, Integer>();
        ArrayList<Integer> result = new ArrayList<Integer>();
        
        for (int i = 0; i < n; i++) {
            map.put(arr[i], map.getOrDefault(arr[i], 0) + 1);
        }
        
        for (int key : map.keySet()) {
            if (map.get(key) > 1) {
                result.add(key);
            }
        }
        
        if (result.size() == 0) {
            System.out.print("-1");
            return;
        }
        
        Collections.sort(result);
        
        for (int x : result) {
            System.out.print(x + " ");
        }
    }
}
