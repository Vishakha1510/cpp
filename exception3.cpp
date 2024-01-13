#include <iostream>
using namespace std;

int main()
{
    try {
        string pass;
        int i;
        cout<<"Enter password: ";
        cin>>pass;

        bool hasUppercase = false;
        for (i=0;i<pass.length();i++)
		 {
            if (isupper(pass[i])) 
			{
                hasUppercase=true;
                break;
            }
         }

        if (!hasUppercase)
		 {
            throw (pass);
         }
		else 
		 {
            cout<<"Password is valid"<<endl;
         }
       } 
	catch (string pass)
	 {
        cout <<"Password is invalid"<<endl;
     }
}

