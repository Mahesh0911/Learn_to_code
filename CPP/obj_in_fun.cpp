#include <iostream>
using namespace std;

class ID
{
private:
    int id;

public:
    ID(int id);
    void show();
    void incr()
    {
        this->id++;
    }
};

ID::ID(int id)
{
    this->id = id;
}

void ID::show()
{
    cout << "ID is : " << this->id << endl;
}

ID *incr_id(ID id)
{
    ID *temp = new ID(id);
    temp->incr();
    return temp;
}

int main(int argc, char const *argv[])
{
    ID emp1(3);
    ID *emp2 = incr_id(emp1); // stores the ptr to employee with next incremented id.

    emp1.show();
    cout << endl;
    emp2->show();
    cout << endl;
    return 0;
}
