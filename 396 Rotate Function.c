int maxRotateFunction(int* A, int ASize) {
    int maxVal = 0, sum = 0;
    for (int i = 0; i < ASize; i++) {
        maxVal += A[i] * i;
        sum += A[i];
    }
    int lastVal = maxVal;
    for (int i = ASize - 1; i > 0; i--) {
        lastVal = lastVal + sum - ASize * A[i];
        maxVal = (maxVal < lastVal) ? lastVal : maxVal;
    }
    return maxVal;
}