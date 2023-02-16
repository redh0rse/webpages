#include <iostream>
using namespace std;
template <class T>
class vector
{
  int v[3], sum;

public:
//   vector(T m)
//   {
//     // size=m;
//     for (int i = 0; i < m; i++)
//       v[i] = 0;
//   }
  vector(T *T)
  {
    for (int i = 0; i < 3; i++)
    {
      v[i] = a[i];
    }
  }
  vector operator*(vector &y)
  {
    int sum = 0;
    for (int i = 0; i < 3; i++)
      sum += this->v[i] * y.v[i];
    // return sum;
  }
    T get(){
        return sum;
    }
};
int main()
{ 
  int x[3] = {10, 20, 30};
  int y[3] = {10, 20, 30};
  vector<int> v1(x);
  vector<int> v2(y);
//   v1 = x;
//   v2 = y;
  vector<int> R =  v1* v2;
//   cout << "result is:"<< R << endl;
    cout<<R.get();
    return 0;
}