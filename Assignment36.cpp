//1. Using STL Array gets and sets a reference to an element based on a given index.
/*#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,5> a{1,2,3,4,5};
     array<char,5> b{'t','a','n','u'};
    for(int i: a)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    for(char i: b)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<" element at index 0:"<<a[0]<<endl;
    cout<<" element at index 1:"<<a[1]<<endl;
    cout<<" element at index 2:"<<a[2]<<endl;
    cout<<" element at index 3:"<<a[3]<<endl;
    cout<<" element at index 4:"<<a[4]<<endl;  

    a[0]=10;
    a[4]=40;
     cout<<" element at index 0:"<<a[0]<<endl;
     cout<<" element at index 4:"<<a[4]<<endl; 

    cout<<endl;
    return 0;
}*/

//2. Using STL Array returns the total number of elements in the array.
/*#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,5> a{1,2,3,4,5};
     
    for(int i: a)
    {
        cout<<i<<" ";
    }
    cout<<endl;
  
    cout<<" element at index 0:"<<a[0]<<endl;
    cout<<" element at index 1:"<<a[1]<<endl;
    cout<<" element at index 2:"<<a[2]<<endl;
    cout<<" element at index 3:"<<a[3]<<endl;
    cout<<" element at index 4:"<<a[4]<<endl;  
    int count=0;
    for(auto i=a.begin();i<a.end();i++)
    count++;
    cout<<"total values in array :"<<count<<endl;
    cout<<endl;
    return 0;
}*/

//3. Find the first and last element using the STL array
/*#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,5> a{1,2,3,4,5};
     
    for(int i: a)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"first element  "<<a.front()<<endl;
    cout<<"last element  "<<a.back()<<endl;
    cout<<"first element  "<<a[0]<<endl;
    cout<<"last element  "<<a.size()<<endl;
    
    return 0;
}*/
//4. Returns the element from the given index using the STL array.
/*#include<iostream>
#include<array>
#include<tuple>
using namespace std;
int main()
{
    array<int,5> a{1,2,3,4,5};
     
    for(int i: a)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"at 0  "<<a.at(0)<<endl;
    cout<<"at 1  "<<a[1]<<endl;
   
    return 0;
}*/
//5. C++ STL program to demonstrate example of array::rbegin() and array::rend() functions
/*#include<iostream>
#include<array>
#include<tuple>
using namespace std;
int main()
{
    array<int,5> a{1,2,3,4,5};
     
    for(auto i=a.rend()-1;i!=a.rbegin()-1;i--)
    cout<<*i<<"  ";
    cout<<endl;
    for(auto i=a.rbegin();i!=a.rend();i++)
    cout<<*i<<"  ";
    return 0;
}*/
//6. Using STL to check whether an array is empty or not.
/*#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,5> a{1,2,3,4,5};
    array<int,0> b;
    cout<<"is this array is empty?  "<<a.empty()<<endl;
    cout<<"is this array is empty?  "<<b.empty()<<endl;
    return 0;
}*/
//7. Sort an array in ascending order using sort() function in C++ STL
/*#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int a[]={10,25,3,45,56,63,77,81};
    
      int size=sizeof(a)/sizeof(int);
    cout<<size<<endl;
   sort(a,a+size);
   cout<<"sorted in ascending"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
   cout<<endl;
    return 0;
}*/
//8. Sort an array in descending order using sort() function in C++ STL
/*#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int a[]={10,25,3,45,56,63,77,81};
    
      int size=sizeof(a)/sizeof(int);
    cout<<size<<endl;
   sort(a,a+size,greater<>());
    cout<<"sorted in descending :"<<endl;
    for(int i=0;i<=size-1;i++)
    {
        cout<<a[i]<<" ";
    }
   cout<<endl;
    return 0;
}*/
//9. C++ program to find the integers which come an odd number of times in an array using C++ STL.
//remember a^a=0, 0^a=a in yhis xor operation will be performed
#include<iostream>
#include<array>
using namespace std;
int OddNum(array<int,5> a)
{
    int result=0;
    for(int i=0;i<a.size();i++)
    {
        result=result^a[i];

    }
    return result;
}
int main()
{ 
    array<int ,5> a{1,4,4,9,1};
    int result=OddNum(a);
    cout<<"odd times number is:"<<result<<endl;
    return 0;
}
