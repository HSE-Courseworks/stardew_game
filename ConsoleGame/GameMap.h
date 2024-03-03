#pragma once
#include <string>
using namespace std;

class Terrain
{
public:
	Terrain(int moveCost, bool isWater, string texture) :
		moveCost_(moveCost),
		isWater_(isWater),
		texture_(texture)
	{}

	int getMoveCost() const { return moveCost_; }
	bool getIsWater() const { return isWater_; }
	string getTexture() const { return texture_; }

private:
	int moveCost_;
	bool isWater_;
	string texture_;
};

class World
{
public:
	int width, height, MaxX = 100, MaxY = 100;
	World() :
		grassTerrain_(1, false, '#'),
		hillTerrain_(3, false, '/'),
		riverTerrain_(3, true, '=')
	{}

private:
	//Terrain* tiles_[width][height];
	Terrain grassTerrain_;
	Terrain hillTerrain_;
	Terrain riverTerrain_;
};
