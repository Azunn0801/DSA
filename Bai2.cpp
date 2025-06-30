void printDouble(int n){
    int i = 1;
    while (i < n) {
        printf("%d\n", i);
        i *= 2;    //    Mỗi lần lặp i được *2 --> số lần lặp /2 mỗi lần --> độ phức tạp O(logn)
    }
}