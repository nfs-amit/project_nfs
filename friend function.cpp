#include<iostream>
using namespace std;
class base{
    int val1;
    int val2;
    public
     void get()
{
 cout<<"enter 1st number:";
 cin>>val1;
 cout<<"enter 2nd number:";
 cin>>val2;
}
friend float mean(base obj);
};
float man(base obj)
{
    return float(obj.val1 +obj.val2)/2;
}
void main()
{
    base obj;
    obj.get();
    cout<<"in mean value is:"<<mean (obj);
    return;
}