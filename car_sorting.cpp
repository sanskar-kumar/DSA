#include <bits/stdc++.h>
using namespace std;
class car
{

public:
    string car_name;
    int x, y;
    car()
    {
    }
    car(string n, int x, int y)
    {
        car_name = n;
        this->x = x;
        this->y = y;
    }
    int dist()
    {
        return x * x + y * y;
    }
};
bool comparator(car A, car B)
{
    int da = A.dist();
    int db = B.dist();
    if (da == db)
    {
        return A.car_name.length() < B.car_name.length();
    }
    return da < db;
}
int main()
{
    vector<car> v;
    int n;
    cout<<"Enter number of cars:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        string name;
        cout<<"Enter Car Name and its coordinates for Car No. "<<i+1<<":";
        cin >> name >> x >> y;
        car temp(name, x, y);
        v.push_back(temp);
    }
    sort(v.begin(), v.end(), comparator);
    for (auto c : v)
    {
        cout << "Car "<<c.car_name << " is at a distance of " <<" "<< c.dist() << " with coordinates as " << c.x << " and " << c.y<<endl;
    }
    return 0;
}