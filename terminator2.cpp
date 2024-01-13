#include <iostream>
using namespace std;

class Exception {
public:
    void divide(int a, int b) 
	{
       try 
	   {
            if (b == 0)
			{
                throw "Division by zero error";
            }
			else
			{
                int result = a / b;
                cout << "a/b: " << result << endl;
            }
       } 
		catch (...)
		{
            cout << "can't divide by zero"<< endl;
        }
    }
};

int main() 
{
    Exception exc;

    exc.divide(10,2); 
    exc.divide(8,0); 
    exc.divide(12,4);
}

