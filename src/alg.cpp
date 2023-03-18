// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    int startIndex = 0;
    int endIndex = size - 1;

    while (startIndex <= endIndex) {
        int middleIndex = startIndex + (endIndex - startIndex) / 2;
        if (value == arr[middleIndex]) {
            int count = 0;
            int border = middleIndex - 1;
            while (value == arr[middleIndex]) {
                middleIndex++;
                count++;
            }
            while (value == arr[border]) {
                border--;
                count++;
            }
            return count;
        } else if (value < arr[middleIndex]) {
            endIndex = middleIndex - 1;
        } else {
            startIndex = middleIndex + 1;
        }
    }
    return 0;
}
