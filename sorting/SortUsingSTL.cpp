#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cout<<"how many elements you want to insert:";
    cin>>n;
    int a[n];
    cout<<(sort(a,a+n));
    return 0;
}