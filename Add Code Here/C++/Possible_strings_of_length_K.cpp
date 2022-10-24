#include <bits/stdc++.h>
using namespace std;
void printstrings(char arr[],int k,string prefix,int n)
{
    if(k==0)
    {
        cout<<(prefix)<<endl;
        return;
    }
    for(int i=0;i<n;i++)
    {
        string newstr;
        newstr=prefix+arr[i];
        printstrings(arr,k-1,newstr,n);
    }

}
int main()
{
    cout << "First Test" << endl;
    char set1[] = {'a', 'b'};
    int k = 3;
    printstrings(set1, k,"", 2);
     
    cout << "Second Test\n";
    char set2[] = {'a', 'b', 'c', 'd'};
    k = 1;
    printstrings(set2, k,"", 4);
}
