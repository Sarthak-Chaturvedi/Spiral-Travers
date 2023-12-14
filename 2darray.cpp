#include<iostream>
using namespace std;
int main(){
int n;
int m;
cin>>n>>m;
int arr[n][m];

for (int i=0;i<n;i++)
{
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
}
cout<<"matrix is :";
for(int i=0; i<n;i++)
{
    for (int j=0;j<m;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<"\n";
}

//**************searching in matrix
// int x;
// cin>>x;
// bool flag=false;
// for(int i=0;i<n;i++)
// {
//     for(int j=0;j<m;j++)
//     {
//         if(arr[i][j]==x){
//             cout<<i<<" "<<j<<"\n";
//             flag = true;
//         }
//     } 
// } 
// //flag in if means is its true then only it willl work
// if(flag) { 
//     cout<<"Elememt is found\n";
// }
// else {
//     cout<<"Elemengt is not found\n";
// }

//**** s matrix
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
