#include <iostream>
using namespace std;

int main(){
    int r, c, a[100][100], b[100][100],mul[100][100] ,i ,j ;
    cout<<"enter the number of row: (between 1 to 100)"<<endl;
    cin>>r;
    cout<<"enter the number of column: (between 1 to 100)"<<endl;
    cin>>c; 
    cout <<"enter element of first matrix:"<<endl;
    for(i=0; i < r ; ++i)
        for(j=0 ;j < c ; ++j)
        {
            cout <<"enter element of a"<<i + 1 <<j +1 <<":";
            cin>>a[i][j];
        }
    for(i=0; i < r ; ++i)
        for(j=0 ;j < c ; ++j)
        {
            cout <<"enter element of b"<<i + 1 <<j +1 <<":";
            cin>>b[i][j];
        }
    for(i=0; i < r ; ++i)
        for(j=0 ;j < c ; ++j)
        
            mul[i][j]=a[i][j]*b[i][j];
        
        cout <<endl<<"multiplication of two matrix is:"<<endl;
        
    for(i=0; i < r ; ++i)
        for(j=0 ;j < c ; ++j)
        {
            cout<< mul[i][j]<<" ";
            if(j==c - 1)
            cout <<endl;
        }

    return 0;
}