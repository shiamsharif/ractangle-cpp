#include <iostream>


class ShiamClass
{
    int w;
    int l;

    public:
    ShiamClass(int i, int j)
    {
        w = i;
        l = j;
    }
    int get_w()
    {
        return w;
    }
    int get_l()
    {
        return l;
    }
}; 

int ractangle(ShiamClass ob)
{
    int area = ob.get_w() * ob.get_l();
    return area;
}

int main()
{
    ShiamClass ob1(10,8), ob2(100,8);

    std::cout << ractangle(ob1) << std::endl;
    std::cout << ractangle(ob2) << std::endl;

    return 0;
}