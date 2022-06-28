#include "Vector2.hpp"

Vector2::Vector2(float x = 0, float y = 0)
{
	m_x = x;
	m_y = y;
}

Vector2::Vector2(const Vector2& vec)
{
	m_x = vec.m_x;
	m_y = vec.m_y;
}

Vector2& Vector2::operator=(const Vector2& other)
{
	m_x = other.m_x;
	m_y = other.m_y;
	return *this;
}

float Vector2::length()const
{
	return sqrt(m_x * m_x + m_y + m_y);
}

Vector2 Vector2::getNormalized()const
{
	float len = length();
	return Vector2(m_x / len, m_y / len);
}

float Vector2::scalar(const Vector2& other)
{
	return (m_x * other.m_x) + (m_y * other.m_y);
}

float Vector2::angle(const Vector2& other)
{
	return acos(scalar(other));
}

Vector2 Vector2::operator+(const Vector2& other)const 
{
	return Vector2(m_x + other.m_x, m_y + other.m_y);
}

Vector2 Vector2::operator-(const Vector2& other)const
{
	return Vector2(m_x - other.m_x, m_y - other.m_y);
}

Vector2 Vector2::operator*(const float& num)const
{
	return Vector2(m_x * num, m_y * num);
}

bool Vector2::operator<(const Vector2& other)const
{
	return m_x < other.m_x&& m_y < other.m_y;
}

bool Vector2::operator>(const Vector2& other)const
{
	return m_x > other.m_x&& m_y > other.m_y;
}

bool Vector2::operator<=(const Vector2& other)const
{
	return m_x <= other.m_x&& m_y <= other.m_y;
}

bool Vector2::operator>=(const Vector2& other)const
{
	return m_x >= other.m_x && m_y >= other.m_y;
}

bool Vector2::operator==(const Vector2& other)const
{
	return m_x == other.m_x && m_y == other.m_y;
}

bool Vector2::operator!=(const Vector2& other)const
{
	return m_x != other.m_x && m_y != other.m_y;
}



