#include <iostream>
#include <string>

using namespace std;

class Neko
{
private:
    string name;
public:
    Neko(string s){
        name = s;
    }
    void naku(){
        cout << "我輩は" << name << "である。" << endl;
    }
};
int main() {
    Neko dora("ボス");
    dora.naku();
}