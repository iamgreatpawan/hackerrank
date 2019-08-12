/*
Input Format

You will be given two positive integers,a and b (a<=b), separated by a newline.

Output Format

For each integer n in the interval [a,b] :

If 1<=n<=9 , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
Else if n>9 and it is an even number, then print "even".
Else if n>9 and it is an odd number, then print "odd".
*/
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
      int i,c,b;
    string a[11]={"even","odd","one","two","three","four","five","six","seven","eight","nine"};
    cin>>c>>b;
    for(i=c;i<=b;i++)
    {
        if((i>9) && (i%2==0))  cout<<a[0]<<endl;
        else if((i>9) && (i%2!=0)) cout<<a[1]<<endl;
        else    cout<<a[i+1]<<endl;
    }
    return 0;
}
