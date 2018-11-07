#include<iostream>
using namespace std;
class vector
{
private:
  int length;
  double *a;
public:
  vector()
  {
    length=0;
    //cout<<"default"<<endl;
  }
  vector(int l)
  {
    length=l;
    a= new double;
    *a= length;
    //cout<<"parameter"<<endl;
  }
  vector(vector &v2);
  /*{
    length=v2.length;
  }*/
  void display()
  {
    cout<<length<<endl;

  }
  ~vector()
  {
    cout<<"default distructor"<<endl;
  }
  void operator=(vector &v2)
  {
    length=v2.length;
    a=v2.a;
  }
  bool redim()
  {
    if(length==l)
    {
      return false
    }
    else
    {
      length=l;
      double *new_a;
      new_a=(double *)realloc(a,length*sizeof(double));
      a=new_a;
      return true;
    }
  }
};
vector::vector(vector &v2)
{
  length=v2.length;
  a=v2.a;
  //cout<<*a<<endl;
}
int main()
{
  vector v1;
  v1.display();
  vector v2(4);
  v2.display();
  vector v3=v2;
  v3.display();
  v1=v2;
  v1.display();
  
  return 0;
}
