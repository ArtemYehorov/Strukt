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

	void CoutTV()
	{
		cout << "TV" << endl;
		cout << name_Company << endl;
		cout << "Height " << height << " centimeters" << endl;
		cout << "Width " << width << " centimeters" << endl;
		cout << "Weight " << mass << " kg" << endl;
		cout << "Number of channels " << channels << endl << endl;
	}
};

struct Phone
{
	int height;
	int width;
	int weight;
	string name_company;
	string Color;

	void CoutPhone()
	{
		cout << "Phone" << endl;
		cout << name_company << endl;
		cout << "Collor " << Color << endl;
		cout << "Height " << height << " centimeters" << endl;
		cout << "Width " << width << " centimeters" << endl;
		cout << "Weight " << weight << " gr" << endl << endl;
	}
};

struct Cup
{
	int height;
	int width;
	int weight;
	string color_inside;
	string color_outside;

	void CoutCup()
	{
		cout << "Cup" << endl;
		cout << "Height " << height << " centimeters" << endl;
		cout << "Width " << width << " centimeters" << endl;
		cout << "Weight " << weight << " gr" << endl;
		cout << "Collor Inside - " << color_inside << endl;
		cout << "Collor Outside  - " << color_outside << endl << endl;
	}
};

struct PowerBank
{
	string Company;
	int height;
	int width;
	int weight;
	string color;

	void CoutPowerBank()
	{
		cout << "Power Bank" << endl;
		cout << "Name Company - " << Company << endl;
		cout << "Height " << height << " centimeters" << endl;
		cout << "Width " << width << " centimeters" << endl;
		cout << "Weight " << weight << " gr" << endl;
		cout << "Collor - " << color << endl << endl;
	}
};

struct computer_mouse
{
	string Company;
	int height;
	int width;
	int weight;
	string color;
	int number_of_buttons;

	void CoutMouse()
	{
		cout << "Computer Mouse" << endl;
		cout << "Name Company - " << Company << endl;
		cout << "Height " << height << " centimeters" << endl;
		cout << "Width " << width << " centimeters" << endl;
		cout << "Weight " << weight << " gr" << endl;
		cout << "Collor - " << color << endl;
		cout << "Number of buttons - " << number_of_buttons << endl;
	}
};
