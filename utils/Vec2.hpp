class Vec2 {
public:
	float x, y;

	Vec2();
	Vec2(float _x, float _y);

	Vec2 operator+(Vec2 const& rhs);
	Vec2& operator+=(Vec2 const& rhs);
	Vec2 operator*(float rhs);
};