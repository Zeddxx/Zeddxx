#include <iostream>  
using namespace std;  
int main()  
{  
  int n, i, m=0, flag=0; 
  char a='y';
  while(a=='y')
  {
/*Flag variable is used as a signal in programming to let the program know that a certain condition has met. It usually acts as a boolean variable indicating a condition to be either true or false. */ 
  cout << "Enter the Number to check Prime: ";  //taking input from user..!
  cin >> n;  
//   we are starting the value of m from 0. Here n/2 is show that the number is divisible by 2..!!
  m=n/2;  
  // for i=2..where i <= m(the m is started from 0)..first take value of i than increase...!!
  for(i = 2; i <= m; i++)  
  {  
    // the value n when divided from i if the remainder became 0 then the number is not prime number..!!!
      if(n % i == 0)  
      {  
        // if remainder became 0 then the output we get will be.....!!!
          cout<<"Number is not Prime."<<endl;  
          // here flag=1 is written which is used as bool
          flag=1;  
          // breaking the loop...!!
          break;  
      }  
  }  
  // if flag bool is false the below statement will be our output..!!
  if (flag==0)  {
  //output will be..!!
      cout << "Number is Prime."<<endl; 
  }

      cout<<"whether you want to continue(y/n) :"<<endl;
      cin>>a; 
  }
  return 0;  
  
}  