int a[n];
for(int i = 0 ; i < n; i++){
    for(int j = 0; j < n; j++){
        if(a[j] < a[j+1]){
            int temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
        }
    }
}
//do phuc tap thoi gian la On^2
//do phuc tap khong gian la On