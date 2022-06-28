#pragma once
#include<cmath>

class vector2
{
private:
	float x, y;

public:
	vector2(float _x = 0, float _y = 0);//++
	vector2(const vector2& vec);//+
	vector2(const vector2&& vec);//+

	vector2 getNormalized() const;//+

	static float scalar(const vector2& vec1, const vector2& vec2);//+
	static float len(const vector2& vec);//+
	static float angle(const vector2& vec1, const vector2& vec2);//+

	
	vector2 operator+(const vector2& other) const;//+
	vector2 operator-(const vector2& other)const;//+
	vector2 operator*(const float& num)const;//+
	vector2 operator=(const vector2& other);
	bool operator<(const vector2& other)const;
	bool operator>(const vector2& other)const;
	bool operator<=(const vector2& other)const;
	bool operator>=(const vector2& other)const;
	bool operator==(const vector2& other)const;
	bool operator!=(const vector2& other)const;


};

