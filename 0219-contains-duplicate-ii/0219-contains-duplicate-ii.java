class Solution {
    public boolean containsNearbyDuplicate(int[] nums, int k) {
        int start=0;
      
        Set<Integer> s=new HashSet<>();
       for (int end = 0; end < nums.length; end++) {
           if (end-start>k){
            s.remove(nums[start]);
            start++;
        }
       
       
        if (s.contains(nums[end])){
            return true;
        }
        s.add(nums[end]);
     
      

    }
     return false;
}
}