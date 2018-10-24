#include <iostream>
#include <string>
#include <forward_list>

using namespace std;

class household
{
public:
    string name;
    string relation;
    int number;
};

forward_list<household> household_list;
string thing;

void insert_household ( string name, string relation, int number )
{
    household buffer;
    buffer.name = name;
    buffer.relation = relation;
    buffer.number = number;
    household_list.push_front(buffer);
}

bool match_name (household in)
{
    if (in.name == thing)
        return true;
    return false;
}

void delete_household ( string name )
{
    thing = name;
    household_list.remove_if (match_name);
}

bool search_household (string name)
{
    for (household h : household_list)
    {
        if (h.name == name) return true;
    }
    return false;
}

void print_household ()
{
    for (household h : household_list)
    {
        cout << "Name: " << h.name << endl;
        cout << "Relationship: " << h.relation << endl;
        cout << "Number of People in Household: " << h.number << endl;
    }
}

int gift_number ()
{
    int total = 0;
    for (household h : household_list)
    {
        total += h.number;
    }
    return total;
}

int main()
{
    int in;
    cout << "Input number of people: ";
    cin >> in;
    for (int i = 0; i < in; ++i)
    {
        string person;
        string relationship;
        int number;

        cout << "Enter person #" << i+1 << "'s name: ";
        cin >> person;
        cout << "Enter relationship to this person: ";
        cin >> relationship;
        cout << "Enter number of people in this household: ";
        cin >> number;

        insert_household(person, relationship, number);
    }
    print_household();
    cout << gift_number() << endl;
    string buffer;
    cout << "Find a person in the list!" << endl << "Enter their name: ";
    cin >> buffer;
    if (search_household(buffer))
    {
        cout << "That name is in the list!" << endl;
    }
    else
    {
        cout << "That name is not in the list!" << endl;
    }
    cout << "Delete a person from the list!" << endl << "Enter their name: ";
    cin >> buffer;
    delete_household(buffer);
    print_household();
    cout << gift_number() << endl;
    return 0;
}
