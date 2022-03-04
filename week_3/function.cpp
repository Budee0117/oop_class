#include <iostream>
using namespace std;
void myVoidFunction();
int myFunctionWithReturnValue();
void myFunctionWithParameter(string myParameter);
int main ()
{
    cout << "Hello\n";
    myVoidFunction();
    int result=myFunctionWithReturnValue();
    cout << "result " << result << "\n";
     myFunctionWithParameter ("Budee" );
    return 0;
}
void myVoidFunction()
{
    cout <<"my name is Budee\n";

}
int myFunctionWithReturnValue()
{
    return 42;
}
void myFunctionWithParameter (string myParameter)
{
    cout <<"Hey "<<myParameter<<"\n";
}
