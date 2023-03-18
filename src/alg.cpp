// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    if (size > 0) {
        int middleIndex = size / 2;
        if (value == arr[middleIndex]) {
            int count = 0;
            int border = middleIndex - 1;
            while (value == arr[middleIndex]) {
                count++;
                middleIndex++;
            }
            while (value == arr[border]) {
                count++;
                border--;
            }
            return count;
        } else if (value < arr[middleIndex]) {
            cbinsearch(arr, middleIndex, value);
        } else {
            cbinsearch(arr + middleIndex + 1, size - middleIndex - 1, value);
        }
    } else {
        return 0;
    }
}
