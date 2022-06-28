#pragma once
#include<cmath>

class Vector2
{
private:
	float m_x, m_y;

public:
	Vector2(float _x = 0, float _y = 0);//++
	Vector2(const Vector2& vec);//+
	Vector2& operator=(const Vector2& other);

	Vector2 getNormalized() const;//+

	float scalar(const Vector2& other);//+
	float length()const;//+
	float angle(const Vector2& other);//+

	
	Vector2 operator+(const Vector2& other) const;//+
	Vector2 operator-(const Vector2& other)const;//+
	Vector2 operator*(const float& num)const;//+
	
	bool operator<(const Vector2& other)const;//+
	bool operator>(const Vector2& other)const;//+
	bool operator<=(const Vector2& other)const;//+
	bool operator>=(const Vector2& other)const;//+
	bool operator==(const Vector2& other)const;
	bool operator!=(const Vector2& other)const;


};

