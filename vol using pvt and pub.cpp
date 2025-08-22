/*Sanidhya Singh
24070123140
ENTC B2
*/

#include <iostream>
using namespace std;
class Cuboid{
    double height=2.0;
    double width=3.0;
    double length=5.0;

    public:
    double volume() {
        return height * width * length;
    }
};
int main() {
    Cuboid cub;
    cout << "Volume of the cuboid using member function: " << cub.volume() << endl;

    return 0;
}

/*Output
Volume of the cuboid using member function: 30
*/