#include <iostream>
using namespace std;

class fibonacci_series  // declaring class of name fibonacci series...!!!
{
    public:
        int next_term,term_one,term_two;
        void generatefibonacci(int range);
};

void fibonacci_series::generatefibonacci(int range)
{
    if(range==0)
    {
        cout<<"Cannot generate series"<<endl;
        exit(0); //exit(0) indicates that the program terminated without errors. exit(1) indicates that there were an error.
    }
    term_one=0;
    term_two=1;

    cout<<"Fibonacci Series"<<endl;
    if(range==1)
    
        cout<<term_one;
    else if(range>=2)
    {
        cout<<term_one<<"\t"<<term_two;  // -->'\t' is a horizontal tab . It is used for giving tab space horizontally in your output.
        for(int i=1;i<=range;++i)
        {
            int next_term=term_one+term_two;
            cout<<"\t"<<next_term;
            term_one=term_two;
            term_two=next_term;
        }
    }
    cout<<endl;
}

int main(){
    char a='y';
    int range;
    while(a=='y'){
    cout<<"Enter the range of fibonacci series :"<<endl;
    cin>>range;

    fibonacci_series fibseries; //Giving the class name to fibseries..!!
    fibseries.generatefibonacci(range); //obj-name.function-of-that-class..!!!
    
    cout<<"If u want to continue(y/n):"<<endl;
    cin>>a;
    }
    return 0;
}