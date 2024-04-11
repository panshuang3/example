int Add(int a, int b)
{
	printf("Add successful!\n");
	return a + b;
}

int BinarySearch(int *nums, int length, int target)
{
    int left = 0, right = length - 1, mid = 0;
    while (left <= right) {
        mid = (left + right) / 2;
        if (target > nums [mid]) {
            left = mid + 1;
        } else if (target < nums [mid]) {
            right = mid - 1;
        } else {
            return mid;
        }
    }
    return -1;
}