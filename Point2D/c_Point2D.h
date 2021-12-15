#pragma once
class c_Point2D
{
private:
	int x;
	int y;
public:
	inline c_Point2D() {
		x = y = 0;
	}
	inline c_Point2D(int coord) {
		x = y = coord;
	}
	inline c_Point2D(int x, int y) {
		this->x = x;
		this->y = y;
	}

	inline int getX() const {
		return x;
	}
	inline void setX(int num) {
		this->x = num;
	}

	inline int getY() const {
		return y;
	}
	inline void setY(int num) {
		this->y = num;
	}

};

