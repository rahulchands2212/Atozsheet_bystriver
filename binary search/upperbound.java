class upperbound {
    public int upperBound(int[] nums, int x) {
        int high = nums.length-1;
        int low = 0;
        int ans = nums.length;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(nums[mid]>x){
                ans = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return ans;
    }

     public void main(String[] args){
        int[] nums = {3, 4, 4, 7, 8, 10};
        int target = 5;
        insertatposition obj = new insertatposition();
        obj.searchInsert(nums, target);
    }
}
