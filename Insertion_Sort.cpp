void insertionSort(int a[], int n){
    for (int j = 1; j <= n - 1; j++){
        int i = 1;
        while(a[j] > a[i]){
            i++;
        }
        int m = a[j];
        for (int k = 0; k <= j - i - 1; k++){
            a[j - k] = a[j - k - 1];
        }
        a[i] = m;
    }
}

