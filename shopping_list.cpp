#include <iostream>
using namespace std;
const int m=50;     //Giving constant variable to m=50..!! Here m is the size of an array....
class items     //declaring class..!!
{
    int item_code[m];  //declaring first variable itemcode of size m
    float item_price[m];    //item-price of array size m
    int count;  //new integer variable count

    public:
        void CNT(void){count=0;}    //Starting value count to zero..!!
        void getitem(void);         //functions declaring...!!
        void displaysum(void);
        void remove(void);
        void displayitems(void);
};
void items::getitem(void)       //defining functions..!!
{
    cout<<"Enter item code:"<<endl;
    cin>>item_code[count];
    cout<<"Enter item price:"<<endl;
    cin>>item_price[count];
    count++;
}

void items::displaysum(void)
{
    float sum=0;
    for(int i=0;i<count;i++)
    sum+=item_price[i];
    cout<<endl<<"Total Value :"<<endl<<sum<<endl;
}

void items::remove(void){
    int a;
    cout<<"Enter item code to remove from list:"<<endl;
    cin>>a;
    for (int i=0;i<count;i++)
    if (item_code[i]==a)
        item_price[i]=0;
    
}
void items::displayitems(void){
    cout<<endl<<"Code Price"<<endl;
    for(int i = 0; i<count;i++)
       { 
        cout<<endl<<item_code[i]<<"  ";
        cout<<item_price[i]<<endl;
        }
}
int main(){
    items order;
    order.CNT();
    int x;
    do{
        cout<<"Welcome! Customers!!!"<<endl;
        cout<<"==========================================================="<<endl;
        cout<<"1. Add an item :(press 1)"<<endl;
        cout<<"2. Display total value :(press 2)"<<endl;
        cout<<"3. Delete an item? :(press 3)"<<endl;
        cout<<"4. Display the items list :(press 4)"<<endl;
        cout<<"5. Quit? :(press 5)"<<endl;
        cout<<"What is your option?"<<endl;

        cin>>x;

        switch(x){
            case 1:
            order.getitem();
            break;

            case 2:
            order.displaysum();
            break;
            
            case 3:
            order.remove();
            break;

            case 4:
            order.displayitems();
            break;

            case 5:
            break;
            
            default :
            cout<<"Error in input ; try again "<<endl;
        }
    
         }     while(x!=5);
    return 0;
}