int* mallocArray(int n) {
    int* arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        arr[i] = i;
    }
    return arr;
}    //    Cấp phát mảng tăng theo n --> độ phức tạp là O(n)