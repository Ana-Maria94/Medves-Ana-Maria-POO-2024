#include <pch.h>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class Animal
{
public:
    int legs;

    void SetName(string n)
    {
        name = n;
    }

    string GetName()
    {
        return name;
    }

private:
    string name;
};

int main()
{
    Animal bee, spider;

    bee.SetName("Bee");
    bee.legs = 6;

    spider.SetName("Spider");
    spider.legs = 8;

    cout << "Animal 1 - name: " << bee.GetName() << " has legs: " << bee.legs << endl;
    cout << "Animal 2 - name: " << spider.GetName() << " has legs: " << spider.legs << endl;

    return 0;
}