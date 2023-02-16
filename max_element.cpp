#include <iostream>
using namespace std;
class Maximum
{
    int i, n;
    int *a;

public:
    Maximum()
    {

        cout << "Enter total number of elements: " << endl;
        cin >> n;
        a = new int(n);
        cout << "Enter " << n << " elements: " << endl;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
    }
    int find_max()
    {
        i = 0;
        int max_element = a[i];
        for (i + 1; i < n; i++)
        {
            if (max_element < a[i])
                max_element = a[i];
        }
        return max_element;
    }
};
int main()
{
    Maximum obj;
    cout << "Maximum element is: " << obj.find_max() << endl;
    return 0;
}