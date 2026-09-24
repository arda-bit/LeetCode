int numSum(int x){
    if(x == 0){
        return 0;
    }
    int ans = x%10;
    
    return ans + numSum(x/10);
}


int smallestIndex(int* nums, int numsSize) {
    for(int i=0; i<numsSize; i++){
        if(numSum(nums[i]) == i){
            return i;
        }
    }
    return -1;
}