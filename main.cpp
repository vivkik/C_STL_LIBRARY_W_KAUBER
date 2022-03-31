#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
using namespace std; 

//Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/ clarifications added
class MyClassVector1 
{ 
  private:  
      vector<int> vec; 
  public: 
      MyClassVector1 (vector<int> v)  //parameterized constructor
      { 
        vec = v; 
      } 
      void print() 
      { 
          /// print the value of vector 
          for (int i = 0; i < vec.size(); i++) 
          {
              cout << vec[i] << " "; 
          }    
      } 
};

class MyClassVector2
{
    vector<int> vec;
 
public:
    MyClassVector2 (vector<int> v) : vec(v) //parameterized constructor 2

    {
    }
    void print()
    {
        /// print the value of vector
        for (int i = 0; i < vec.size(); i++)
            cout << vec[i] << " ";
    }
};

class MyClassVector3
{
    vector<int>& vec;
 
public:
    MyClassVector3 (vector<int>& arr)  //parameterized constructor 3
        : vec(arr)
    {
    }
    void print()
    {
        /// print the value of vector
        for (int i = 0; i < vec.size(); i++)
            cout << vec[i] << " ";
    }
};

int main() 
{
//**** vector double ****
    vector<double> vd = {0.5, 1.5}; 
    
    vd.push_back(1.0);
    vd.push_back(2.2);
    vd.push_back(3.14);
    vd.push_back(55.4); 
 
  cout << "\nValues in vd: \n"; // printing vector double 
   for(double vals : vd)
   {
     cout << vals << endl; 
   }
   cout << "\nAnother way to print vector: " << endl; 
   for(int i = 0; i < vd.size(); i++)
   {
     cout << vd[i] << endl; 
   }
  
//**** vector integer *****
    vector<int> vi = {1, 2};

    vi.push_back(3);
    vi.push_back(1);
    vi.push_back(4);

  cout << "\nValues in vi: \n"; // printing vector integer
    for(int vals : vi)
      {
        cout << vals << endl;
      }
  
//**** vector string ****
    vector<string> vs = {"Genghis","Tokugawa"}; 

    vs.push_back("Alexander");
    vs.push_back("Hannibal");
    vs.push_back("Caesar");

  cout << "\nValues in vs: \n"; // printing vector string 
    for(string vals : vs)
      {
        cout << vals << endl;
      }

  //**** vectors as class members from geeksforgeeks.com ****
  cout << "\nVector_as_Class_Member" << endl; 
    vector<int> vec; 
        for (int i = 1; i <= 5; i++) 
            vec.push_back(i); 
        MyClassVector1 obj(vec); 
        obj.print(); 

  //**** stl iterators ***
  vector< int > vint (3);
  vint[0] = 10;
  vint[1]


return 0;
}