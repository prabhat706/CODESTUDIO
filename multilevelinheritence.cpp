#include <bits/stdc++.h>
using namespace std;

class animal
{
public:
    int age = 2;
    int weight = 30;

    void sound()
    {
        cout << "Speaking" << endl;
    }
};

class dog1 : public animal
{
};
class germanshephered : public animal
{
};
// class dog3 : public animal
// {
// };
// class dog4 : public animal
// {
// };

int main()
{
    germanshephered g;
    g.sound();

    cout << "The age of the dog is"
         << " " << g.age << endl;
    cout << "The weight of the dog is"
         << " " << g.weight << endl;
}