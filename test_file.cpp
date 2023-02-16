#include <iostream>
using namespace std;
class rectangle
{
public:
    int length;
    int breadth;
    rectangle() {}
    rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    void set_length(int l)
    {
        length = l;
    }
    void set_breadth(int b)
    {
        breadth = b;
    }
    int get_length()
    {
        return length;
    }
    int get_breadth()
    {
        return breadth;
    }
};
class cuboid : public rectangle
{
    int height;

public:
    cuboid(int l, int b, int h)
    {
        height = h;
        set_length(l);
        set_breadth(b);
        set_height(h);
    }
    void set_height(int h)
    {
        height = h;
    }
    int get_height()
    {
        return height;
    }
    int volume()
    {
        return length * breadth * height;
    }
};
int main()
{
    cuboid c(1, 2, 3);
    cout << "volume = " << c.volume() << endl;
}