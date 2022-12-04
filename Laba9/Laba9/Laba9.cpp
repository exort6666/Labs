#include <iostream>
class diagonalCub
{
private:
    int length = 0;
    int width = 0;
    int height = 0;
    int diagonalCuba = 0;
public:
    int getter()
    {
        return diagonalCuba;
    }
    bool setter(int len, int wid, int heig)
    {
        if (len < 0 || wid < 0 || heig < 0)
        {
            std::cout << "ERROR";
            return false;
        }
        length = len;
        width = wid;
        height = heig;
        diagonalCuba = diagonal(len,wid,heig);
    }
    int diagonal(int len, int wid, int heig) {
        return (len * wid * heig);
    }
};
void main() 
{
    int a, b, c;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    diagonalCub setter(a, b, c);
    diagonalCub getter();
}

