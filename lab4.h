#include <string>

using namespace std;
class korable {
private:
    int vodoemnist;
    string name;
    int konteiner;
protected:
    string material;
    string colour;
public:
    int size;
    string addons;

    korable() ;
    korable(int vodoemnist,string name,int konteiner,string Material,string colour,int Size,string addons);
    ~korable();

    int getvodoemnist();

    string getname();

    int getkonteiner();

    string getMaterial();

    string getcolour();

    void printkorableInfo();
};
