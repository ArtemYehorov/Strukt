#include<iostream>
#include<String>
#include<windows.h>

#pragma once

using namespace std;



struct TV
{
	string name_Company;
	int height;
	int width;
	int mass;
	int channels;
};

void CoutTV(TV Tv)
{
	cout << "TV" << endl;
	cout << Tv.name_Company << endl;
	cout << "Height " << Tv.height << " centimeters" << endl;
	cout << "Width " << Tv.width << " centimeters" << endl;
	cout << "Weight " << Tv.mass << " kg" << endl;
	cout << "Number of channels " << Tv.channels << endl << endl;
}

struct Phone
{
	int height;
	int width;
	int weight;
	string name_company;
	string Color;
};

void CoutPhone(Phone Myphone)
{
	cout << "Phone" << endl;
	cout << Myphone.name_company << endl;
	cout << "Collor " << Myphone.Color << endl;
	cout << "Height " << Myphone.height << " centimeters" << endl;
	cout << "Width " << Myphone.width << " centimeters" << endl;
	cout << "Weight " << Myphone.weight << " gr" << endl << endl;
}

struct Cup
{
	int height;
	int width;
	int weight;
	string color_inside;
	string color_outside;
};

void CoutCup(Cup MyCup)
{
	cout << "Cup" << endl;
	cout << "Height " << MyCup.height << " centimeters" << endl;
	cout << "Width " << MyCup.width << " centimeters" << endl;
	cout << "Weight " << MyCup.weight << " gr" << endl;
	cout << "Collor Inside - " << MyCup.color_inside << endl;
	cout << "Collor Outside  - " << MyCup.color_outside << endl << endl;
}

struct PowerBank
{
	string Company;
	int height;
	int width;
	int weight;
	string color;
};

void CoutPowerBank(PowerBank Bank)
{
	cout << "Power Bank" << endl;
	cout << "Name Company - " << Bank.Company << endl;
	cout << "Height " << Bank.height << " centimeters" << endl;
	cout << "Width " << Bank.width << " centimeters" << endl;
	cout << "Weight " << Bank.weight << " gr" << endl;
	cout << "Collor - " << Bank.color << endl << endl;
}

struct computer_mouse
{
	string Company;
	int height;
	int width;
	int weight;
	string color;
	int number_of_buttons;
};

void CoutMouse(computer_mouse mouse)
{
	cout << "Computer Mouse" << endl;
	cout << "Name Company - " << mouse.Company << endl;
	cout << "Height " << mouse.height << " centimeters" << endl;
	cout << "Width " << mouse.width << " centimeters" << endl;
	cout << "Weight " << mouse.weight << " gr" << endl;
	cout << "Collor - " << mouse.color << endl;
	cout << "Number of buttons - " << mouse.number_of_buttons << endl;
}