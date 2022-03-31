#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
#include <cassert>
#include <stack>
#include <set> 
#include <utility>

using namespace std; 

typedef map<string, int> MapT;
typedef MapT::const_interator MapIterT;

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
  vector< int > vint (10);
  vint[0] = 10;
  vint[1] = 20;
  vint[2] = 30;
  vint[3] = 44;
  vint[4] = 55;
  vint[5] = 66;
  vint[6] = 77;
  vint[7] = 88; 
  vint[8] = 99;
  vint[9] = 101;

  cout << "\nVector Elements from Iterator: "<<endl;
  vector<int> :: iterator it;//printing elements of the vector
  for (it = vint.begin(); it!=vint.end();++it)
    {
      cout <<" " << *it;
    }

//**** std::stack - can only insert/extract from top  ****

  stack< int > st;

  st.push( 200 ); // push the number on the stack
  assert( st.size() == 1 ); // verify one element is on the stack
  assert( st.top() == 200 ); // verify element value

  st.top() = 333; // assigning a new value
  assert( st.top() == 333 );

  st.pop(); // removing an element
  assert ( st.empty() == true );

//**** std::set - a container holding unique elements that are sorted ****
  cout<< "\n Set Container Elements: \n";
  set< int > iset; // a set of unique int numbers
  iset.insert(11); // add set with values
  iset.insert(-11);
  iset.insert(55);
  iset.insert(22);
  iset.insert(22);

    if( iset.find( 55 ) != iset.end()) //check if the value is stored
    {
      iset.insert(55);
    }
    
    assert( iset.size() == 4 );
    set <int> :: iterator ist; 
    for ( ist = iset.begin(); ist != iset.end(); ist++)
      {
        cout << " " << *ist;
      }

//**** std::pair structure- a container storing 2 elements ****

  pair< string, string > strstr;
  strstr.first= "Sup" ;
  strstr.second= "Earth";

  pair< int, string> intstr;
  intstr.first = 1; 
  intstr.second = "Juan";

  pair< string, int > strint("Dos", 2);
  assert( strint.first == "Dos");
  assert( strint.second == 2);

//**** std::
  
return 0;
}