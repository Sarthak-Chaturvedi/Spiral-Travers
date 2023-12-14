int row_start=0, row_end=n-1, column_start=0, column_end=m-1;
while(row_start<= row_end && column_start<=column_end){

    for(int column= column_start; column<=column_end;column++){
        cout<<arr[row_start][column]<<" ";
    }
    row_start++;
    // last column
    for(int row= row_start; row<=row_end;row++){
        cout<<arr[row][column_end]<<" ";
    }
    column_end--;
    for(int column=column_end;column>=column_start;column--){
        cout<<arr[row_end][column]<<" ";
    }
    row_end--;
    for(int row =row_end;row>=row_start;row--){
    cout<<arr[row][column_start]<<" ";
}
column_start++;
}
return 0;
}