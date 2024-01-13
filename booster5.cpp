#include<iostream>
using namespace std;
void two();
void three();
int main()
{
    int n;
    cin>>n;
    switch(n)
    {
        case 2:
            two();
            break;
        case 3:
            three();
            break;
        default:
            cout<<"invalid input";
            break;
    }
}


void two()
{
    int s;
    cin>>s;
        for(int i=0;i<=9;i++){
        for(int j=1;j<=9;j++)
        {
            if(i+j==s)
            {
                cout<<i<<"+"<<j<<"="<<s<<endl;
                }    
        }
    }
}

void three()
{
    int s;
    cin>>s;
        for(int i=0;i<=9;i++){
        for(int j=1;j<=9;j++)
        {
            for(int k=1;k<=9;k++)
            {
                if(i+j+k==s)
                {
                cout<<i<<"+"<<j<<"+"<<k<<"="<<s<<endl;
                }
            }        
        }
    }
}

