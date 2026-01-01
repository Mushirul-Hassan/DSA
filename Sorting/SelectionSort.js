function selectionSort(nums) {
    for (let i = 0; i < nums.length - 1; i++) {
        let minIndex = i;

        for (let j = i + 1; j < nums.length; j++) {
            if (nums[j] < nums[minIndex]) {
                minIndex = j;
            }
        }

        let temp = nums[i];
        nums[i] = nums[minIndex];
        nums[minIndex] = temp;
    }
    return nums;
}

let arr = [5, 3, 1, 4];
console.log(selectionSort(arr));
