#include "Vector2.hpp"

vector2::vector2(float _x = 0, float _y = 0)
{
	x = _x;
	y = _y;
}

vector2::vector2(const vector2& vec)
{
	x = vec.x;
	y = vec.y;
}

vector2::vector2(const vector2&& vec)
{
	x = vec.x;
	y = vec.y;
}

float vector2::len(const vector2& vec)
{
	return sqrt(vec.x * vec.x + vec.y + vec.y);
}

vector2 vector2::getNormalized()const
{
	float length = len(*this);
	return vector2(this->x / length, this->x / length);
}

float vector2::scalar(const vector2& vec1, const vector2& vec2)
{
	return (vec1.x * vec2.x) + (vec1.y * vec2.y);
}

float vector2::angle(const vector2& vec1, const vector2& vec2)
{
	return acos(scalar(vec1, vec2));
}

vector2 vector2::operator+(const vector2& other)const 
{
	return vector2(this->x + other.x, this->y + other.y);
}

vector2 vector2::operator-(const vector2& other)const
{
	return vector2(this->x - other.x, this->y - other.y);
}

vector2 vector2::operator*(const float& num)const
{
	return vector2(x * num, y * num);
}

+
