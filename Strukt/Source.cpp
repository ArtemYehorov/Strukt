#include"StructFunc.h"
#include<iostream>

using namespace std;

int main()
{
	TV TV_on_room;
	TV_on_room.name_Company = "LG";
	TV_on_room.height = 70;
	TV_on_room.width = 160;
	TV_on_room.mass = 30;
	TV_on_room.channels = 100;
	CoutTV(TV_on_room);

	Phone MyPhone;
	MyPhone.name_company = "Xiaomi";
	MyPhone.Color = "Blue";
	MyPhone.height = 17;
	MyPhone.width = 10; 
	MyPhone.weight = 350;
	CoutPhone(MyPhone);

	Cup MyCup;
	MyCup.height = 15;
	MyCup.width = 10;
	MyCup.weight = 250;
	MyCup.color_inside = "Black";
	MyCup.color_outside = "White";
	CoutCup(MyCup);

	PowerBank MyPower;
	MyPower.Company = "Xiaomi";
	MyPower.height = 2;
	MyPower.width = 16;
	MyPower.weight = 120;
	MyPower.color = "silver";
	CoutPowerBank(MyPower);

	computer_mouse MyMouse;
	MyMouse.Company = "Xiaomi";
	MyMouse.height = 4;
	MyMouse.width = 8;
	MyMouse.weight = 150;
	MyMouse.color = "White";
	MyMouse.number_of_buttons = 6;
	CoutMouse(MyMouse);
}