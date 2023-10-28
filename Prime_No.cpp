#include<iostream>
using namespace std;

int prime(int n)
{
    if(n<=1)
        return 0;
    int flag=1,d,i;

    for(d=2;d<n;d++)
    {
        if(n%d==0)
        {
            flag=0;
            break;
        }

    }
    return flag;
}

int main()
{
    int n;
    cout<<"Enter the Number : ";
    cin>>n;

    int check_prime = prime(n);

    if(check_prime)
        cout<<"\nNumber is prime";
    else
        cout<<"\nNumber is not prime";
}
