#include <iostream>
using namespace std;
class building {
int rooms;
int floors;
int area;
public:
void set_rooms(int num);
int get_rooms();
void set_floors(int num);
int get_floors();
void set_area(int num);
int get_area();
};

// house is derived from building
class house : public building {
int bedrooms;
int baths;
public:
void set_bedrooms(int num);
int get_bedrooms();
void set_baths(int num);
int get_baths();
};
// school is also derived from building
class school : public building {
int classrooms;
int offices;
public:
void set_classrooms(int num);

int get_classrooms();
void set_offices(int num);
int get_offices();
};
void building::set_rooms(int num)
{
rooms = num;
}
void building::set_area(int num)
{
area = num;
}
int building::get_rooms()
{
return rooms;
}
int building::get_floors()
{
return floors;
}
int building::get_area()
{
return area;
}
void house::set_bedrooms(int num)
{
bedrooms = num;
}
void house::set_baths(int num)
{

baths = num;
}
void building::set_floors(int num)
{
floors = num;
}

int house::get_bedrooms()
{
return bedrooms;
}
int house::get_baths()
{
return baths;
}
void school::set_classrooms(int num)
{
classrooms = num;
}
void school::set_offices(int num)
{
offices = num;
}

int school::get_classrooms()
{
return classrooms;
}
int school::get_offices()
{
return offices;
}
int main()
{
house h;
school s;
h.set_rooms(12);
h.set_floors(3);
h.set_area(4500);
h.set_bedrooms(5);
h.set_baths(3);
cout << "house has " << h.get_bedrooms();
cout << " bedrooms\n";
s.set_rooms(200);
s.set_classrooms(180);
s.set_offices(5);
s.set_area(25000);
cout << "school has " << s.get_classrooms();
cout << " classrooms\n";
cout << "Its area is " << s.get_area();
return 0;
}
