
#include<iostream>

using namespace std;

class ArithmeticX
{
    public:
        void ReverseNumber(int);
};

void ArithmeticX::ReverseNumber(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        cout<<iNo%10;        

        iNo /= 10;
    }
    cout<<endl;
}

int main()
{
    ArithmeticX aobj;

    int iValue = 0;
    
    cout<<"Enter Number\n";
    cin>>iValue;

    aobj.ReverseNumber(iValue);

    return 0;
}