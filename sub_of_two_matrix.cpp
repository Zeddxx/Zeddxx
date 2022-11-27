#include <iostream>
using namespace std;

int main(){
    int r,c,a[100][100],b[100][100],sub[100][100],i,j;
    cout <<"Enter the row of matrix :"<<endl;
    cin>>r;
    cout<<"Enter the column of matrix :"<<endl;
    cin>>c;

    cout<<"Enter the element of first matrix :"<<endl;
    for(i=0 ;i<r;++i)
        for(j=0;j<c;++j){
            cout<<"Enter the element of a"<<i+1<<j+1<<":";
            cin>>a[i][j];
        }
    for(i=0;i<r;++i)
        for(j=0;j<c;++j){
            cout<<"Enter the element of b"<<i+1<<j+1<<":";
            cin>>b[i][j];
        }
    for(i=0;i<r;++i)
        for(j=0;j<c;++j)
            sub[i][j]=a[i][j]-b[i][j];
            cout<<endl<<"Subtraction of two matrix is:"<<endl;

    for(i=0;i<r;++i)
        for(j=0;j<c;++j)
        {
            cout<< sub[i][j]<<" ";
            if(j==c-1)
            cout<<endl;
                }        
    return 0;
}