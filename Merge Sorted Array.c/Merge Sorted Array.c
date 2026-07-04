void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    //merge two arrays
    for (int i = 0; i < n; i++) {
        nums1[m + i] = nums2[i];
    }


    //sort array

    int compare(const void* a, const void* b) {
        return (*(int*)a - *(int*)b);
    }


    qsort(nums1, nums1Size, sizeof(int), compare);
}
